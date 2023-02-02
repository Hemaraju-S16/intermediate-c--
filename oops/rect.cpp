#include <iostream>

using namespace std;

int main()
{
    
    struct details {
        int height, width;

        void calculate (int h, int w)
        {
            h = height;
            w = width;
        }

        void display()
        {

            int z = height * width;
            cout << z;
        }

    };


    details dlt;

    dlt.calculate(4,4);

    dlt.display();


}