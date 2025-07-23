// Write a program to print all odd numbers from 1 to 100 using a while loop

#include <iostream>
using namespace std;

int main()
{
    int i=1;
    while(i<=100){
            cout << i << " ";
        i = i + 2;
        i++;
    }
    cout << "all the odd numbers between 1 to 100" << endl;
       return 0;
}
