#include <iostream>
#include "Employees.hpp"
#include "Hierarchy.hpp"
#include "Nodes.hpp"
#include "Data Sort.hpp"
#include "Linked List.hpp"
#include "Hashing Table.hpp"
using namespace std;

int main()
{
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

    doubllylinklist ob;
    ob.insert(obj);
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

    ob.insert(obj1);
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
    ob.insert(obj2);
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
    ob.insert(obj3);
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
    ob.insert(obj4);
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
    ob.insert(obj5);
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
    ob.insert(obj6);
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
    ob.insert(obj7);
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
    ob.insert(obj8);
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
    ob.insert(obj9);
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
    ob.insert(obj10);
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
    ob.insert(obj11);
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
    ob.insert(obj12);
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
    ob.insert(obj13);
    // ob.Display();
    int choice = 0;
    do
    {
        cout << "\nPress [1] to insert a new employee \nPress [2] to delete a employee \nPress [3] to search a employee \nPress [4] for Sorting Data \nPress [-1] to exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case -1:
            break;
        case 1:
        {
            string a, b;
            int c, d, e, f, age;
            float g;
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
            doubllylinklist ob14;
            ob14.insert(obj1);
            ob14.Display();
            // doubllylinklist ob14;
            ob.insert(obj1);
            ob.Display();
            break;
        }
        case 2:
        {
            int choice1 = 0;
            cout << "How do you wish to delete the employee by?" << endl;
            cout << "Press [1] to delete by ID\nPress [3] to delete by name\n";
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                // doubllylinklist ob1;
                int id = 0;
                cout << "Enter the ID to delete the employee: ";
                cin >> id;
                cout << endl;
                cout << "Displaying before deleting: " << endl;
                ob.Display();
                cout << endl;
                cout << ob.search_by_ID(id);
                cout << endl;
                ob.delete_fun(ob.search_by_ID(id) + 1);
                cout << "Displaying after deleting: " << endl;
                ob.Display();
                break;
            }
            }
            break;
        }
        case 4:
        {
            DataSort s;
            s.sorting(ob);
        }
        break;
        }
    } while (choice != -1);
}
