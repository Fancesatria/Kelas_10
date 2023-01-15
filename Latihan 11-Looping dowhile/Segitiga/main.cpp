#include <iostream>

using namespace std;

int main()
{
    int v,w;
    v=1;
    do{
        w=1;
        do{
            cout << " " ;
            cout << w;
            w++;
        }
        while (w<=v);

     cout << endl;
     v++;
     }
     while (v<=10);

     cout << "-------------------------------------------------------------------------- \n" << endl;

     int x,y;
     x=10;
     do{
        y=1;
        do {
            cout << " " ;
            cout << y ;
            y++;
           }
        while (y<=x);
    cout << endl;
    x--;
       }
    while (x>=1);

     cout << "-------------------------------------------------------------------------- \n" << endl;

     int r,s;
     r=1;
     do{
        s=1;
        do{
            cout << " " ;
            cout << s;
            s++;
        }
        while (s<=r) ;

        cout << endl;
        r++;
        }
        while (r<=10) ;

    return 0;
}
