#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tArray 2 Dimensi+ Operator Aritmatika " << endl;
    cout << "============================================================" << endl;
    cout << "Fance Satria / X RPL / No : 14 " << endl;
    cout << "============================================================" << endl << endl;

    int MA[2][4]={{2,3,4,4},{3,2,2,1}};
    int MB[2][4]={{1,3,2,5},{5,1,4,2}};
    int MC[2][4];

    cout << "Tampilan matriks-1 adalah : " << endl;
     for(int t=0;t<2;t++){
        for(int e=0;e<4;e++){
            cout << MA[t][e] << " " ;
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "Tampilan matriks-2 adalah : " << endl;
     for(int x=0;x<2;x++){
        for(int y=0;y<4;y++){
            cout << MB[x][y] << " " ;
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Hasil penjumlahan matriks-1 dan matriks-2 adalah : " << endl;
     for(int m=0;m<2;m++){
        for(int n=0;n<4;n++){
            MC[m][n]=MA[m][n]+MB[m][n];
            cout << MC[m][n] << " ";
        }
        cout << endl;
     }

    return 0;
}
