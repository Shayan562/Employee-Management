// #pragma once
#include <iostream>
#include "Employees.hpp"
#include "Hierarchy.hpp"
#include "Nodes.hpp"
#include "Data Sort.hpp"
#include "Linked List.hpp"
#include "Hashing Table.hpp"
#include "Dynamic Queue.hpp"
#include<fstream>
#include "Update and Delete.hpp"
#include "BST.hpp"

class DataManagement{
public:
    HashTable table;
    BST<int> treeAge;
    BST<int> treeSalary;
    BST<string> treeDepartment;
    BST<string> treeNames;


    //functions
    void readFromFile();
    void writeToFile();
    void deleteData(int);
    void updateData(int);
    void sort();
    void mainLoop();
    void createDataStructures();
};
void DataManagement::readFromFile(){
    // Employee ob[14];
    Employee* newEmp;
    ifstream rd;
    rd.open("DataBase.txt");
    if(!rd){
        cout<<"Fail";
    }
    
    string name, department="", bonusStr;
    int age,id,salary,day,month,year;
    char c=' ';
    string a;
    float bonus;
    bool first=true;
    
    // for(int i=0;i<14;i++)
        int i=0;
    while(!rd.eof()){
        Employee ob;
        getline(rd,name);
        rd>>age>>salary>>id>>c;
        getline(rd,department);
        department=c+department;
        rd>>c;
        getline(rd,bonusStr);
        bonusStr=c+bonusStr;
        rd>>day>>month>>year;
        bonus=stof(bonusStr);
        // cout<<department<<endl;
        if(i==0){
            ob.setName(name);
        }
        else{
            name=a+name;
            ob.setName(name);
        }
        rd>>a;
        // Employee ob;
        ob.setAge(age);
        ob.setID(id);
        ob.setDeparment(department);
        ob.setBonus(bonus);
        ob.setSalary(salary);
        Date date(day,month,year);
        ob.setDate(date);
        // ob.Display();
        newEmp=new Employee(ob);
        table.insert(*newEmp);
        
        //  if(first){
        //         treeAge.head=treeAge.insert(treeAge.head,*newEmp,newEmp->getAge());
        //         treeSalary.head=treeSalary.insert(treeSalary.head,*newEmp,newEmp->getSalary());
        //         treeNames.head=treeNames.insert(treeNames.head,*newEmp,newEmp->getName());
        //         treeDepartment.head=treeDepartment.insert(treeDepartment.head,*newEmp,newEmp->getDeparment());
        //         first=false;
        //     }
        // else{
        //     treeAge.insert(treeAge.head,*newEmp,newEmp->getAge());
        //     treeSalary.insert(treeSalary.head,*newEmp,newEmp->getSalary());
        //     treeNames.insert(treeNames.head,*newEmp,newEmp->getName());
        //     treeDepartment.insert(treeDepartment.head,*newEmp,newEmp->getDeparment());

        //     }

        // newEmp->Display();
        i++;
    }
    treeAge.inorder(treeAge.head);
    createDataStructures();
}
void DataManagement::createDataStructures(){
    // Employee *arr = new Employee[table.elements];
    NodeSingllyList *curr;
    //tree
    // treeAge;
    // treeDepartment;
    // treeNames;
    // treeSalary;
    bool firstInsertion=true;
    for(int i=0;i<table.size;i++){
        curr=table.table->arr[i].head;
        while(curr!=NULL){
            // curr->emp.Display();
            Employee emp(curr->emp);
            if(firstInsertion){
                treeAge.head=treeAge.insert(treeAge.head,emp,emp.getAge());
                treeSalary.head=treeSalary.insert(treeSalary.head,emp,emp.getSalary());
                treeNames.head=treeNames.insert(treeNames.head,emp,emp.getName());
                treeDepartment.head=treeDepartment.insert(treeDepartment.head,emp,emp.getDeparment());
                firstInsertion=false;
                curr=curr->next;
                continue;
            }
            treeAge.insert(treeAge.head,emp,emp.getAge());
            treeSalary.insert(treeSalary.head,emp,emp.getSalary());
            treeNames.insert(treeNames.head,emp,emp.getName());
            treeDepartment.insert(treeDepartment.head,emp,emp.getDeparment());
            curr=curr->next;
        }
    }
    cout<<treeAge.total<<"TREE\n";
    NodeBST<int> *sal=treeSalary.search(treeSalary.head,200000);
    // treeAge.inorder(treeAge.head);
    // treeSalary.inorder(treeSalary.head);
}
void DataManagement::writeToFile(){

    ofstream wd;
    wd.open("DataBase.txt");
    // wd<<"this";
    for(int i=0;i<table.size;i++){
        NodeSingllyList* curr=table.table->arr[i].head;
        while(curr!=NULL){
            wd<<curr->emp.getName()<<'\n';
            wd<<curr->emp.getAge()<<'\n';
            wd<<curr->emp.getSalary()<<'\n';
            wd<<curr->emp.getId()<<'\n';
            wd<<curr->emp.getDeparment()<<'\n';
            wd<<curr->emp.getBonus()<<'\n';
            Date temp=curr->emp.getDate();
            wd<<temp.date<<'\n';
            wd<<temp.month<<'\n';
            wd<<temp.year<<'\n';
            curr=curr->next;
        }
    }
}
void DataManagement::deleteData(int id){
    // void Delete_all(doubllylinklist &list,HashTable &table,int ID){	//pass an employee ID to delete
	// //delete by id:
	// cout<<"Removing Employee "<<ID<<endl;
	// list.delete_fun(list.search_by_ID(ID+1)); //delete from linked list.
	// table.remove(ID); //delete from hash table.
	
}
void DataManagement::updateData(int id){
    // int choice=0;
	// int index=list.search_by_ID(ID);
	// NodeList *temp1= list.head;
	// for(int i=0;i<index;i++){
	// 	temp1=temp1->next; 		//to get to the node we need to update.
	// }
	// Employee* obj1=table.search(ID);
	// cout<<"Enter the new information of the Employee: "<<endl;
	// cout<<"Do you wish to change the name of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	// cin>>choice;
	// if(choice==1){
	// 	string a;
	// 	fflush(stdin);
	// 	cout<<"Enter the updated name of the employee: ";
	// 	getline(cin, a);
	// 	obj1->setName(a);
	// 	temp1->obj.setName(a);
	// }
	
	// cout<<"Do you wish to change the bonus of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	// cin>>choice;
	// if(choice==1){
	// 	cout<<"Enter the updated Bonus of the employee: ";
	// 	float a;
	// 	cin>>a;
	// 	//obj.setBonus(a);
	// 	obj1->setBonus(a);
	// 	temp1->obj.setBonus(a);
	// }
	
	// cout<<"Do you wish to change the department of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	// cin>>choice;
	// if(choice==1){
	// 	fflush(stdin);
	// 	string a;
	// 	cout<<"Enter the updated department of the employee: ";
	// 	getline(cin,a);
	// 	//obj.setDeparment(a);
	// 	obj1->setDeparment(a);
	// 	temp1->obj.setDeparment(a);
	// }
	
	// cout<<"Do you wish to change the salary of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	// cin>>choice;
	// if(choice==1){
	// 	cout<<"Enter the updated salary of the employee: ";
	// 	long long int a;
	// 	cin>>a;
	// 	//obj.setSalary(a);
	// 	obj1->setSalary(a);
	// 	temp1->obj.setSalary(a);
	// }
	
	// cout<<"Do you wish to change the Age of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	// cin>>choice;
	// if(choice==1){
	// 	cout<<"Enter the updated Age of the employee: ";
	// 	 int a;
	// 	cin>>a;
	// 	//obj.setSalary(a);
	// 	obj1->setAge(a);
	// 	temp1->obj.setAge(a);
	// }
}

void DataManagement::sort(){
    Employee *arr = new Employee[table.elements];
    for(int i=0,j=0;i<table.size;i++){
        NodeSingllyList* curr=table.table->arr[i].head;
        while(curr!=NULL){
           arr[j]=curr->emp;
           j++;
           curr=curr->next;
        }
    }
    DataSort sortData;
    sortData.sorting(arr,table.elements);

}
int main(){
    DataManagement obj;
    obj.readFromFile();
    obj.writeToFile();
    // obj.sort();
    

}