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
    void setDate(int d,int m,int y)
    {
        date=d;
        month=m;
        year=y;
    }
    void DisplayDate()
    {
        cout<<date<<"/"<<month<<"/"<<year;
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
    void setDate(Date ob)
    {
        dateJoined.date=ob.date;
        dateJoined.month=ob.month;
        dateJoined.year=ob.year;
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
        cout<<"------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Identification Number: "<<id<<endl;
        cout<<"Joining Date (dd/mm/yy): ";
        dateJoined.DisplayDate();
        cout<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        //cout<<"------------------------"<<endl;

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
        // int search_by_ID(int id){ //returns the node at which the id is at.
        //     list* temp= head;
        //         int counter=0;
        //         while(temp!=NULL){
        //             if(temp->obj.getId()==id){
        //                 return counter;
        //             }
        //             else{
        //                 counter++;
        //                 temp=temp->next;
        //             }
        //         }
            
        // }

        // void delete_by_id(int index){
        //     list* curr=head;
        //     list* prev;
        //     int counter =0;
        //     list* temp=head;
        //     while(temp->next!=NULL){
        //         counter++;
        //         temp=temp->next;
        //     }
        //     if(index==0){               //if the head is to be deleted
        //         list* temp1=head;
        //         list* temp2=head->next;
        //         head=temp2;
        //         temp1->next=NULL;
        //         temp1->prev=NULL;
        //         delete temp;
        //     }

        //     if(index==counter){         //if the tail is to be deleted
        //         for(int i=0;i<index;i++){
        //         prev=curr;
        //         curr=curr->next;
        //        }
        //     prev->next=NULL;
        //     curr->next=NULL;
        //     curr->prev=NULL;
        //     tail=prev;
        //     delete curr;
        //     }

        //     else{

            
        //     for(int i=0;i<index;i++){
        //         prev=curr;
        //         curr=curr->next;
        //     }
        //     prev=curr->next;
        //     curr->next=NULL;
        //     curr->prev=NULL;
        //     curr->next->prev=prev;
        //     delete curr;
        //     }
        // }
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
    Date d;
    node *CEO=new node("Cheif Executive Officer");
    Hierarchy company;
    company.insert(CEO);
     company.printHierarchy(CEO);
     Employee obj;
     obj.setName("Muhammad Rehan Khan");
     obj.setID(3172);
     d.setDate(17,11,1994);
     obj.setDate(d);
     obj.setDeparment("Cheif Executive Officer");
     obj.setSalary(1000000);
     obj.setBonus(2.1);
     obj.setSuperior(" ");
     doubllylinklist ob;
     ob.insert(obj);
     ob.Display();


    Employee obj1;

     obj1.setName("Azaan Nabi Khan");
     obj1.setID(3208);
     d.setDate(1,2,1996);
     obj1.setDate(d);
     obj1.setDeparment("Cheif Technology Officer");
     obj1.setSalary(2000000);
     obj1.setBonus(1.5);
     obj1.setSuperior(" ");

     doubllylinklist ob1;
     ob1.insert(obj1);
     ob1.Display();

     Employee obj2;


     obj2.setName("Syed Shayan Hussain");
    //  obj2.setID(3208);
     d.setDate(9,4,1997);
     obj2.setDate(d);
     obj2.setDeparment("Managing Director");
     obj2.setSalary(3000000);
     obj2.setBonus(1.6);
     obj2.setSuperior(" ");

     doubllylinklist ob2;
     ob2.insert(obj2);
     ob2.Display();

     Employee obj3;


     obj3.setName("Oliviia Robin");
    //  obj3.setID(3208);
     d.setDate(19,6,1999);
     obj3.setDate(d);
     obj3.setDeparment("Head of Operations");
     obj3.setSalary(150000);
     obj3.setBonus(1.0);
     obj3.setSuperior(" ");

     doubllylinklist ob3;
     ob3.insert(obj3);
     ob3.Display();
     
     Employee obj4;
     obj4.setName("Ali Ahmed");
    //  obj4.setID(3208);
     d.setDate(9,4,1997);
     obj4.setDate(d);
     obj4.setDeparment("Project Manager");
     obj4.setSalary(200000);
     obj4.setBonus(1.5);
     obj4.setSuperior(" ");

     doubllylinklist ob4;
     ob4.insert(obj4);
     ob4.Display();

     Employee obj5;


     obj5.setName("Matt Kench");
    //  obj5.setID(3208);
     d.setDate(22,12,1999);
     obj5.setDate(d);
     obj5.setDeparment("Project Manager");
     obj5.setSalary(300000);
     obj5.setBonus(1.5);
     obj5.setSuperior(" ");

     doubllylinklist ob5;
     ob5.insert(obj5);
     ob5.Display();

     Employee obj6;


     obj6.setName("Muhammad Asad");
    //  obj6.setID(3208);
     d.setDate(14,3,2000);
     obj6.setDate(d);
     obj6.setDeparment("Project Manager"); 
     obj6.setSalary(400000);
     obj6.setBonus(1.5);
     obj6.setSuperior(" ");

     doubllylinklist ob6;
     ob6.insert(obj6);
     ob6.Display();

     Employee obj7;


     obj7.setName("Khubaib Lodhi");
    //  obj7.setID(3208);
     d.setDate(20,6,2000);
     obj7.setDate(d);
     obj7.setDeparment("Cheif Financial Officer");  
     obj7.setSalary(500000);
     obj7.setBonus(1.5);
     obj7.setSuperior(" ");

     doubllylinklist ob7;
     ob7.insert(obj7);
     ob7.Display();

     Employee obj8;


     obj8.setName("Syed Sana Hussain");
    //  obj8.setID(3208);
     d.setDate(19,10,2002);
     obj8.setDate(d);
     obj8.setDeparment("Finance Director");  
     obj8.setSalary(200000);
     obj8.setBonus(1.5);
     obj8.setSuperior(" ");

     doubllylinklist ob8;
     ob8.insert(obj8);
     ob8.Display();

     Employee obj9;


     obj9.setName("Taha Khan");
    //  obj9.setID(3208);
     d.setDate(30,8,2001);
     obj9.setDate(d);
     obj9.setDeparment("Finance Manager");
     obj9.setSalary(250000); 
     obj9.setBonus(1.5);
     obj9.setSuperior(" ");

     doubllylinklist ob9;
     ob9.insert(obj9);
     ob9.Display();

     Employee obj10;

     obj10.setName("Ramla Nawaz");
    //  obj10.setID(3208);
     d.setDate(4,4,2004);
     obj10.setDate(d);
     obj10.setDeparment("Human Resource Director");
     obj10.setSalary(350000); 
     obj10.setBonus(1.5);
     obj10.setSuperior(" ");

     doubllylinklist ob10;
     ob10.insert(obj10);
     ob10.Display();

     Employee obj11;

     obj11.setName("Maria Asrar");
    //  obj11.setID(3208);
     d.setDate(9,9,1999);
     obj11.setDate(d);
     obj11.setDeparment("Human Resource Manager");
     obj11.setSalary(250000); 
     obj11.setBonus(1.5);
     obj11.setSuperior(" ");

     doubllylinklist ob11;
     ob11.insert(obj11);
     ob11.Display();

     Employee obj12;

     obj12.setName("Mustansir Molwani");
    //  obj12.setID(3208);
     d.setDate(11,11,2010);
     obj12.setDate(d);
     obj12.setDeparment("Human Resource Generalist");
     obj12.setSalary(550000); 
     obj12.setBonus(1.5);
     obj12.setSuperior(" ");

     doubllylinklist ob12;
     ob12.insert(obj12);
     ob12.Display();

     Employee obj13;

     obj13.setName("Fahad Farooqi");
    //  obj13.setID(3208);
     obj13.setDeparment("Directo of Recuriting");
     obj13.setSalary(850000);  
     d.setDate(13,11,2001);
     obj13.setDate(d);
     obj13.setBonus(1.5);
     obj13.setSuperior(" ");

     doubllylinklist ob13;
     ob13.insert(obj13);
     ob13.Display();

     int choice =0;
        do{
            cout<<"Press [1] to insert a new employee \nPress [2] to delete a employee \nPress [3] to search a employee \nPress [-1] to exit "<<endl;
            cin>>choice;
            switch (choice)
            {
            case -1:
            break;
            case 1:
            {
                string a,b;
                int c,d,e,f;
                float g;
                cout<<"Please enter the data of the new employee: "<<endl;
                 Employee obj1;
                 Date d1;
                 cout<<"Enter the name of the employee: ";
                 cin>>a;
                 obj1.setName(a);
                cout<<"Enter the department of the employee: ";
                cin>>b;
                obj1.setDeparment(b);
                cout<<"Enter the salary of the Employee: ";
                cin>>c;
                obj1.setSalary(c);
                cout<<"Enter the day, month and year of joining of the employee: ";
                cin>>d>>e>>f;  
                d1.setDate(d,e,f);
                obj1.setDate(d1);
                cout<<"Enter starting bonus of the employee: ";
                cin>>g;
                obj1.setBonus(g);
                obj1.setSuperior(" ");
                doubllylinklist ob14;
                ob14.insert(obj1);
                ob14.Display();
                break;
            }
                // case 2:
                // {
                //     int choice1=0;
                //     cout<<"How do you wish to delete the employee by?"<<endl;
                //     cout<<"Press [1] to delete by ID\nPress [2] to delete by name\n";
                //     cin>>choice1;
                //     switch (choice1)
                //     {
                //     case 1:
                //         doubllylinklist ob1;
                //         int id=0;
                //         cout<<"Enter the ID to delete the employee: ";
                //         cin>>id;
                //         cout<<ob1.search_by_ID(id);

                //         break;
                //         }
                //     break;
                // }
           
            }
            
        }while (choice!=-1);
     
     


}
