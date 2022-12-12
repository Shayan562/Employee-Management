#include <iostream>
// #include "Employees.hpp"
// #include "Hierarchy.hpp"
// #include "Nodes.hpp"
// #include "Data Sort.hpp"
// #include "Linked List.hpp"
// #include "Hashing Table.hpp"
// #include "Dynamic Queue.hpp"
// #include<fstream>
// #include "Update and Delete.hpp"
#include "budget.hpp"
#include "Data Management.hpp"
using namespace std;

int main()
{
	system("Color A0");
    Budget budget;
    cout << "\t\t\t\t\t************ 3 Bros INC ************" << endl
         << endl;
    DataManagement application;
    int choice = 0;
    Queue complain; // to contain the complains
    int counter = 0;
    do
    {
    	
    	//system("CLS");
        if (counter > 0)
        {
            cout << "\t\t\t\t\t************ 3 Bros INC ************" << endl
                 << endl;
        }
        cout << "\n\tPress [1] to insert a new employee\n\tPress [2] to delete an employee\n"<<
        "\tPress [3] to edit an employee\n\tPress [4] to search a employee\n\tPress [5] for Sorting Data\n"<<
        "\tPress [6] to display\n\tPress [7] to enter a complain\n\tPress [8] to view complains\n"<<
        "\tPress [9] to insert budget\n\tPress [10] to remove budget\n\tPress [11] to display budget\n"
        "\tPress [-1] to exit" << endl;
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case -1:
            counter++;
            break;
        case 1:{
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
            application.insert(obj1);
            //
           
            counter++;
            break;
        }
        case 2:
            system("CLS");
            application.deleteData();
            counter++;
            ;
            break;
        case 3:
        	system("CLS");
            application.updateData();
            counter++;
             
            break;
        case 4:
        	system("CLS");
            application.search();
            counter++;
           
            break;
        case 5:
        	system("CLS");
            application.sort();
            counter++;
             
            //system("cls");
            break;
        case 6:
        	system("CLS");
            application.displayData();
            counter++;
             
            break;
        case 7:
        {
            string comp;
            int idd;
            system("CLS");
            fflush(stdin);
            cout << "You have pressed 5. Please enter your complain: ";
            getline(cin, comp);
            cout << "Enter the ID of the employee you wish to register a complain against: ";
            cin >> idd;
            system("CLS");
            cout << "Thank you. Your complain has been registered." << endl;
            complain.Report_Complain(comp, idd);
            counter++;
            break;
        }
        case 8:
            system("CLS");
            complain.Dispaly_complains();
            counter++;
            break;
        
        case 9:
        {
            int year;
            float budgetValue;
            system("CLS");
            cout<<"Enter the year: ";
            cin>>year;
            cout<<"Enter the budget: ";
            cin>>budgetValue;
            budget.insert(year,budgetValue);
            break;
            }
        case 10:
        {
            int year;
            system("CLS");
            cout<<"Enter the year: ";
            cin>>year;
            budget.remove(year);
            break;
        }
        case 11:
        {
            system("CLS");
            budget.Display();
            break;
        }
        
        
        }
    } while (choice != -1);
}
