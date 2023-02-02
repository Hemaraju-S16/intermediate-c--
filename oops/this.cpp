#include <iostream>
#include<vector>

using namespace std;

struct stud {
        int age;
        int marks;
        string names;

        stud (int i, string m)
        {
            age = i;
            names = m;
        }

        void display()
        {
            cout <<" age is " <<age <<" and name is " << names; 
        }
    };


int main()

{

    /*stud s1;
    stud s2;
    
    s1.age = 12;
    s1.marks = 45;
    s1.names  = "hem";

    s2.age = 45;
    s2.marks = 89;
    s2.names = "raju";

    cout << s2.age;*/

    stud valid = stud (12,"maj");

    valid.marks = 45;

    valid.display();

    return 0;
    
}