#include <iostream>
using namespace std;
int main()
{
    cout<<"Nama     : Fance Saria Nusantara"<<endl;
    cout<<"Kelas    : X RPL"<<endl;
    cout<<"No absen : 14"<<endl<<endl;
    cout<<"\t\t\t=====LATIHAN PERCABANGAN 3===== "<<endl;
    cout<<"\t\t\t--Percabangan 2 Kondisi--  "<<endl<<endl;

    //Deklarasi
    int a,b,d;
    float c;

    //Input nilai
    cout<<" Masukkan total belanja anda : "<<endl;
    cin>>a;

    //Program
    if (a>=1000000)
    {
        c=a*0.15;
        b=a-(a*0.15);
    }
    else
    {
        c=a*0;
        b=a;
    }

    cout<<"Total pembelian anda : "<<a<<endl;
    cout<<"Diskon anda          : "<<c<<endl;
    cout<<"Total bayar          : "<<b<<endl;

    return 0;
}
