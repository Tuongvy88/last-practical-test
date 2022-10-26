#endif
#include "Casual.h"
#include<iostream>

using namespace std;

Casual::Casual(int payRate):Employee(payRate){
    payRate = payRate;

}
void Casual::set_dayCount(int d){
    dayCount = d;
}
int Casual::get_dayCount(){
    return dayCount;
}
Casual::~Casual()
{

}