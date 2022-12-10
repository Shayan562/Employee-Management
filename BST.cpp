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
    string search(string reqName){
        if(head==NULL){
            return NULL;
        }
        //add string match function
    }
    NodeBST<tree>* search(NodeBST<tree>* node, tree req){
        if(node==NULL){
            cout<<"Not found\n";
            return NULL;
        }
        else if(req==node->data){
            cout<<"Found\n";
            // inorder(node);
            return node;
        }
        else if(req< node->data){
            return search(node->left,req);
        }
        else if(req > node->data){
            return search(node->right,req);
        }
        else{
            cout<<"Not Found";
            return NULL;
        }
    }
    void remove(nodeBST<tree> *node, tree data, int id){//no validation check
        if(node==NULL){
            cout<<"Could Not Delete\n";
        }
        else if(data==node->data){//delete/linked list check
            if(!removeFromList(node,id)){//the list/node has only one employee obj
                //normal bst node deletion
            }

        }
        else if(data < node->data){
            remove(node->left, data, id);
        }
        else if(data > node->data){
            remove(node->right, data, id);
        }
    }
    bool removeFromList(NodeBST<tree> *node, int id){
        if(node->numOfEmployees>1){
            node->list.remove(id);
            node->numOfEmployees=node->numOfEmployees-1;
            return true;
        }
        return false;
    }
    
    void inorder(NodeBST<tree> *node){
        if(node==NULL){
            return;
        }
        else{
            inorder(node->left);
            cout<<"Data: "<<node->data<<", Num of employees: "<<node->numOfEmployees<<"\n";
            node->list.Display();
            inorder(node->right);
        }
    }
};

int main(){
    Employee a;
    a.setAge(30);
    Employee b;
    b.setAge(30);
    Employee c;
    c.setAge(25);
    BST<int> tree;
    tree.head=tree.insert(tree.head,a,a.getAge());
    tree.insert(tree.head, c, c.getAge());
    // tree.inorder(tree.head);
    cout<<"--------NEW INSERTION--------\n";
    tree.insert(tree.head, b, b.getAge());
    // tree.inorder(tree.head);

    NodeBST<int> *val;
    val=tree.search(tree.head, 30);
    if(val){
        cout<<val->numOfEmployees;
    }
}