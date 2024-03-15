// learning about access modifires in c++

#include <iostream>
using namespace std;

class SmartPhone
{
    // private by default
    int price;
};

int main()
{
    SmartPhone apple;
    // inaccessable from outside of class
    // apple.price = 50000;
    return 0;
}