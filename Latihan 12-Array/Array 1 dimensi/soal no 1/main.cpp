#include <iostream>

using namespace std;

int main()
{
    char huruf[5];
     huruf [0]= 'A';
     huruf [1]= 'B';
     huruf [2]= 'C';
     huruf [3]= 'D';
     huruf [4]= 'E';

    for (int l=0;l<5;l++){
        cout << "Array huruf indeks ke-" << l << "  adalah : " << huruf [l] << endl;
    }
    return 0;
}
