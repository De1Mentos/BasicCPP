#include <iostream>

template<typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;

        Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
    };

    Node* frontNode; 
    Node* rearNode; 
    int size; 

public:
    Queue() : frontNode(nullptr), rearNode(nullptr), size(0) {}

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() const {
        return (size == 0);
    }

    int getSize() const {
        return size;
    }

    void enqueue(const T& value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            frontNode = newNode;
            rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            newNode->prev = rearNode;
            rearNode = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Error: Queue is empty." << std::endl;
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode != nullptr) {
            frontNode->prev = nullptr;
        }
        else {
            rearNode = nullptr;
        }

        delete temp;
        size--;
    }

    T& front() const {
        if (isEmpty()) {
            throw std::runtime_error("Error: Queue is empty.");
        }

        return frontNode->data;
    }

    T& rear() const {
        if (isEmpty()) {
            throw std::runtime_error("Error: Queue is empty.");
        }

        return rearNode->data;
    }
};

int main() {
    Queue<int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Queue size: " << queue.getSize() << std::endl;
    std::cout << "Front element: " << queue.front() << std::endl;
    std::cout << "Rear element: " << queue.rear() << std::endl;

    queue.dequeue();

    std::cout << "Queue size after dequeue: " << queue.getSize() << std::endl;
    std::cout << "New front element: " << queue.front() << std::endl;

    return 0;
}