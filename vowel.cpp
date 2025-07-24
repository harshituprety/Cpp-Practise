#include <iostream>
using namespace std;

int main()
{

    char ch,a,e,i,o,u,A,E,I,O,U;
    cout << "Enter a character" << endl;
    cin>>ch;
    if((ch == a) || (ch == e) || (ch == i) || (ch == o) || (ch == u) || (ch == A) || (ch == E) || (ch == I) || (ch == O) || (ch == U))  cout << "Its a vowel" << endl;
    else cout << "Not a Vowel" << endl;

    return 0;
}
