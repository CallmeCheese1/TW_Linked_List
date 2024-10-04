#include <iostream>
#include <numeric> // For the accumulate function, which lets us efficently calculate the average of all the items inside the stack. Since this is necessary, we'll assume that the stack is meant to hold integers.
#include "vector_stack.h"

using namespace std;

// Constructor
Stack::Stack() {}

// Push an element onto the stack.
void Stack::push(int value) {
    stack.push_back(value);
}

// Pops, or removes, an element from the stack.
void Stack::pop() {
    if (!stack.empty()) {
        stack.pop_back();
    }
    else {
        cout << "Stack is empty! Nothing to pop." << endl;
    }
}

// Check if the stack is empty.
bool Stack::empty() const {
    return stack.empty();
}

// Get the top element of the stack.
int Stack::top() const {
    if (!stack.empty()) {
        return stack.back();
    }
    else {
        cout << "Stack is empty! No top element." << std::endl;
        return -1;  // Return an invalid value if the stack is empty.
    }
}

// Get the average value of the stack elements.
double Stack::average() const {
    if (!stack.empty()) {
        int sum = accumulate(stack.begin(), stack.end(), 0);
        return static_cast<double>(sum) / stack.size();
    }
    else {
        cout << "Stack is empty! No average to compute." << endl;
        return 0;  // Return 0 if the stack is empty.
    }
}

// Display the stack elements.
void Stack::display() const {
    cout << "Stack elements (top to bottom): ";
    for (auto it = stack.rbegin(); it != stack.rend(); ++it) {
        cout << *it << " > ";
    }
    cout << endl;
}