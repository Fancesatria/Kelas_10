#include <iostream>

using namespace std;

int main()
{
    int ce [5];

    for(int k=0;k<5;k++){
        cout << "masukkan indeks " << k << " : ";
        cin  >> ce [k];
    }
    cout << endl;
    cout << " Tampilan array : " << endl;

    for(int k=0;k<5;k++){
        cout << " Array angka ke-" << k << " adalah " << ce [k] << endl;
    }
    return 0;
}
