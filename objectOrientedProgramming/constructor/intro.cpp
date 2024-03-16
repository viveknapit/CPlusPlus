#include <bits/stdc++.h>
using namespace std;

class SalesData
{
public:
    int price;
    int productId;
    string productName;

public:
    // default constructor
    SalesData()
    {
        price = 10000;
        productId = 101;
        productName = "prodoct_101";
    }

    // Parameterized  constructor
    SalesData(int price, int productId, string productName)
    {
        this->price = price;
        this->productId = productId;
        this->productName = productName;
    }

    // copy constructor
    // SalesData(SalesData &obj)
    // {
    //     price = obj.price;
    //     productId = obj.productId;
    //     productName = obj.productName;
    // }
};

int main()
{
    SalesData data1 = SalesData(1111, 100, "apple");
    SalesData data2 = data1;
    cout << data1.price << endl;
}