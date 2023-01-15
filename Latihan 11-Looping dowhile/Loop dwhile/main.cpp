#include <iostream>

using namespace std;

int main()
{
    int y,x=1;
    do{
      y=1;
      do{
        cout << "ini x ke ; " << x << " . ini y ke ; " << y << endl;
        y++;
      }
      while (y<=4);

     x++;
     cout << endl;
    }
    while (x<=5);

    return 0;
}
