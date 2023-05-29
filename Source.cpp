#include <iostream>
#include <vector>
#include <thread>
#include <numeric>
#include <mutex>

int calculateSum(const std::vector<int>& array, int start, int end) {
    return std::accumulate(array.begin() + start, array.begin() + end, 0);
}

int main() {
    const int arraySize = 100000;
    const int numThreads = 4;

    std::vector<int> array(arraySize);
    for (int i = 0; i < arraySize; ++i) {
        array[i] = rand() % 100;
    }

    std::vector<std::thread> threads(numThreads);
    int chunkSize = arraySize / numThreads;
    int sum = 0;

    std::mutex mtx;

    for (int i = 0; i < numThreads; ++i) {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? arraySize : start + chunkSize;

        threads[i] = std::thread([&sum, &array, start, end, &mtx]() {
            int partialSum = calculateSum(array, start, end);

            std::lock_guard<std::mutex> lock(mtx);
            sum += partialSum;
            });
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}