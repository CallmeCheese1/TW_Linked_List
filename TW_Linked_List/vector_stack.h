#ifndef VECTOR_STACK_H
#define VECTOR_STACK_H

#include <vector>

// Stack class definition.
class Stack {
private:
    std::vector<int> stack;  // Vector to store stack elements.

public:
    Stack();                 // Constructor

    void push(int value);    // Pushes an element onto the stack.
    void pop();              // Pops an element from the stack.
    bool empty() const;      // Checks if the stack is empty.
    int top() const;         // Will return the top element of the stack.
    double average() const;  // Calculates the average value of the stack elements.
    void display() const;    // Displays the stack elements.
};

#endif