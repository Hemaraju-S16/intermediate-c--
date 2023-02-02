#include <iostream>

using namespace std;

class employee
{
    public:
    float salary = 98000.0;  
};

class programmer: public employee
{
    public:
    float bonus = 50000;
};

int main(void)
{
    programmer p1;

    cout << p1.salary;

    return 0;
}