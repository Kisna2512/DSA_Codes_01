#include <bits/stdc++.h>
using namespace std;

class product
{

    int id;
    float price;
    string name;

public:
    product()
    {

        cout << "The default constructor called:--- " << endl;
        id = 354;
        price = 3500;
        name = "Hp";
    }

    product(product &p)
    {
        cout << "copy constructor called:- " << endl;
        id = p.id;
        price = p.price;
        name = p.name;
    }

    void set_data(int id, float price, string name)
    {
        this->id = id;
        this->price = price;
        this->name = name;
    }

    void get_data()
    {
        cout << "The id of the product:--- " << id << endl;
        cout << "The price of the product:-----" << price << endl;
        cout << "The name of the product:---" << name << endl;
    }
};

int main()
{

    product laptop;
    laptop.get_data();

    product phone(laptop);
    phone.get_data();
    laptop.set_data(390,652,"Dell");
    laptop.get_data();

    return 0;
}