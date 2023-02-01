#include<iostream>
using namespace std;

int main()
{
    int marks[] = {1,2,4,5,67,89,90};

    int total;


    for(int x : marks)
    {
        total += x;
    }

    cout << "sum is " << total;
    return 0;

}