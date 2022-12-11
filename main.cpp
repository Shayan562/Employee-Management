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
#include "Data Management.hpp"
using namespace std;

int main()
{
    cout << "\t\t\t\t\t************ 3 Bros INC ************" << endl
         << endl;
    DataManagement application;
    int choice = 0;
    Queue complain; // to contain the complains
    int counter = 0;
    do
    {
        if (counter > 0)
        {
            cout << "\t\t\t\t\t************ 3 Bros INC ************" << endl
                 << endl;
        }
        cout << "\nPress [1] to insert a new employee\nPress [2] to delete an employee\n"<<
        "Press [3] to edit an employee\nPress [4] to search a employee\nPress [5] for Sorting Data\n"<<
        "Press [6] to display\nPress [7] to enter a complain\nPress [8] to view complains\nPress [-1] to exit" << endl;
        cin >> choice;
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
            system("CLS");
            counter++;
            break;
        }
        case 2:
            system("CLS");
            application.deleteData();
            counter++;
            break;
        case 3:
            application.updateData();
            counter++;
            break;
        case 4:
            application.search();
            counter++;
            break;
        case 5:
            application.sort();
            counter++;
            break;
        case 6:
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
            system("CLS");
            counter++;
            break;
        }
        case 8:
            system("CLS");
            complain.Dispaly_complains();
            counter++;
            break;
        }
    } while (choice != -1);
}
