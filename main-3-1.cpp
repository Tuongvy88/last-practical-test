#include <iostream>
#include "Shop.h"

using namespace std;

int main()
{
    Shop* shop = createShop(10);
    if(shop != NULL)
    {
        cout << "Shop created!" << endl;
    }
    else
    {
        cout << "You do not have the authority to create a shop." << endl;
    }
    return 0;
} 