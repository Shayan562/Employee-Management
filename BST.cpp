// #pragma once
#include <iostream>
#include "Linked List.hpp"
#include "Nodes.hpp"
#include "Nodes Special.cpp"
// template<class tree>
// class BST{
//     NodeBST *head;
//     // BST();
// // BST::
//     BST(){
//         head=NULL;
//     }
//     NodeBST* insert(NodeBST* node, Employee emp){   
//         NodeBST* temp=new NodeBST(emp);
//         if(node==NULL){
//             return temp;
//         } 
//         else if(data < node->data){
//             node->left=insert(node->left, data);
//         }
//         else{
//             node->right=insert(node->right, data);
//         }
//         return node;
//     }
    
//     void preorder(Node *node){
//         if(node==NULL){
//             return;
//         }
//         else{
//             cout<<node->data<<" ";
//             preorder(node->left);
//             preorder(node->right);
//         }
//     }
//     void inorder(Node *node){
//         if(node==NULL){
//             return;
//         }
//         else{
//             inorder(node->left);
//             cout<<node->data<<" ";
//             inorder(node->right);
//         }
//     }
//     void postorder(Node *node){
//         if(node==NULL){
//             return;
//         }
//         else{
//             postorder(node->left);
//             postorder(node->right);
//             cout<<node->data<<" ";
//         }
//     }
// };