#include<iostream>
#include "linked_list.h"

using namespace std;

int main() {

	LinkedList<int> myList;

    // Use LinkedList's member functions to add/remove elements
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);


    std::cout << "Initial list: " << endl;
    myList.print(); // Assuming you have a print function in your LinkedList class

    // Perform some operations
    myList.pop_front();
    cout << "After pop_front: " << endl;
    myList.print();

    myList.push_front(5);
    cout << "After push_front: " << endl;
    myList.print();

    myList.pop_back();
    cout << "After pop_back: " << endl;
    myList.print();

    //gotta use front, back, insert, remove, and find

    cout << "The front item is " << myList.front() << endl;
    cout << "The back item is " << myList.back() << endl;

    cout << "Inserting a number at index 3..." << endl;
    myList.insert(3, 299);
    myList.print();

    cout << "Now, removing the number at index 2" << endl;
    myList.remove(2);
    myList.print();

    cout << "Now, where is the number I just put? It's at index " << myList.find(299) << endl;
    
    return 0;
}