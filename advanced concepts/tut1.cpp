#include <iostream>

using namespace std;


int main()
{
    int num = 10;

    int *pnum = &num;

    int y = *pnum;

    int *newPtr = new int(100);

    cout << newPtr;

    //cout << y;
    return 0;
}