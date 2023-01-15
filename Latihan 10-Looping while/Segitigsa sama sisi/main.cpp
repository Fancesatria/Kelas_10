#include <iostream>

using namespace std;

int main()
{


    int x,y,z;
    x=1;
    while(x<=5)
    {
        y=5;
        while(y>=x)
        {
            cout << " " ;
            y--;
        }

        z=1;
        while(z<=x*2-1)
        {
            cout << "*" ;

            z++;
        }
        x++;
        cout << endl;
    }

        cout << "." << endl << endl;

         int w,f,h;
    w=1;
    while(w<=5)
    {
        f=1;
        while(f<=w)
        {
            cout << " " ;
            f++;
        }

        h=5;
        while(h>=w*2-5)
        {
            cout << "*" ;

            h--;
        }
        w++;
        cout << endl;
    }

    return 0;


    }
