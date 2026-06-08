/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
    int x2 = 13;  // binary: 1101  → three 1s
cout << __builtin_popcount(x2);  // prints 3

int y = 8;   // binary: 1000  → one 1
cout << __builtin_popcount(y);  // prints 1

int z = 7;   // binary: 0111  → three 1s
cout << __builtin_popcount(z);  // prints 3

int w = 0;   // binary: 0000  → zero 1s
cout << __builtin_popcount(w);  // prints 0

    int x=10;
    int n=0;
    while(x)
    {
       if(x&1)
       {
           n++;
       }
       x>>=1;
    }
    std::cout<<"Hello World"<<n;

    return 0;
}
