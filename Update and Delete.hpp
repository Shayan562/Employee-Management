#include <iostream>
#include "Employees.hpp"
#include "Hierarchy.hpp"
#include "Nodes.hpp"
#include "Data Sort.hpp"
#include "Linked List.hpp"
#include "Hashing Table.hpp"
#include "Dynamic Queue.hpp"
#include<stdlib.h>
#include <Windows.h>
#include<unistd.h>
#include <cstdlib>
#include<fstream>

void Delete_all(doubllylinklist &list,HashTable &table,int ID){	//pass an employee ID to delete
	//delete by id:
	cout<<"Removing Employee "<<ID<<endl;
	list.delete_fun(list.search_by_ID(ID+1)); //delete from linked list.
	table.remove(ID); //delete from hash table.
	
}

void update_all(doubllylinklist &list, HashTable &table, int ID){
	int choice=0;
	int index=list.search_by_ID(ID);
	NodeList *temp1= list.head;
	for(int i=0;i<index;i++){
		temp1=temp1->next; 		//to get to the node we need to update.
	}
	cout<<"Enter the new information of the Employee: "<<endl;
	cout<<"Do you wish to change the name of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		string a;
		fflush(stdin);
		cout<<"Enter the updated name of the employee: ";
		getline(cin, a);
		temp1->obj.setName(a);
	}
	
	cout<<"Do you wish to change the bonus of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		cout<<"Enter the updated Bonus of the employee: ";
		float a;
		cin>>a;
		//obj.setBonus(a);
		temp1->obj.setBonus(a);
	}
	
	cout<<"Do you wish to change the department of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		fflush(stdin);
		string a;
		cout<<"Enter the updated department of the employee: ";
		getline(cin,a);
		//obj.setDeparment(a);
		temp1->obj.setDeparment(a);
	}
	
	cout<<"Do you wish to change the salary of the employee against the ID "<<ID<<"? Press 1 if yes: ";
	cin>>choice;
	if(choice==1){
		cout<<"Enter the updated salary of the employee: ";
		long long int a;
		cin>>a;
		//obj.setSalary(a);
		temp1->obj.setSalary(a);
	}
	
	// for hashtable:
	
}
