// write a program to calculate area of different type of shapes using while loop.

#include <iostream>
using namespace std;

int main()
{
    while(true){
      float n1,n2,n3,n4,a,r,s;
      int ch;
      const float PI = 3.14159;

      cout << "Area of a circle" << endl;
      cout << "Area of a rectangle" << endl;
      cout << "Area of a square" << endl;
      cout << "Area of a triangle" << endl;
      cout << "Exit"<< endl;
      cout << "Enter your choice (1-4)" <<endl;
      cin >> ch;

      if (ch == 1){
        cout << "enter radius=" << endl;
        cin>>r;
        if(r<0){
        cout << "Radius should be a positive integer" << endl;
        }
        else{
        a = PI * r * r;
        cout << "Area of a circle=" << a <<endl;
        }
      }
      else if (ch == 2){
        cout << "enter length=" << endl;
        cin>>n2;
        cout << "enter breadth=" << endl;
        cin>>n3;
        if(n2 < 0 || n3 < 0){
        cout << "length and breadth should be a poditive integer"<<endl;
        }
        else{
        a = n2 * n3;
        cout << " Area of a rectangle=" << a << endl;
        }
      }
      else if (ch == 3){
        cout << "enter a side=" << endl;
        cin>>s;
        if(s < 0 ){
            cout << "Side should be a positive integer" << endl;
        }
        else{
        a = s * s;
        cout << "Area of a square=" << a << endl;
        }
      }
      else if (ch == 4){
        cout << "Enter the base=" << endl;
        cin >> n1;
        cout << "enter the height=" << endl;
        cin>> n4;
        if(n1 < 0 || n4 < 0){
            cout << "Base and Height should be a positive integer" << endl;
        }
        else {
        a = 0.5 * n1 * n4;
        cout << "Area of a triangle=" << a << endl;
        }
      }
      else if (ch == 5) {
        cout << "Exit";
         break;
      }
      else cout << "Wrong Choice" << endl;
    }

    return 0;
}
