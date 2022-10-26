
#include <iostream>
#include<Casual.h> 

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

Employee::Employee() {
    energyLevel = 100;
    payRate = 0;
}

Employee::Employee(int payRate) {
    energyLevel = 100;
    this->payRate = payRate;
}

int Employee::get_energyLevel() {
    return energyLevel;
}

void Employee::set_energyLevel(int energyLevel) {
    this->energyLevel = energyLevel;
}

int Employee::get_payRate() {
    return payRate;
}

void Employee::set_payRate(int payRate) {
    this->payRate = payRate;
}

void Employee::work() {
    energyLevel -= 1;
}

int Employee::pay() {
    return payRate;
}


class Casual : public Employee {
private: 
    float hoursWorked[7];
    int dayCount;

public: 
    Casual();
    Casual(int payRate);

    int get_dayCount();
    void set_dayCount(int dayCount);

    void endWorkDay();
    void work();
    int pay();
};

Casual::Casual() {
    for (int i = 0; i < 7; i++) {
        hoursWorked[i] = 0;
    }
    dayCount = 0;
}

Casual::Casual(int payRate) {
    for (int i = 0; i < 7; i++) {
        hoursWorked[i] = 0;
    }
    this->payRate = payRate;
    dayCount = 0;
}

int Casual::get_dayCount() {
    return dayCount;
}

void Casual::set_dayCount(int dayCount) {
    this->dayCount = dayCount;
}

void Casual::endWorkDay() {
    dayCount += 1;
    energyLevel = 100;
}

void Casual::work() {
    if (energyLevel > 0) {
        Employee::work();
        hoursWorked[dayCount] += 1;
    }
}

int Casual::pay() {
    int totalPay = 0;
    for (int i = 0; i < 7; i++) {
        if (i == 5 || i == 6) {
            totalPay += hoursWorked[i] * 2 * payRate;
        }
        else {
            totalPay += hoursWorked[i] * payRate;
        }
        hoursWorked[i] = 0;
    }
    dayCount = 0;
    return totalPay;
}