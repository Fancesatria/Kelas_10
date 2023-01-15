#include <iostream>

using namespace std;

int main()
{
    cout << "=====Latihan array 3 dimensi=====" << endl;
   cout << "Pertemuan tanggal : 7 April 2021 " << endl;
   cout << "-------------------------------------" << endl << endl;
    char van[3][2][3];
    for(int g=0;g<3;g++){
        for(int h=0;h<2;h++){
            for(int i=0;i<3;i++){
                cout << "Masukan array ke-" << g << " baris ke-" << h << " kolom ke-" << i << " : ";
                cin  >> van[g][h][i];
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Tampilan array  3 dimensi adalah : " << endl;
    for(int g=0;g<3;g++){
        for(int h=0;h<2;h++){
            for(int i=0;i<3;i++){
                cout << van[g][h][i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
