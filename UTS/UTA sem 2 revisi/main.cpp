#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tUTS Semester Ganjil" << endl;
    cout << "--------------------------------------------------------------" << endl << endl;

    char ce[5]={'B','A','C','D','B'};
    char jaw[5];
    int i=0,f=0,g=0,p=20;

    cout << "1. Dibawah ini yang termasuk bahasa pemrograman adalah... " << endl;
    cout << "    A. C-- B. Ruby  C. Array  D. Moon   E.Syndrom " << endl;

    cout << "2. SMK yang belajar pemrograman adalah..." << endl;
    cout << "    A. RPL  B. MM  C. OTKP  D. AK   E.Listrik " << endl;

    cout << "3. Dibawah ini yang termasuk aplikasi adalah... " << endl;
    cout << "    A. Java  B. HTML  C. Excel  D. Gas  E. Plants voice " << endl;

    cout << "4. Dibawah ini yang termasuk aplikasi marketplace adalah... " << endl;
    cout << "    A. Youtube  B. Facebook  C. Whatsapp  D. Shopee  E.Codeblocks  " << endl;

    cout << "5. Sekarang yang kamu pelajari adalah mapel... " << endl;
    cout << "     A. Graphic Design  B. Pemrograman Dasar  C.Graphic Design  D. Web  E. Simulasi " << endl;

    for(i=0;i<5;i++){
        cout << "Soal : " << i+1 ;
         cin >> jaw[i];
    }


    cout << "--------------------------------------------------------------" << endl << endl;
    cout << "Jawaban anda adalah : " << endl;
      for(int j=0;j<5;j++){

      if(jaw[j]==ce[j]){
        f+=1;
      }
      else{
        g+=1;
      }
      cout << j+1 << ". " << jaw[j] << endl;
      }
      cout << endl;


    cout << "- Jawaban betul adalah : " << f << endl;
    cout << "- Jawaban salah adalah : " << g << endl<< endl;

    cout << "--------------------------------------------------------------" << endl << endl;

    cout << "- Total nilai anda : " << p*f << endl;
    cout << "--------------------------------------------------------------" << endl << endl;
    return 0;
}
