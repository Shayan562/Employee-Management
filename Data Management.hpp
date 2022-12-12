#pragma once
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
#include "SearchingString.hpp"
using namespace std;

class DataManagement{
public:
    HashTable table;
    BST<int> *treeAge;
    BST<int> *treeSalary;
    // BST<string> *treeDepartment;
    BST<string> *treeNames;


    //functions
    DataManagement();
    void readFromFile();
    void writeToFile();
    void deleteData();
    void updateData();
    void sort();
    void search();
    void mainLoop();
    void createDataStructures();
    void insert(Employee &);
    void displayData();
    ~DataManagement();
};
DataManagement::DataManagement(){
    readFromFile();
}
DataManagement::~DataManagement(){
    writeToFile();
}
void DataManagement::insert(Employee &emp){
    table.insert(emp);
    createDataStructures();
}
void DataManagement::readFromFile(){
    Employee* newEmp;
    ifstream rd;
    rd.open("DataBase.txt");
    if(!rd){
        cout<<"\tFail";
    }
    
    string name, department="", bonusStr;
    int age,id,salary,day,month,year;
    char c=' ';
    string a;
    float bonus;
    
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
        i++;
    } 
    createDataStructures();
}
void DataManagement::createDataStructures(){
    NodeSingllyList *curr;
    treeAge=new BST<int>;
    // treeDepartment=new BST<string>;
    treeNames=new BST<string>;
    treeSalary=new BST<int>;
    bool firstInsertion=true;
    for(int i=0;i<table.size;i++){
        curr=table.table->arr[i].head;
        while(curr!=NULL){
            // curr->emp.Display();
            Employee emp(curr->emp);
            if(firstInsertion){
                treeAge->head=treeAge->insert(treeAge->head,emp,emp.getAge());
                treeSalary->head=treeSalary->insert(treeSalary->head,emp,emp.getSalary());
                treeNames->head=treeNames->insert(treeNames->head,emp,emp.getName());
                // treeDepartment->head=treeDepartment->insert(treeDepartment->head,emp,emp.getDeparment());
                firstInsertion=false;
                curr=curr->next;
                continue;
            }
            treeAge->insert(treeAge->head,emp,emp.getAge());
            treeSalary->insert(treeSalary->head,emp,emp.getSalary());
            treeNames->insert(treeNames->head,emp,emp.getName());
            // treeDepartment->insert(treeDepartment->head,emp,emp.getDeparment());
            curr=curr->next;
        }
    }
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
void DataManagement::deleteData(){
    // void Delete_all(doubllylinklist &list,HashTable &table,int ID){	//pass an employee ID to delete
	// //delete by id:
    int id;
    cout<<"\tEnter the ID: ";
    cin>>id;
	cout<<"\tRemoving Employee "<<id<<endl;
    Employee* obj=table.search(id);
    if(obj==NULL){
        cout<<"\tEmployee Not Found\n";
        return;
    }
	table.remove(id); //delete from hash table.
    createDataStructures();
	
}
void DataManagement::updateData(){
    int ID;
    cout<<"\tEnter the ID: ";
    cin>>ID;
    int choice=0;
	// int index=list.search_by_ID(ID);
	// NodeList *temp1= list.head;
	// for(int i=0;i<index;i++){
	// 	temp1=temp1->next; 		//to get to the node we need to update.
	// }

	Employee* obj1=table.search(ID);
    if(obj1==NULL){
        cout<<"\tNot Found\n";
        return;
    }
    // Employee obj1(*obj);
	cout<<"\tEnter the new information of the Employee: "<<endl;
	cout<<"\tDo you wish to change the name of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		string a;
		fflush(stdin);
		cout<<"\tEnter the updated name of the employee: ";
		getline(cin, a);
		obj1->setName(a);
	}	
	cout<<"\tDo you wish to change the bonus of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		cout<<"\tEnter the updated Bonus of the employee: ";
		float a;
		cin>>a;
		obj1->setBonus(a);
	}
	
	cout<<"\tDo you wish to change the department of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		fflush(stdin);
		string a;
		cout<<"\tEnter the updated department of the employee: ";
		getline(cin,a);
		obj1->setDeparment(a);
	}
	
	cout<<"\tDo you wish to change the salary of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		cout<<"\tEnter the updated salary of the employee: ";
		long long int a;
		cin>>a;
		obj1->setSalary(a);
	}
	
	cout<<"\tDo you wish to change the Age of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		cout<<"\tEnter the updated Age of the employee: ";
		int a;
		cin>>a;
		obj1->setAge(a);
	}
    // table.remove(ID);
    // table.insert(obj1);
    createDataStructures();

}
void DataManagement::search(){
    char c;
    while(true){

    system("CLS");
    cout << "\n\tPress [1] to search by ID\n\tPress [2] to search by Name\n\tPress [3] to search by Age\n\tPress [4] to search by Salary\n\tPress [5] to go back\n";
    int choice;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        {
            int id;
            cout<<"\tEnter the ID: ";
            cin>>id;
            Employee *obj=NULL;
            obj=table.search(id);
            if(obj==NULL){
                cout<<"\tNot Found\n";
            }
            else{
                cout<<"\tFound\n";
                obj->Display();
            }
            cout<<"\n\tEnter 1 to continue: ";
            cin>>c;
            break;
        }
    case 2:{
        string name;
        cout<<"\tEnter the Name(first letter capital): ";
        fflush(stdin);
        getline(cin,name);
        NodeBST<string>* functionObj=treeNames->search(treeNames->head,name);
        if(functionObj==NULL){
            doubllylinklist list;
            NodeSingllyList *curr;
            for(int i=0;i<table.size;i++){
                curr=table.table->arr[i].head;
                while(curr!=NULL){
                    list.insert(curr->emp);
                    curr=curr->next;
                }
            }
            string_search stringSearch;
            name=stringSearch.Search(list,name);
            if(name!=" "){
                functionObj = treeNames->search(treeNames->head, name);
                NodeSingllyList *curr1=functionObj->list.head;
                while(curr1!=NULL){
                    curr1->emp.Display();
                    curr1=curr1->next;
                    cout<<endl;
                }
            }
        }
        else{
            NodeSingllyList *curr2=functionObj->list.head;
            while(curr2!=NULL){
                curr2->emp.Display();
                curr2=curr2->next;
                cout<<endl;
            }
        }
        cout<<"\n\tEnter 1 to continue: ";
        cin>>c;
        break;
    }
    case 3:{
        int age;
        cout<<"\tEnter the Age: ";
        cin>>age;
        NodeBST<int>* functionObj=treeAge->search(treeAge->head, age);
        if(functionObj==NULL){
            cout<<"\tNot Found\n";
        }
        else{
            NodeSingllyList *curr=functionObj->list.head;
            while(curr!=NULL){
                curr->emp.Display();
                curr=curr->next;
                cout<<endl;
            }
        }
        cout<<"\n\tEnter 1 to continue: ";
        cin>>c;
        break;
    }
    case 4:{
        int salary;
        cout<<"\tEnter the Salary: ";
        cin>>salary;
        NodeBST<int>* functionObj=treeSalary->search(treeSalary->head, salary);
        if(functionObj==NULL){
            cout<<"\tNot Found\n";
        }
        else{
            NodeSingllyList *curr=functionObj->list.head;
            while(curr!=NULL){
                curr->emp.Display();
                curr=curr->next;
                cout<<endl;
            }
        }
        cout<<"\n\tEnter 1 to continue: ";
        cin>>c;
        break;
    }
    case 5:
        return;
    default:
        break;
    }
    }
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
void DataManagement::displayData(){
    cout<<"\nDisplaying Data From Hash Table\n";
    table.print();
}
// int main(){
//     DataManagement obj;
//     obj.readFromFile();
//     obj.table.print();
//     // obj.writeToFile();
//     // obj.search();
//     // obj.sort();
//     // obj.deleteData();
//     // obj.search();
//     obj.updateData();
//     obj.search();
//     // obj.table.print();

    

// }
