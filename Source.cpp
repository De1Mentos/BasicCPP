#include <iostream>
#include <queue>
#include <string>
#include <ctime>

using namespace std;

struct PrintJob {
    string user;
    int priority;
    time_t arrival_time;
};

queue<PrintJob> print_queue;
queue<PrintJob> print_stats;

void enqueue_job(string user, int priority) {
    PrintJob job = { user, priority, time(NULL) };
    print_queue.push(job);
}

PrintJob dequeue_job() {
    if (print_queue.empty()) {
        return PrintJob();
    }
    PrintJob job = print_queue.front();
    print_queue.pop();
    return job;
}

void print_stats_report() {
    while (!print_stats.empty()) {
        PrintJob job = print_stats.front();
        cout << "User: " << job.user << ", Time: " << job.arrival_time << endl;
        print_stats.pop();
    }
}

int main() {
    while (true) {
        string user;
        int priority;
        cout << "Enter user name: ";
        cin >> user;
        cout << "Enter priority (1-10): ";
        cin >> priority;
        if (priority < 1 || priority > 10) {
            cout << "Invalid priority! Please enter a number between 1 and 10." << endl;
            continue;
        }
        enqueue_job(user, priority);

        PrintJob job = dequeue_job();
        cout << "Printing job for user: " << job.user << ", priority: " << job.priority << endl;
        print_stats.push(job);

        if (print_stats.size() % 5 == 0) {
            cout << endl << "Printing statistics report:" << endl;
            print_stats_report();
            cout << endl;
        }
    }

    return 0;
}