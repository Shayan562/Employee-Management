#include <iostream>
#include "Employees.hpp"
#include "Hierarchy.hpp"
#include "Nodes.hpp"
#include "Data Sort.hpp"
#include "Linked List.hpp"
#include "Hashing Table.hpp"
#include "Dynamic Queue.hpp"
//#include<stdlib.h>
//#include <Windows.h>
//#include<unistd.h>
//#include <cstdlib>
#include<fstream>
#include "Update and Delete.hpp"
using namespace std;

int main()
{
	cout<<"\t\t\t\t\t************ 3 Bros INC ************"<<endl<<endl;
	
	HashTable h1;
    Date d;
    NodeHierarchy *CEO = new NodeHierarchy("Cheif Executive Officer");
    Hierarchy company;
    company.insert(CEO);
    company.printHierarchy(CEO);
    Employee obj;
    obj.setName("Muhammad Rehan Khan");
    obj.setID(3172);
    d.setDate(17, 11, 1994);
    obj.setDate(d);
    obj.setDeparment("Cheif Executive Officer");
    obj.setSalary(10000000);
    obj.setBonus(2.1);
    obj.setAge(24);
	
	 ofstream fout;
    fout.open("Employee_Data.txt",ios::app);
    doubllylinklist ob;
    fout<<"Name: "<<obj.getName()<<" ID: "<<obj.getId()<<" Department: "<<obj.getDeparment()<<" Salary: "<<obj.getSalary()<<" Bonus: "<<obj.getBonus()<<" Age: "<<obj.getAge()<<endl;
    ob.insert(obj);
    h1.insert(obj);
    // ob.Display();

    Employee obj1;

    obj1.setName("Azaan Nabi Khan");
    obj1.setID(3208);
    d.setDate(1, 2, 1996);
    obj1.setDate(d);
    obj1.setDeparment("Cheif Technology Officer");
    obj1.setSalary(2000000);
    obj1.setBonus(1.5);
    obj1.setAge(20);
	fout<<"Name: "<<obj1.getName()<<" ID: "<<obj1.getId()<<" Department: "<<obj1.getDeparment()<<" Salary: "<<obj1.getSalary()<<" Bonus: "<<obj1.getBonus()<<" Age: "<<obj1.getAge()<<endl;
    ob.insert(obj1);
    h1.insert(obj1);
    // ob.Display();

    Employee obj2;

    obj2.setName("Syed Muhammad Shayan Hussain");
    //  obj2.setID(3208);
    d.setDate(9, 4, 1997);
    obj2.setDate(d);
    obj2.setDeparment("Managing Director");
    obj2.setSalary(3000000);
    obj2.setBonus(2.3);
    obj2.setAge(20);

    // doubllylinklist ob2;
    fout<<"Name: "<<obj2.getName()<<" ID: "<<obj2.getId()<<" Department: "<<obj2.getDeparment()<<" Salary: "<<obj2.getSalary()<<" Bonus: "<<obj2.getBonus()<<" Age: "<<obj2.getAge()<<endl;
    ob.insert(obj2);
    h1.insert(obj2);
    // ob.Display();

    Employee obj3;

    obj3.setName("Oliviia Robin");
    //  obj3.setID(3208);
    d.setDate(19, 6, 1999);
    obj3.setDate(d);
    obj3.setDeparment("Head of Operations");
    obj3.setSalary(150000);
    obj3.setBonus(1.0);
    obj3.setAge(29);

    // doubllylinklist ob3;
    fout<<"Name: "<<obj3.getName()<<" ID: "<<obj3.getId()<<" Department: "<<obj3.getDeparment()<<" Salary: "<<obj3.getSalary()<<" Bonus: "<<obj3.getBonus()<<" Age: "<<obj3.getAge()<<endl;
    ob.insert(obj3);
    h1.insert(obj3);
    // ob.Display();

    Employee obj4;
    obj4.setName("Ali Ahmed");
    //  obj4.setID(3208);
    d.setDate(9, 4, 1997);
    obj4.setDate(d);
    obj4.setDeparment("Project Manager");
    obj4.setSalary(200000);
    obj4.setBonus(1.5);
    obj4.setAge(28);

    // doubllylinklist ob4;
    fout<<"Name: "<<obj4.getName()<<" ID: "<<obj4.getId()<<" Department: "<<obj4.getDeparment()<<" Salary: "<<obj4.getSalary()<<" Bonus: "<<obj4.getBonus()<<" Age: "<<obj4.getAge()<<endl;
    ob.insert(obj4);
    h1.insert(obj4);
    // ob.Display();

    Employee obj5;

    obj5.setName("Matt Kench");
    //  obj5.setID(3208);
    d.setDate(22, 12, 1999);
    obj5.setDate(d);
    obj5.setDeparment("Project Manager");
    obj5.setSalary(300000);
    obj5.setBonus(1.5);
    obj5.setAge(31);

    // doubllylinklist ob5;
    fout<<"Name: "<<obj5.getName()<<" ID: "<<obj5.getId()<<" Department: "<<obj5.getDeparment()<<" Salary: "<<obj5.getSalary()<<" Bonus: "<<obj5.getBonus()<<" Age: "<<obj5.getAge()<<endl;
    ob.insert(obj5);
    h1.insert(obj5);
    // ob.Display();

    Employee obj6;

    obj6.setName("Muhammad Asad");
    //  obj6.setID(3208);
    d.setDate(14, 3, 2000);
    obj6.setDate(d);
    obj6.setDeparment("Project Manager");
    obj6.setSalary(400000);
    obj6.setBonus(1.5);
    obj6.setAge(27);

    // doubllylinklist ob6;
    fout<<"Name: "<<obj6.getName()<<" ID: "<<obj6.getId()<<" Department: "<<obj6.getDeparment()<<" Salary: "<<obj6.getSalary()<<" Bonus: "<<obj6.getBonus()<<" Age: "<<obj6.getAge()<<endl;
    ob.insert(obj6);
    h1.insert(obj6);
    // ob.Display();

    Employee obj7;

    obj7.setName("Khubaib Lodhi");
    //  obj7.setID(3208);
    d.setDate(20, 6, 2000);
    obj7.setDate(d);
    obj7.setDeparment("Cheif Financial Officer");
    obj7.setSalary(500000);
    obj7.setBonus(1.5);
    obj7.setAge(33);

    // doubllylinklist ob7;
    fout<<"Name: "<<obj7.getName()<<" ID: "<<obj7.getId()<<" Department: "<<obj7.getDeparment()<<" Salary: "<<obj7.getSalary()<<" Bonus: "<<obj7.getBonus()<<" Age: "<<obj7.getAge()<<endl;
    ob.insert(obj7);
    h1.insert(obj7);
    // ob.Display();

    Employee obj8;

    obj8.setName("Syed Sana Hussain");
    //  obj8.setID(3208);
    d.setDate(19, 10, 2002);
    obj8.setDate(d);
    obj8.setDeparment("Finance Director");
    obj8.setSalary(200000);
    obj8.setBonus(1.5);
    obj8.setAge(37);

    // doubllylinklist ob8;
    fout<<"Name: "<<obj8.getName()<<" ID: "<<obj8.getId()<<" Department: "<<obj8.getDeparment()<<" Salary: "<<obj8.getSalary()<<" Bonus: "<<obj8.getBonus()<<" Age: "<<obj8.getAge()<<endl;
    ob.insert(obj8);
    h1.insert(obj8);
    // ob.Display();

    Employee obj9;

    obj9.setName("Taha Khan");
    //  obj9.setID(3208);
    d.setDate(30, 8, 2001);
    obj9.setDate(d);
    obj9.setDeparment("Finance Manager");
    obj9.setSalary(250000);
    obj9.setBonus(1.5);
    obj9.setAge(24);

    // doubllylinklist ob9;
    fout<<"Name: "<<obj9.getName()<<" ID: "<<obj9.getId()<<" Department: "<<obj9.getDeparment()<<" Salary: "<<obj9.getSalary()<<" Bonus: "<<obj9.getBonus()<<" Age: "<<obj9.getAge()<<endl;
    ob.insert(obj9);
    h1.insert(obj9);
    // ob.Display();

    Employee obj10;

    obj10.setName("Ramla Nawaz");
    //  obj10.setID(3208);
    d.setDate(4, 4, 2004);
    obj10.setDate(d);
    obj10.setDeparment("Human Resource Director");
    obj10.setSalary(350000);
    obj10.setBonus(1.5);
    obj10.setAge(36);

    // doubllylinklist ob10;
    fout<<"Name: "<<obj10.getName()<<" ID: "<<obj10.getId()<<" Department: "<<obj10.getDeparment()<<" Salary: "<<obj10.getSalary()<<" Bonus: "<<obj10.getBonus()<<" Age: "<<obj10.getAge()<<endl;
    ob.insert(obj10);
    h1.insert(obj10);
    // ob.Display();

    Employee obj11;

    obj11.setName("Maria Asrar");
    //  obj11.setID(3208);
    d.setDate(9, 9, 1999);
    obj11.setDate(d);
    obj11.setDeparment("Human Resource Manager");
    obj11.setSalary(250000);
    obj11.setBonus(1.5);
    obj11.setAge(38);

    // doubllylinklist ob11;
    fout<<"Name: "<<obj11.getName()<<" ID: "<<obj11.getId()<<" Department: "<<obj11.getDeparment()<<" Salary: "<<obj11.getSalary()<<" Bonus: "<<obj11.getBonus()<<" Age: "<<obj11.getAge()<<endl;
    ob.insert(obj11);
    h1.insert(obj11);
    // ob.Display();

    Employee obj12;

    obj12.setName("Mustansir Molwani");
    //  obj12.setID(3208);
    d.setDate(11, 11, 2010);
    obj12.setDate(d);
    obj12.setDeparment("Human Resource Generalist");
    obj12.setSalary(550000);
    obj12.setBonus(1.5);
    obj12.setAge(23);

    // doubllylinklist ob12;
    fout<<"Name: "<<obj12.getName()<<" ID: "<<obj12.getId()<<" Department: "<<obj12.getDeparment()<<" Salary: "<<obj12.getSalary()<<" Bonus: "<<obj12.getBonus()<<" Age: "<<obj12.getAge()<<endl;
    ob.insert(obj12);
    h1.insert(obj12);
    // ob.Display();

    Employee obj13;

    obj13.setName("Fahad Farooqi");
    //  obj13.setID(3208);
    obj13.setDeparment("Director of Recuriting");
    obj13.setSalary(850000);
    d.setDate(13, 11, 2001);
    obj13.setDate(d);
    obj13.setBonus(1.5);
    obj13.setAge(22);

    // doubllylinklist ob13;
    fout<<"Name: "<<obj13.getName()<<" ID: "<<obj13.getId()<<" Department: "<<obj13.getDeparment()<<" Salary: "<<obj13.getSalary()<<" Bonus: "<<obj13.getBonus()<<" Age: "<<obj13.getAge()<<endl;
    ob.insert(obj13);
    h1.insert(obj13);
    // ob.Display();
    int choice = 0;
    Queue complain;	//to contain the complains
  
    int counter=0;
    do
    {	
    	if(counter>0){
    			cout<<"\t\t\t\t\t************ 3 Bros INC ************"<<endl<<endl;
		}
        cout << "\nPress [1] to insert a new employee \nPress [2] to delete a employee \nPress [3] to search a employee \nPress [4] for Sorting Data \nPress [5] to enter a complain\nPress [-1] to exit " << endl;
		cin >> choice;
        switch (choice)
        {
        case -1:
        	counter++;
            break;
        case 1:
        {
            string a, b;
            int c, d, e, f, age;
            float g;
            system("CLS");
            cout << "\nEnter New Employee Data " << endl;
            Employee obj1;
            Date d1;
            fflush(stdin);
            cout << "Enter the Name Employee: ";
            getline(cin, a);
            obj1.setName(a);
            cout << "Enter Age of Employee: ";
            cin >> age;
            obj1.setAge(age);
            cout << "Enter Department: ";
            cin >> b;
            obj1.setDeparment(b);
            cout << "Enter the Salary: ";
            cin >> c;
            obj1.setSalary(c);
            cout << "Enter the Day, Month and Year of joining of the Employee: ";
            cin >> d >> e >> f;
            d1.setDate(d, e, f);
            obj1.setDate(d1);
            cout << "Enter Starting Bonus of Employee: ";
            cin >> g;
            obj1.setBonus(g);
//            doubllylinklist ob14;
			fout<<"Name: "<<obj1.getName()<<" ID: "<<obj1.getId()<<" Department: "<<obj1.getDeparment()<<" Salary: "<<obj1.getSalary()<<" Bonus: "<<obj1.getBonus()<<" Age: "<<obj1.getAge()<<endl;
            ob.insert(obj1);
            h1.insert(obj1);
            ob.Display();
            //sleep(5);
            system("CLS");
            counter++;
            break;
        }
        case 2:
        {
             	int choice1 = 0;
            	system("CLS");
				cout<<"Enter the ID of the Employee you wish to delete: ";
            	cin >> choice1;
//                cout << "Enter the ID to delete the employee: ";
//                cin >> choice;
                cout << endl;
                cout << "Displaying before deleting: " << endl;
                ob.Display();
                cout << endl;
                cout << ob.search_by_ID(choice);
                cout << endl;
                ob.delete_fun(ob.search_by_ID(choice) + 1);
                cout << "Displaying after deleting: " << endl;
                ob.Display();
                //sleep(10);
                system("CLS");
                counter++;
                break;
            
            }
            
            
        
        case 4:
        {
            DataSort s;
            s.sorting(ob);
            counter++;
        }
        break;
        
        case 5:
        	{	
        		string comp;
        		int idd;
        		system("CLS");
        		fflush(stdin);
        		cout<< "You have pressed 5. Please enter your complain: ";
        		getline(cin, comp);
        		cout<<"Enter the ID of the employee you wish to register a complain against: ";
        		cin>>idd;
        		system("CLS");
        		cout<<"Thank you. Your complain has been registered."<<endl;
        		//sleep(2);
    			complain.Report_Complain(comp,idd);
    			system("CLS");
    			counter++;
    			
    			
			}
			break;
		}
        
    } while (choice != -1);
//    Queue complain;
//    complain.Report_Complain("Hello", ob.head->obj.getId());
//    complain.Report_Complain("World", ob.tail->obj.getId());
//    // complain.Resolve_Complain();
fout.close();
    complain.Dispaly_complains();

}
