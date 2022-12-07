#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

static int ID = 0;
static int totalEmployees=0;

class Date
{
public:
    int date;
    int month;
    int year;
    Date(int data = 1, int month = 1, int year = 2022)
    {
        this->date = date;
        this->month = month;
        this->year = year;
    }
    void setDate(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }
    void DisplayDate()
    {
        cout << date << "/" << month << "/" << year;
    }
};
// Date::Date(int date=1, int month=1, int year=2022):date(date),month(month),year(){}

class Employee
{
protected:
    string name;
    int id;
    Date dateJoined;
    int salary;
    float bonus;
    string department;
    int age;

public:
    Employee();

    // Getter
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
    int getAge()
    {
        return age;
    }

    // Setters
    void setName(string name)
    {
        this->name = name;
    }
    void setID(int id)
    {
        this->id = id;
    }
    void setDate(Date ob)
    {
        dateJoined.date = ob.date;
        dateJoined.month = ob.month;
        dateJoined.year = ob.year;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }
    void setDeparment(string department)
    {
        this->department = department;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void Display()
    {
        cout << "------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Identification Number: " << id << endl;
        cout << "Joining Date (dd/mm/yy): ";
        dateJoined.DisplayDate();
        cout << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << endl;
        // cout<<"------------------------"<<endl;
    }
};
Employee::Employee()
{
    totalEmployees++;
    name = "";
    id = ++ID;
    salary = 35000; // base salary
    bonus = 1.1;    // 10%
    department = "Not Assigned";
    age = 0;
}
