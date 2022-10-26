#include<iostream>
#
int main() {
    Casual c(10);
    for (int i = 0; i < 210; i++) {
        c.work();
    }
    c.endWorkDay();
    for (int i = 0; i < 10; i++) {
        c.work();
    }
    std::cout << c.pay() << std::endl;
}