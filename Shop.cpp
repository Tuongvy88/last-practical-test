#include <iostream>
#include "Shop.h"

using namespace std;

Shop::Shop()
{
    count = 0;
}

void Shop::addEmployee(Employee employee)
{
    if(count < 5)
    {
        employees[count] = employee;
        count++;
    }
    else
    {
        cout << "The shop is full!" << endl;
    }
}

Employee* Shop::get_employees()
{
    return employees;
}

int Shop::get_count()
{
    return count;
}

Shop* createShop(int authority)
{
    if(authority == 10)
    {
        return new Shop();
    }
    else
    {
        return NULL;
    }
}