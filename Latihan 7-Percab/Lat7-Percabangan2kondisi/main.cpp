#include <iostream>

using namespace std;

int main()
{
    cout << "----Program Belajar Algoritma Percabangan----" << endl<<endl;

    //Deklarasi Variabel
    int u;
    //Memasukkan nilai
    cout << "Masukkan usia anda : " << endl;
    cin >> u;
    //Program
    if (u>=18)
    {
     cout << "Anda boleh masuk"<<endl;
    }
    else
    {
     cout << "Maaf anda belum cukup umur"<<endl;
    }
    return 0;
}
