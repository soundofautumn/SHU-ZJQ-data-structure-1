//
// Created by 邱姜铭 on 2023/11/28.
//
#include <iostream>
#include "SeqList.h"
#include "DblLinkList.h"
#include "Point2D.h"

using namespace std;

void SeqListTest();

void DblLinkListTest();

int main() {
    cout << "====================SeqListTest===========================" << endl;
    SeqListTest();
    cout << "====================DblLinkListTest===========================" << endl;
    DblLinkListTest();
}

void SeqListTest() {
    SeqList<Point2D> list;
    auto visit = [](const Point2D &point2D) {
        cout << point2D << endl;
    };
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    list.InsertElem(Point2D(1, 2));
    list.InsertElem(Point2D(2, 3));
    list.InsertElem(Point2D(2, 3));
    list.InsertElem(Point2D(3, 3));
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    Point2D point2D;
    cout << "The first element is:"
         << list.GetElem(1, point2D) << endl;
    cout << "The list is:" << endl;
    list.Traverse(visit);
    cout << "Reverse list test" << endl;
    list.Reverse();
    cout << "The list is:" << endl;
    list.Traverse(visit);
    point2D = Point2D(2, 3);
    cout << "The location of the point is:"
         << list.LocateElem(point2D) << endl;
    cout << "Delete same item test" << endl;
    list.DelSameItem(point2D);
    cout << "The list is:" << endl;
    list.Traverse(visit);
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    list.Clear();
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    list.InsertElem(Point2D(1, 2));
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    cout << "The length of the list is:"
         << list.GetLength() << endl;
}

void DblLinkListTest() {
    DblLinkList<Point2D> list;
    auto visit = [](const Point2D &point2D) {
        cout << point2D << endl;
    };
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    list.InsertElem(Point2D(1, 2));
    list.InsertElem(Point2D(2, 3));
    list.InsertElem(Point2D(2, 3));
    list.InsertElem(Point2D(3, 3));
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    Point2D point2D;
    cout << "The first element is:"
         << list.GetElem(1, point2D) << endl;
    cout << "The list is:" << endl;
    list.Traverse(visit);
    cout << "The list is:" << endl;
    list.Traverse(visit);
    point2D = Point2D(2, 3);
    cout << "The location of the point is:"
         << list.LocateElem(point2D) << endl;
    cout << "The list is:" << endl;
    list.Traverse(visit);
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    list.Clear();
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    cout << "The length of the list is:"
         << list.GetLength() << endl;
    list.InsertElem(Point2D(1, 2));
    cout << "The list is empty:"
         << list.IsEmpty() << endl;
    cout << "The length of the list is:"
         << list.GetLength() << endl;
}

