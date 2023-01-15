#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tUTS Semester Ganjil" << endl;
    cout << "--------------------------------------------------------------" << endl << endl;

    char ce[5]={'B','A','C','D','B'};
    char jaw[5];
    int A1,A2,A3,A4,A5,Total;
    float f=0,g=0;

    cout << "1. Dibawah ini yang termasuk bahasa pemrograman adalah... " << endl;
    cout << "    A. C-- B. Ruby  C. Array  D. Moon   E.Syndrom " << endl;
    cout << "   Jawaban yang benar adalah A/B/C/D/E :  "  ;
    cin  >> jaw[0];
       if(jaw[0]=='B'){
         A1=20;
       }
       else{
         A1=0;
       }
       cout << endl;
    cout << "2. SMK yang belajar pemrograman adalah..." << endl;
    cout << "    A. RPL  B. MM  C. OTKP  D. AK   E.Listrik " << endl;
    cout << "   Jawaban yang benar adalah A/B/C/D/E :  "  ;
    cin  >> jaw[1];
       if(jaw[1]=='A'){
         A2=20;
       }
       else{
         A2=0;
       }
       cout << endl;
    cout << "3. Dibawah ini yang termasuk aplikasi adalah... " << endl;
    cout << "    A. Java  B. HTML  C. Excel  D. Gas  E. Plants voice " << endl;
    cout << "   Jawaban yang benar adalah A/B/C/D/E :  " ;
    cin  >> jaw[2];
       if(jaw[2]=='C'){
         A3=20;
       }
       else{
        A3=0;
       }
       cout << endl;
    cout << "4. Dibawah ini yang termasuk aplikasi marketplace adalah... " << endl;
    cout << "    A. Youtube  B. Facebook  C. Whatsapp  D. Shopee  E.Codeblocks  " << endl;
    cout << "   Jawaban yang benar adalah A/B/C/D/E :  " ;
    cin  >> jaw[3];
       if(jaw[3]=='D'){
        A4=20;
       }
       else{
        A4=0;
       }
       cout << endl;
    cout << "5. Sekarang yang kamu pelajari adalah mapel... " << endl;
    cout << "     A. Graphic Design  B. Pemrograman Dasar  C.Graphic Design  D. Web  E. Simulasi " << endl;
    cout << "   Jawaban yang benar adalah A/B/C/D/E :  " ;
    cin  >> jaw[4];
       if(jaw[4]=='B'){
        A5=20;
       }
       else{
        A5=0;
       }
       cout << endl;

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
    Total=A1+A2+A3+A4+A5;
    cout << "- Total nilai anda : " << Total << endl;
    cout << "--------------------------------------------------------------" << endl << endl;
    return 0;
}
