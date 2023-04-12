#include <iostream>
using namespace std;

class CharStack {
private:
    const int MAX_SIZE = 100;
    char stack[100];
    int top;

public:
    CharStack() 
    {
        top = -1; 
        for (int i = 0; i < MAX_SIZE; i++) {
            stack[i] = '\0'; 
        }
    }

    bool isEmpty() 
    { 
        return top == -1;
    }

    bool isFull() 
    {
        return top == MAX_SIZE - 1;
    }

    void push(char c) 
    { 
        if (!isFull()) {
            stack[++top] = c;
        }
        else {
            cout << "Stack is full" << endl;
        }
    }

    char pop() 
    {
        if (!isEmpty()) {
            return stack[top--];
        }
        else {
            cout << "Stack is empty" << endl;
            return '\0';
        }
    }

    int size() 
    { 
        return top + 1;
    }

    void clear() 
    {
        top = -1;
    }

    char peek()
        { 
        if (!isEmpty()) {
            return stack[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return '\0';
        }
    }
};

int main() {
    CharStack stack;

    stack.push('a');
    stack.push('b');
    stack.push('c');

    cout << "Stack size: " << stack.size() << endl;

    cout << "Top element: " << stack.peek() << endl;

    cout << "Pop: " << stack.pop() << endl;

    cout << "Stack size: " << stack.size() << endl << endl;

    stack.clear();

    cout << "DELETED" << endl << endl;

    cout << "Stack size: " << stack.size() << endl;

    return 0;
}