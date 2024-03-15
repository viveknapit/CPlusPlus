#include <bits/stdc++.h>
using namespace std;

class SalesData
{
public:
    int price;
    int productId;
    string productName;

public:
    // Parameterized  constructor
    SalesData(int price, int productId, string productName)
    {
        this->price = price;
        this->productId = productId;
        this->productName = productName;
    }
};

int main()
{
    SalesData data1 = SalesData(1111, 100, "apple");
    cout << data1.price << endl;
}