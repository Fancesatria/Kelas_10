#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\t------Pertemuan 10 P dasar-------" << endl;
    cout << "\t\t\t-----Latihan While Bersarang-----" << endl;

    int x,y;
    x=1;
    while(x<=10)
    {
     y=1;
     while(y<=x){
        cout << " ";
        cout << y;
         y++;
     }
     cout << endl;
     x++;
    }

    cout << "--------------------------------------------" << endl;
    x=1;
    while(x<=10)
    {
     y=10;
     while(y>=x){
        cout << " ";
        cout << y;
         y--;
     }
     cout << endl;
     x++;
    }


    cout << "---------------------------------------------" << endl;
    cout << "Fance Satria Nusantara" << endl;



    return 0;
}
