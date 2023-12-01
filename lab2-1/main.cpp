//
// Created by 邱姜铭 on 2023/12/1.
//
#include <iostream>
#include "Point2D.h"
#include "LinkQueue.h"

using namespace std;

int main() {
    LinkQueue<Point2D> queue;
    Point2D p1(1, 2), p2(3, 4), p3(5, 6);
    queue.EnQueue(p1);
    queue.EnQueue(p2);
    Point2D p;
    queue.GetHead(p);
    cout << p << endl;
    queue.DelQueue(p);
    queue.EnQueue(p3);
    cout << queue.GetLength() << endl;
    queue.Traverse([](const Point2D &point2D) {
        cout << point2D << endl;
    });

}