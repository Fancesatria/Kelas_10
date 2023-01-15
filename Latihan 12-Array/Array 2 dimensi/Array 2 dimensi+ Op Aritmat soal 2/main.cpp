#include <iostream>

using namespace std;

int main()
{
    int FA[3][4]={{4,7,9,8},{7,8,4,2},{3,6,4,6}};
    int FB[3][4]={{2,3,5,4},{5,6,3,1},{3,2,1,1}};
    int FC[3][4];

    cout << "Tampilan matriks-1 adalah : " << endl;
    for(int f=0;f<3;f++){
        for(int g=0;g<4;g++){
            cout << FA[f][g] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Tampilan matriks-2 adalah : " << endl;
    for(int k=0;k<3;k++){
        for(int y=0;y<4;y++){
            cout << FB[k][y] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Hasil pengurangan matriks-1 dan matriks-2 adalah : " << endl;
    for(int e=0;e<3;e++){
        for(int l=0;l<4;l++){
                FC[e][l]=FA[e][l]-FB[e][l];
            cout << FC[e][l] << " ";
        }
        cout << endl;
    }

    return 0;
}
