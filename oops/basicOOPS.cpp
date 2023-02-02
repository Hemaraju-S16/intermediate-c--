#include<iostream>

using namespace std;

class student 
{
    public:
        int id;
        string name;

    void insert(int i, string s)
    {
        id = i;
        name = s;
    }

    void display()
    {
        cout << id <<" " << name; 
    }
};

int main()

{
    student s1;

    s1.id = 75;

    s1.name = "raj";
    s1.insert(100,"keerthi");

    s1.display();

    //cout << s1.name;


    return 0;
}