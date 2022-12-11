#pragma once
#include <iostream>
#include "Linked List.hpp"
#include "Nodes Special.cpp"
template<class tree>
class BST{
public:
    NodeBST<tree>* head;
    int total;
    BST(){
        head=NULL;
        total=0;
    }
    NodeBST<tree>* insert(NodeBST<tree>* node, Employee emp, tree data){   
        if(node==NULL){
            total++;
            NodeBST<tree> *temp=new NodeBST<tree>(data);
            temp->insert(emp);
            return temp;
        } 
        else if(data==node->data){
            total++;
            node->insert(emp);
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
    void remove(NodeBST<tree>* node, tree data, int id){//no validation check
        if(node==NULL){
            cout<<"Could Not Delete\n";
        }
        else if(data==node->data){//delete/linked list check
            if(!removeFromList(node,id)){//the list/node has only one employee obj
                if(node==head){
                    head=deleteNode(head,data);
                }
                else{
                    deleteNode(head, data);
                }
            }
        }
        else if(data < node->data){
            remove(node->left, data, id);
        }
        else if(data > node->data){
            remove(node->right, data, id);
        }
    }

    NodeBST<tree>* getMin(NodeBST<tree>* node){
        NodeBST<tree>* curr= node;
        while(curr->left!=NULL){
            curr=curr->left;
        }
        return curr;
    }
    NodeBST<tree>* getMax(NodeBST<tree>* node){
        NodeBST<tree>* curr= node;
        while(curr->right!=NULL){
            curr=curr->right;
        }
        return curr;
    }
    NodeBST<tree>* deleteNode(NodeBST<tree>* node, tree data){
        if(node==NULL){
            return NULL;
        }
        if(data<node->data){
            node->left=deleteNode(node->left,data);
        }
        else if(data>node->data){
            node->right=deleteNode(node->right,data);
        }
        else{ 
            if(node->left==NULL && node->right==NULL){
                return NULL;
            }
            else if(node->left==NULL){
                NodeBST<tree>* temp=node->right;
                NodeBST<tree>* del=node;
                delete del;
                return temp;
            }
            else if(node->right==NULL){
                NodeBST<tree>* temp=node->left;
                NodeBST<tree>* del=node;
                delete del;
                return temp;
            }
            //has 2 childs
            NodeBST<tree>* suc= getMin(node->right);
            NodeBST<tree>* del=node;
            suc->left=node->left;
            suc->right=node->right;
            delete del;
            return suc;
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
        else if(node->left==NULL && node->right==NULL){
            node->list.Display();
        }
        else if(node->left==NULL){
            node->list.Display();
            inorder(node->right);
        }
        else if(node->right==NULL){
            node->list.Display();
            inorder(node->left);
        }
        else{
            cout<<"Data: "<<node->data<<", Num of employees: "<<node->numOfEmployees<<"\n";
            node->list.Display();
    
            inorder(node->left);
            inorder(node->right);
        }
    }
};

// int main(){
//     Employee a;
//     a.setAge(30);
//     Employee b;
//     b.setAge(30);
//     Employee c;
//     c.setAge(25);
//     Employee d;
//     d.setAge(23);
//     Employee e;
//     e.setAge(24);
//     BST<int> tree;
//     tree.head=tree.insert(tree.head,a,a.getAge());
//     tree.insert(tree.head, c, c.getAge());
//     // tree.inorder(tree.head);
//     cout<<"--------NEW INSERTION--------\n";
//     tree.insert(tree.head, b, b.getAge());
//     tree.insert(tree.head, d, d.getAge());
//     tree.insert(tree.head, e, e.getAge());
//     // tree.remove(tree.head, 30, 2);
//     tree.inorder(tree.head);

//     cout<<"Deleting Another\n\n";
//     // tree.remove(tree.head, 30, 1);
//     // tree.inorder(tree.head);

// }