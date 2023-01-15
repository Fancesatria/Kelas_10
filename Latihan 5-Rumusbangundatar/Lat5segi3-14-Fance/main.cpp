#include <iostream>

using namespace std;

int main()
{
    cout << "Program menghitung luas segitiga" <<endl<<endl;
    /*
    int a, t;
    float luas;
    a=10;
    t=5;
    luas=0.5*a*t;
    cout << "Jadi luas segitiga dengan alas=10, tinggi=5 adalah " <<luas;
    */

    //Deklarasi variabel
    int a, t;
    float luas;

    //Pemasukan nilai
    cout << "Masukkan alas : " <<endl;
    cin >> a;
    cout << "Masukkan tinggi : " <<endl;
    cin >> t;
    luas=0.5*a*t;

    //Nilai akhir
    cout << " Jadi luas segitiga dengan alas " <<a<< "dan tinggi " <<t<< "adalah "<<luas<<endl;




    return 0;
}
