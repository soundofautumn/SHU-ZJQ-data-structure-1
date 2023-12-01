//
// Created by 邱姜铭 on 2023/12/1.
//
#include <iostream>
#include "Point2D.h"
#include "SeqStack.h"

using namespace std;

int main() {
    SeqStack<Point2D> stack(2);
    Point2D p1(1, 2), p2(3, 4), p3(5, 6);
    stack.Push(p1);
    stack.Push(p2);
    stack.Push(p3);
    stack.Traverse([](const Point2D &point2D) {
        cout << point2D << endl;
    });
}
