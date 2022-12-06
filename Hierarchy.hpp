#pragma once
#include <iostream>
#include "Nodes.hpp"
class Hierarchy
{
public:
    void insert(NodeHierarchy *head)
    {
        head->left = new NodeHierarchy("Cheif Technological Officer");
        head->middle = new NodeHierarchy("Managing Director");
        head->right = new NodeHierarchy("Head of Operations");
    }

    void printHierarchy(NodeHierarchy *head)
    {
        static int i = 0;
        if (head == NULL)
        {
            return;
        }
        if (i == 0)
        {
            cout << "\t\t" << head->position << "\t\t" << endl;
            i++;
        }
        else
        {
            cout << head->position << "  ";
        }
        printHierarchy(head->left);
        printHierarchy(head->middle);
        printHierarchy(head->right);
    }
};