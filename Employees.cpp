#pragma once
#include <iostream>
using namespace std;

static int ID=0;
class Bros{

};
class Date{
public:
    int date;
    int month;
    int year;
    Date(int, int, int);
};
Date::Date(int date=1, int month=1, int year=2022):date(date),month(month),year(){}

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
    string getName();
    int getId();
    Date getDate();
    int getSalary();
    float getBonus(); 
    string getDeparment();
    string getSuperior();
    
    //Setters
    void setName(string name);
    void setID(int id);
    void setDate(Date date);
    void setSalary(int salary);
    void setBonus(float bonus); 
    void setDeparment(string department);
    void setSuperior(string superior);

};
Employee::Employee(){
    name="";
    id=++ID;
    salary= 35000;      //base salary
    bonus= 1.1;         //10%
    department= "Not Assigned";
    superior= "Not Assigned";
}
