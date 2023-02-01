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

void arrayAsparam(int arr[])
{
    int marksScored[] = {4,34,5};

    cout << marksScored[1];
}

void MulArray()
{
    int matrixss [2] [2] = {
        {1,2}, {4,5}
    };
}

void myarray()
{
    int mularray [3] [3]{  
        {2, 5, 5},  
        {4, 0, 3},  
        {9, 1, 8}  
        };


    for (int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout << mularray[x][y] << " ";
        }
        cout << ""<< endl;
    }
}



int main()
{   
    myarray();

    return 0;
}

