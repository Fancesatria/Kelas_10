#include <iostream>

using namespace std;

int main()
{
    cout << "Tampilan array 2 baris 3 kolom adalah : " << endl;

     int bil [2][3]={{1,2,3},{4,5,5}};

     for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            cout << bil[f][g] << " ";
        }
        cout << endl;
     }
    return 0;
}
