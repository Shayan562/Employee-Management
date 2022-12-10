// #pragma once
#include <iostream>
#include "Linked List.hpp"
#include "Nodes Special.cpp"
template<class tree>
class BST{
public:
    NodeBST<tree>* head;
    BST(){
        head=NULL;
    }
    NodeBST<tree>* insert(NodeBST<tree>* node, Employee emp, tree data){   
        if(node==NULL){
            NodeBST<tree> *temp=new NodeBST<tree>(data);
            temp->insert(emp);
            return temp;
        } 
        else if(data==node->data){
            node->insert(emp);
            return NULL;
        }
        else if(data < node->data){
            node->left=insert(node->left, emp, data);
        }
        else if(data > node->data){
            node->right=insert(node->right,emp, data);
        }
        return node;
    }
    
    void inorder(NodeBST<tree> *node){
        if(node==NULL){
            return;
        }
        else{
            inorder(node->left);
            cout<<"Salary: "<<node->data<<", Num of employees: "<<node->numOfEmployees<<"\n";
            node->list.Display();
            inorder(node->right);
        }
    }
};

int main(){
    Employee a;
    a.setSalary(30000);
    Employee b;
    b.setSalary(30000);
    Employee c;
    c.setSalary(10000);
    BST<int> tree;
    tree.head=tree.insert(tree.head,a,a.getSalary());
    tree.insert(tree.head, c, c.getSalary());
    tree.inorder(tree.head);
    cout<<"--------NEW INSERTION--------\n";
    tree.insert(tree.head, b, b.getSalary());
    tree.inorder(tree.head);
}