#include <iostream>

using namespace std;

int main()
{
    cout << "Nama        : Fance Satria Nusantara " << endl;
    cout << "Nomor absen : 14 " << endl;
    cout << "Kelas       : X RPL " << endl<<endl;
    cout << "\t\t\tLATIHAN TANGGAL 15 OKTOBER 2020 \n";
    cout << "\t\t\t=====PROGRAM KONVERSI SUHU===== \n \n" <<endl;

    //Deklarasi suhu
    float c, r, f, k;

    //input suhu
    cout << "--CELCIUS--" << endl;
    cout << "Inputkan suhu dalam Celcius : ";
    cin >> c;
    //Konversi suhu
     r=c*4/5;
     f=(c*9/5)+32;
     k=c+273;
    cout<<" Suhu "<<c<<" Celcius nilainya sama dengan "<<r<<" Reamur" <<endl;
    cout<<" Suhu "<<c<<" Celcius nilainya sama dengan "<<f<<" Fahrenheit" <<endl;
    cout<<" Suhu "<<c<<" Celcius nilainya sama dengan "<<k<<" Kelvin" <<endl<<endl;

    //input suhu
    cout << "--FAHRENHEIT--" << endl;
    cout << "Inputkan suhu dalam Fahrenheit : ";
    cin >> f;
    //Konversi suhu
     c=(f-32)*5/9;
     r=(f-32)*4/9;
     k=(f-32)*5/9+273;
    cout<<" Suhu "<<f<<" Fahrenheit nilainya sama dengan "<<c<<" Celcius" <<endl;
    cout<<" suhu "<<f<<" Fahrenheit nilainya sama dengan "<<r<<" Reamur" <<endl;
    cout<<" Suhu "<<f<<" Fahrenheit nilainya sama dengan "<<k<<" Kelvin" <<endl<<endl;

    //input suhu
    cout << "--REAMUR--" <<endl;
    cout << "Inputkan suhu dalam Reamur : " <<endl;
    cin >> r;
    //Konversi suhu
     c=r*5/4;
     f=(r*9/4)+32;
     k=(r*5/4)+273;
    cout<<" Suhu "<<r<<" Reamur nilainya sama dengan "<<c<<" Celcius" <<endl;
    cout<<" Suhu "<<r<<" Reamur nilainya sama dengan "<<f<<" Fahrenheit" <<endl;
    cout<<" Suhu "<<r<<" Reamur nilainya sama dengan "<<k<<" Kelvin" <<endl<<endl;

    //input suhu
    cout << "--KELVIN--" <<endl;
    cout << "Inputkan suhu dalam Kelvin : " <<endl;
    cin >> k;
    //Konversi suhu
     c=k-273;
     r=(k*4/5)-273;
     f=(k*9/5)-273+32;
    cout<<" Suhu "<<k<<" kelvin nilainya sama dengan "<<c<<" Celcius" <<endl;
    cout<<" Suhu "<<k<<" Kelvin nilainya sama dengan "<<f<<" Fahrenheit" <<endl;
    cout<<" Suhu "<<k<<" Kelvin nilainya sama dengan "<<r<<" Reamur" <<endl<<endl;

    cout<<"Sekian pemrograman hari ini"<<endl;
    cout<<"Sampai jumpa di latihan berikutnya"<<endl;
    cout<<"Thank youu :)"<<endl;
return 0;
}
