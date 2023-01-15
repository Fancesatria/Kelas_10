#include <iostream>

using namespace std;

int main()
{
   cout << "=====Latihan array 2 dimensi=====" << endl;
   cout << "Pertemuan tanggal : 10 Maret 2021 " << endl;
   cout << "-------------------------------------" << endl << endl;

    char fan [3][4];
     fan [0][0]= 'F';
     fan [0][1]= 'A';
     fan [0][2]= 'N';
     fan [0][3]= 'C';
     fan [1][0]= 'S';
     fan [1][1]= 'A';
     fan [1][2]= 'T';
     fan [1][3]= 'R';
     fan [2][0]= 'N';
     fan [2][1]= 'U';
     fan [2][2]= 'S';
     fan [2][3]= 'A';

     cout << " Tampilan array 3 baris 4 kolom adalah : " << endl;

     for(int j=0;j<3;j++){
        for(int k=0;k<4;k++){
            cout << fan [j][k] << " ";}
        cout << endl;
        }



    return 0;
}
