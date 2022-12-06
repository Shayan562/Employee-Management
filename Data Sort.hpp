#pragma once
#include <iostream>
#include "Nodes.hpp"
#include "Linked List.hpp"
#include "Dynamic Array.hpp"
using namespace std;

class DataSort
{
public:
    void sorting(doubllylinklist &obj)
    {
        NodeList *temphead = obj.head;
        int size = 0;
        while (temphead != NULL)
        {
            size++;
            temphead = temphead->next;
        }
        cout << endl;
        // cout<<size;
        NodeList *emp = obj.head;
        Employee *arr;
        arr = new Employee[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = emp->obj;
            emp = emp->next;
        }
        int choice;
        cout << "----------Sorting Data----------\n";
        cout << "Press [1] to Sort Data accoring to Name \n";
        cout << "Press [2] to Sort Data accoring to Salary\n";
        cout << "Press [3] to Sort Data accoring to Age\n";

        cin >> choice;
        mergesort(arr, 0, size - 1, choice);
        for (int i = 0; i < size; i++)
        {
            arr[i].Display();
        }
    }
    void merge(Employee *arr, int l, int mid, int r, int choice)
    {
        int n1 = (mid - l) + 1;
        int n2 = r - mid;

        Array<Employee> a(n1);
        Array<Employee> b(n2);
        // Employee a[n1];
        // Employee b[n2];
        for (int i = 0; i < n1; i++)
        {
            a.arr[i] = arr[i + l];
        }
        for (int i = 0; i < n2; i++)
        {
            b.arr[i] = arr[mid + i + 1];
        }
        int i = 0;
        int j = 0;
        int k = l;
        while (n1 > i && n2 > j)
        {
            if (choice == 2)
            {
                if (a.arr[i].getSalary() >= b.arr[j].getSalary())
                {
                    arr[k] = b.arr[j];
                    j++;
                    k++;
                }
                else if (a.arr[i].getSalary() <= b.arr[j].getSalary())
                {
                    arr[k] = a.arr[i];
                    i++;
                    k++;
                }
            }
            else if (choice == 1)
            {
                if (a.arr[i].getName() >= b.arr[j].getName())
                {
                    arr[k] = b.arr[j];
                    j++;
                    k++;
                }
                else if (a.arr[i].getName() <= b.arr[j].getName())
                {
                    arr[k] = a.arr[i];
                    i++;
                    k++;
                }
            }
            else
            {
                if (a.arr[i].getAge() >= b.arr[j].getAge())
                {
                    arr[k] = b.arr[j];
                    j++;
                    k++;
                }
                else if (a.arr[i].getAge() <= b.arr[j].getAge())
                {
                    arr[k] = a.arr[i];
                    i++;
                    k++;
                }
            }
        }
        while (n1 > i)
        {
            arr[k] = a.arr[i];
            k++;
            i++;
        }
        while (n2 > j)
        {
            arr[k] = b.arr[j];
            k++;
            j++;
        }
    }
    void mergesort(Employee *arr, int l, int r, int choice)
    {
        if (l < r)
        {
            int mid = (l + r) / 2;
            mergesort(arr, l, mid, choice);
            mergesort(arr, mid + 1, r, choice);
            merge(arr, l, mid, r, choice);
        }
    }
};