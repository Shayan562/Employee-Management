//#pragma once
#include <iostream>
using namespace std;

static int ID=0;
class node
{
    public:
    node *left;
    node *right;
    node *middle;
    string position;
    node()
    {
        left=NULL;
        right=NULL;
        middle=NULL;
        position = "";
    }
    node(string position="Cheif Executive Officer")
    {
        this->position=position;
        left=NULL;
        right=NULL;
        middle=NULL;
    }
};
class Hierarchy{
    public:
    void insert(node *head)
    {
        head->left=new node("Cheif Technological Officer");
        head->middle=new node("Managing Director");
        head->right=new node("Head of Operations");
    }
   
    
    void printHierarchy(node *head)
    {
        static int i=0;
        if(head==NULL)
        {
            return;
        }
        if(i==0)
        {
        cout<<"\t\t"<<head->position<<"\t\t"<<endl;
        i++;
        }
        else{
        cout<<head->position<<"  ";
        }
        printHierarchy(head->left);
        printHierarchy(head->middle);
        printHierarchy(head->right);
    }
};
class Date{
public:
    int date;
    int month;
    int year;
    Date(int data=1, int month=1, int year=2022){
        this->date=date;
        this->month=month;
        this->year=year;
    }
};
//Date::Date(int date=1, int month=1, int year=2022):date(date),month(month),year(){}

class Employee{
protected:
    string name;
    int id;
    Date dateJoined;
    int salary;
    float bonus;
    string department;
    string superior;

public:
    Employee();

    //Getter
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    Date getDate()
    {
        return dateJoined;
    }
    int getSalary()
    {
        return salary;
    }
    float getBonus()
    {
        return bonus;
    }
    string getDeparment()
    {
        return department;
    }
    string getSuperior()
    {
        return superior;
    }
    
    //Setters
    void setName(string name)
    {
        this->name=name;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setDate(Date date)
    {
        dateJoined=date;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void setBonus(float bonus)
    {
        this->bonus=bonus;
    }
    void setDeparment(string department)
    {
        this->department=department;
    }
    void setSuperior(string superior)
    {
        this->superior=superior;
    }
    void Display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<department<<endl;
        cout<<salary<<endl;
    }
};
Employee::Employee(){
    name="";
    id=++ID;
    salary= 35000;      //base salary
    bonus= 1.1;         //10%
    department= "Not Assigned";
    superior= "Not Assigned";
}
class list{
    public:
    Employee obj;
    list *next;
    list *prev;
    list()
    {
        next=NULL;
        prev=NULL;
    }
    list(Employee &ob)
    {
        next=NULL;
        prev=NULL;
        obj.setName(ob.getName());
        obj.setID(ob.getId());
        obj.setDate(ob.getDate());
        obj.setSalary(ob.getSalary());
        obj.setBonus(ob.getBonus());
        obj.setDeparment(ob.getDeparment());
        obj.setSuperior(ob.getSuperior());

    }
};
    class doubllylinklist{
        public:
        list *head;
        list *tail;
        doubllylinklist()
        {
            head=NULL;
            tail=NULL;
        }
        void insert(Employee &obj)
        {
            list *temp=new list(obj);
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                return;
            }
            list *curr=head;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->next=temp;
            temp->prev=curr;
            tail=temp;
        }
        void Display()
        {
            list*curr=head;
            while(curr!=NULL)
            {
                curr->obj.Display();
                curr=curr->next;
            }
        }
    };
