#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include"Employee.h"

#pragma once

class Manager:public Employee
{
public:
    Manager();
    Manager(int payRate);
    void work();
    int get_daysWorked();
    float get_hoursWorked();
    void set_hoursWorked(int h);
    void set_daysWorked(int d);
    ~Manager();

private:
float hoursWorked;
int daysWorked;


};

#endif
