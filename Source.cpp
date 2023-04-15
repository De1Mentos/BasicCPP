#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
    };

    Node* top;
    int size;

public:
    Stack() : top(nullptr), size(0) {}

    void push(T data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        size++;
    }

    T pop() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty!");
        }
        Node* temp = top;
        top = top->next;
        T data = temp->data;
        delete temp;
        size--;
        return data;
    }

    T peek() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty!");
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int getSize() {
        return size;
    }
};

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data, Node* next = nullptr) : data(data), next(next) {}
    };

    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    void AddToHead(T data) {
        head = new Node(data, head);
        if (tail == nullptr) {
            tail = head;
        }
    }

    void AddToTail(T data) {
        Node* node = new Node(data);
        if (head == nullptr) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    void DeleteFromHead() {
        if (head != nullptr) {
            Node* node = head;
            head = head->next;
            delete node;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
    }

    void DeleteFromTail() {
        if (tail != nullptr) {
            if (head == tail) {
                delete head;
                head = tail = nullptr;
            }
            else {
                Node* node = head;
                while (node->next != tail) {
                    node = node->next;
                }
                delete tail;
                tail = node;
                tail->next = nullptr;
            }
        }
    }

    void DeleteAll() {
        while (head != nullptr) {
            Node* node = head;
            head = head->next;
            delete node;
        }
        tail = nullptr;
    }

    void Show() const {
        Node* node = head;
        while (node != nullptr) {
            std::cout << node->data << " ";
            node = node->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        DeleteAll();
    }
};

int main() {
    LinkedList<int> list;

    list.AddToHead(1);
    list.AddToHead(2);
    list.AddToTail(3);
    list.AddToTail(4);
    list.Show();
    list.DeleteFromHead();
    list.DeleteFromTail();
    list.Show();
    list.DeleteAll();
    list.Show();

    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Size: " << stack.getSize() << endl;
    cout << "Top element: " << stack.peek() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Size: " << stack.getSize() << endl;
    return 0;
}