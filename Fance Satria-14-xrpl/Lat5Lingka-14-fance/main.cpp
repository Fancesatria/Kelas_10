#include <iostream>

using namespace std;

int main()
{
    cout << "Program menghitung luas lingkaran!" << endl<<endl;
    /*
    int r;
    float luas,phi=3.14;
     r=5;
     luas=phi*r*r;
     cout << " Luas lingkaran dengan jari-jari 5 adalah : "<<luas;
     */

     //Deklarasi variabel
     int r;
     float luas, phi=3.14;

     //Pemasukan nilai
     cout << " Masukkan jari-jari :" <<endl;
     cin >>r;
     luas=phi*r*r;

     //Nilai akhir
     cout << " Jadi Luas lingkaran dengan jari-jari " <<r<< "adalah : "<<luas<<endl;


    return 0;
}
