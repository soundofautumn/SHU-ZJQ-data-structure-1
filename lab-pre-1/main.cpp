//
// Created by 邱姜铭 on 2023/11/29.
//
#include <iostream>
#include "StaticLinkedList.h"

using namespace std;

int main() {
    auto print_int = [](const int &data) {
        cout << data << " ";
    };
    StaticLinkedList<int> list(10);
    for (int i = 1; i < 8; ++i) {
        list.insert(i);
    }
    cout << "the length of the list is " << list.getSize() << endl;
    cout << "the list is: ";
    list.print(print_int);
    cout << endl;
    cout << "set the first element to 10 result: "
         << list.set(0, 10) << endl;
    cout << "the list is: ";
    list.print(print_int);
    cout << endl;
    cout << "remove the first and third element" << endl;
    list.remove(0);
    list.remove(2);
    cout << "the length of the list is " << list.getSize() << endl;
    cout << "the list is: ";
    list.print(print_int);
    cout << endl;
    cout << "the position of 2 is "
         << list.find(2) << endl;
    cout << "the position of 3 is "
         << list.find(3) << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "insert " << i
             << " insert result: "
             << list.insert(i) << endl;
    }
    cout << "the list is: ";
    list.print(print_int);
    cout << endl;
    cout << "the list is full: "
         << list.full() << endl;
    cout << "set the tenth element to 10 result: "
         << list.set(9, 10) << endl;
    cout << "the list is:";
    list.print(print_int);
    cout << endl;
    cout << "clear the list" << endl;
    list.clear();
    cout << "the list is empty: "
         << list.empty() << endl;
    cout << "the list is: ";
    list.print(print_int);
    cout << endl;
}
