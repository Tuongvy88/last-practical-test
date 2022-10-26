#include <iostream>

class Employee {

protected:
    int energyLevel;
    int payRate;

public:
    Employee();
    Employee(int payRate);

    int get_energyLevel();
    void set_energyLevel(int energyLevel);

    int get_payRate();
    void set_payRate(int payRate);

    virtual void work();
    virtual int pay();
}; 