int main()
{
    node *CEO=new node("Cheif Executive Officer");
    Hierarchy company;
    company.insert(CEO);
     company.printHierarchy(CEO);
     Employee obj;
     obj.setName("Muhammad Rehan Khan");
     obj.setID(3172);
     obj.setDeparment("CEO");
     obj.setSalary(1000000);
     obj.setBonus(2.1);
     obj.setSuperior(" ");
     doubllylinklist ob;
     ob.insert(obj);
     ob.Display();


    Employee obj1;

     obj1.setName("Azaan");
     obj1.setID(3208);
     obj1.setDeparment("CTO");
     obj1.setSalary(2000000);
     obj1.setBonus(1.5);
     obj1.setSuperior(" ");

     doubllylinklist ob1;
     ob1.insert(obj1);
     ob1.Display();

     Employee obj2;


     obj2.setName("Shayan");
     obj2.setID(3208);
     obj2.setDeparment("CIO");
     obj2.setSalary(3000000);
     obj2.setBonus(1.6);
     obj2.setSuperior(" ");

     doubllylinklist ob2;
     ob2.insert(obj2);
     ob2.Display();

     Employee obj3;


     obj3.setName("name 1");
     obj3.setID(3208);
     obj3.setDeparment("MD");
     obj3.setSalary(150000);
     obj3.setBonus(1.0);
     obj3.setSuperior(" ");

     doubllylinklist ob3;
     ob3.insert(obj3);
     ob3.Display();
     
     Employee obj4;


     obj4.setName("name 2");
     obj4.setID(3208);
     obj4.setDeparment("HO");
     obj4.setSalary(200000);
     obj4.setBonus(1.5);
     obj4.setSuperior(" ");

     doubllylinklist ob4;
     ob4.insert(obj4);
     ob4.Display();

     Employee obj5;


     obj5.setName("name 3");
     obj5.setID(3208);
     obj5.setDeparment("HR");
     obj5.setSalary(300000);
     obj5.setBonus(1.5);
     obj5.setSuperior(" ");

     doubllylinklist ob5;
     ob5.insert(obj5);
     ob5.Display();

     Employee obj6;


     obj6.setName("name 4");
     obj6.setID(3208);
     obj6.setDeparment("FO"); //Finance officer
     obj6.setSalary(400000);
     obj6.setBonus(1.5);
     obj6.setSuperior(" ");

     doubllylinklist ob6;
     ob6.insert(obj6);
     ob6.Display();

     Employee obj7;


     obj7.setName("name 6");
     obj7.setID(3208);
     obj7.setDeparment("AH");  //Accounting head
     obj7.setSalary(500000);
     obj7.setBonus(1.5);
     obj7.setSuperior(" ");

     doubllylinklist ob7;
     ob7.insert(obj7);
     ob7.Display();

     Employee obj8;


     obj8.setName("name 7");
     obj8.setID(3208);
     obj8.setDeparment("HRA"); //Human Resource Assistant 
     obj8.setSalary(200000);
     obj8.setBonus(1.5);
     obj8.setSuperior(" ");

     doubllylinklist ob8;
     ob8.insert(obj8);
     ob8.Display();

     Employee obj9;


     obj9.setName("name 8");
     obj9.setID(3208);
     obj9.setDeparment("HRR");
     obj9.setSalary(250000); //Human Resource Representative
     obj9.setBonus(1.5);
     obj9.setSuperior(" ");

     doubllylinklist ob9;
     ob9.insert(obj9);
     ob9.Display();

     Employee obj10;

     obj10.setName("name 9");
     obj10.setID(3208);
     obj10.setDeparment("HRA");
     obj10.setSalary(350000); //Human Resource Administrator
     obj10.setBonus(1.5);
     obj10.setSuperior(" ");

     doubllylinklist ob10;
     ob10.insert(obj10);
     ob10.Display();

     Employee obj11;

     obj11.setName("name 10");
     obj11.setID(3208);
     obj11.setDeparment("HRG");
     obj11.setSalary(250000); //Human Resource Generalist
     obj11.setBonus(1.5);
     obj11.setSuperior(" ");

     doubllylinklist ob11;
     ob11.insert(obj11);
     ob11.Display();

     Employee obj12;

     obj12.setName("name 11");
     obj12.setID(3208);
     obj12.setDeparment("PM");
     obj12.setSalary(550000); //Personal Manager 
     obj12.setBonus(1.5);
     obj12.setSuperior(" ");

     doubllylinklist ob12;
     ob12.insert(obj12);
     ob12.Display();

     Employee obj13;

     obj13.setName("name 12");
     obj13.setID(3208);
     obj13.setDeparment("HRD");
     obj13.setSalary(850000); //Human Resource Director 
     obj13.setBonus(1.5);
     obj13.setSuperior(" ");

     doubllylinklist ob13;
     ob13.insert(obj13);
     ob13.Display();

     
     


}
