#include <iostream>
using namespace std;

class employee

{

    public:
        employee() //constructor
        {
                cout <<"cons invoked ";
        }
};

class secondemp 


{
    public:
        int age;
        float salary;
        string id;

        secondemp(int a, float s, string i)
        {
            age = a;
            salary = s;
            id = i;
        }

        void display()
        {
            cout << " empi " << id << age << salary;
        }
};

int main()

{
    employee();

    secondemp s2 = secondemp(21, 56.5, "jim");
    s2.display();
    return 0;
}