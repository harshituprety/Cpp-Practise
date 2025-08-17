//  Check if a number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    bool isPrime = true;

    for(int i=2; i<=n-1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << "prime number" <<endl;
    }else{
        cout << "non prime number"<<endl;
    }
    return 0;
}
