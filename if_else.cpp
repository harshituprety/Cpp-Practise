// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit orincurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include<iostream>
using namespace std;

int main()
{
    int cp,sp;
    cout << "Enter the cost Price"<<endl;
    cin>>cp;
    cout << "Enter the selling price"<< endl;
    cin>>sp;
    if(cp>sp) cout << "Loss of:"<< cp - sp<<endl;
    else if (sp>cp) cout << "Profit of:"<< sp - cp<<endl;
    else if (sp == cp) cout << "no profit or loss" <<endl;
}
