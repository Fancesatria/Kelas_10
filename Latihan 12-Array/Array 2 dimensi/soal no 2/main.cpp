#include <iostream>

using namespace std;

int main()
{
   cout << "=====Latihan array 2 dimensi=====" << endl;
   cout << "Pertemuan tanggal : 10 Maret 2021 " << endl;
   cout << "-------------------------------------" << endl << endl;

    char fan [3][4];


     for(int g=0;g<3;g++){
        for(int h=0;h<4;h++){
            cout << " masukkan elemen array baris ke-" << g << "  kolom ke-" << h << " : ";
            cin  >> fan [g][h];
        }
        cout << endl;
     }
   cout << "Tampilan array 3 baris 4 kolom adalah : " << endl;
    for(int g=0;g<3;g++){
        for(int h=0;h<4;h++){
            cout << fan [g][h] << " ";
        }
        cout << endl;
    }

    return 0;
}
