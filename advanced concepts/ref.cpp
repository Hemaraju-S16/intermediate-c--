#include<iostream>
using namespace std;

int main()
{

    int a = 10;

    int &ref = a;

    cout<< ref;

    float *q;

    q = new float;

    int *m = new int(45);

    delete m;

    cout <<m;

    *q = 45.5;
    

    return 0;
}