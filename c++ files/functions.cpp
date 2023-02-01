#include <iostream>

using namespace std;

void stticTest ()
{
    static int i = 0;

    int j = 0;

    i++;
    j++;

    cout << "i is " << i << "j is " << j << endl;
}



int main()
{

    
    stticTest();
    stticTest();
    stticTest();
    return 0;
}

