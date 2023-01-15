#include <iostream>

using namespace std;

int main()
{
    cout << "Array 2 dimensi dengan input user : " << endl << endl;

    int bil [2][3];

     for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            cout << "Masukan aray indeks baris " << f << " kolom " << g << " : " ;
            cin  >> bil [f][g] ;
        }
        cout << endl;
        }
    cout << " tampilan array 2 baris 3 kolom adalah : " << endl;
     for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            cout << bil [f][g] << " ";
        }
        cout << endl;
        }
    return 0;
}

