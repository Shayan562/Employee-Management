#pragma once
#include <iostream>
#include "Nodes.hpp"
#include "Linked List.hpp"
#include "Dynamic Array.hpp"
using namespace std;

class DataSort
{
public:
    void sorting(Employee *arrInput, int sizeInput)
    {
        int size = sizeInput; //change
        

        Employee *arr = arrInput; //change
        
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

        //Array<Employee> a(n1);
        //Array<Employee> b(n2);
         Employee a[n1];
         Employee b[n2];
        for (int i = 0; i < n1; i++)
        {
            a[i] = arr[i + l];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = arr[mid + i + 1];
        }
        int i = 0;
        int j = 0;
        int k = l;
        while (n1 > i && n2 > j)
        {
            if (choice == 2)
            {
                if (a[i].getSalary() >= b[j].getSalary())
                {
                    arr[k] = b[j];
                    j++;
                    k++;
                }
                else if (a[i].getSalary() <= b[j].getSalary())
                {
                    arr[k] = a[i];
                    i++;
                    k++;
                }
            }
            else if (choice == 1)
            {
                if (a[i].getName() >= b[j].getName())
                {
                    arr[k] = b[j];
                    j++;
                    k++;
                }
                else if (a[i].getName() <= b[j].getName())
                {
                    arr[k] = a[i];
                    i++;
                    k++;
                }
            }
            else
            {
                if (a[i].getAge() >= b[j].getAge())
                {
                    arr[k] = b[j];
                    j++;
                    k++;
                }
                else if (a[i].getAge() <= b[j].getAge())
                {
                    arr[k] = a[i];
                    i++;
                    k++;
                }
            }
        }
        while (n1 > i)
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        while (n2 > j)
        {
            arr[k] = b[j];
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