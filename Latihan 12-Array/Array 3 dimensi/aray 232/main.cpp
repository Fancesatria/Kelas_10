#include <iostream>

using namespace std;

int main()
{
   cout << "=====Latihan array 3 dimensi pert 2=====" << endl;
   cout << "Pertemuan tanggal : 21 April 2021 " << endl;
   cout << "-------------------------------------" << endl << endl;
    int sate[2][2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cout << "Masukan array ke-" << i << " baris ke-" << j << " kolom ke-" << k << " : ";
                cin  >> sate[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Tampilan array  3 dimensi adalah : " << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cout << sate[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
