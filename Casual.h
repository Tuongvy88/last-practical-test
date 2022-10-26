using namespace std;

#pragma once

class Casual : public Employee
{
public:
    Casual();
    Casual(int payRate);
    void endWorkDay();
    int get_dayCount();
    void set_dayCount(int d);
    float get_hoursWorked();
    ~Casual();

private:
    float hoursWorked[7];
    int dayCount;
};