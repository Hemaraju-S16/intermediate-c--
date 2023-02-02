#include<iostream>

using namespace std;


void references ()
{

    int numbers = 788;

    void *ptr = &numbers;

    
}

int main()
{
   
   int *ptr;


   void *ptr1;

   float delta = 1.5;

   ptr1 = &delta;

   cout << ptr1;
   return 0;

}
