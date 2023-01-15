#include <iostream>
using namespace std;
int main()
{
    cout << "\t\t\t ----Latihan Semester 2 Pertemuan 1----" << endl;
    cout << "\t\t\t----Program Percabangan Bersarang ( Nested IF )----  " << endl;

  //Deklarasi Variabel
    float x;
  //Input
    cout << "Masukkan nilai anda :  " << endl;
    cin  >> x;
  //Program
    if (x <100 && x >0)
    {
     cout << "-->Nilai Anda valid" << endl;
        if (x>=75){
            cout << "-->Selamat anda lulus!!" << endl;
        }else if (x< 75)
            cout << "-->Yahh anda tidak lulus! tetap semangat!!" << endl;
    }
    else
    {
     cout << "-->Nilai tidak Valid. Harap Coba lagi" << endl;

    }
return 0;
}






