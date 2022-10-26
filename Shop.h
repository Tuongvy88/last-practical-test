#ifndef SHOP_H
#define SHOP_H

#include "Employee.h"

class Shop
{
    public:
        Shop();
        void addEmployee(Employee employee);
        Employee* get_employees();
        int get_count();

    private:
        Employee employees[5];
        int count;
};

Shop* createShop(int authority);

#endif // SHOP_H
