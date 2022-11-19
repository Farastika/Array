#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
      int data_mhs[3][5];
      int tahun,jurusan;

       data_mhs[0][0]=150; //jurusan INFORMATIKA 2015
       data_mhs[0][1]=200; //jurusan INFORMATIKA 2016
       data_mhs[0][2]=180; //jurusan INFORMATIKA 2017
       data_mhs[0][3]=210; //jurusan INFORMATIKA 2018
       data_mhs[0][4]=190; //jurusan INFORMATIKA 2019

       data_mhs[1][0]=160; //jurusan ELEKTRO 2015
       data_mhs[1][1]=180; //jurusan ELEKTRO 2016
       data_mhs[1][2]=190; //jurusan ELEKTRO 2017
       data_mhs[1][3]=220; //jurusan ELEKTRO 2018
       data_mhs[1][4]=200; //jurusan ELEKTRO 2019

       data_mhs[2][0]=100; //jurusan SIPIL 2015
       data_mhs[2][1]=120; //jurusan SIPIL 2016
       data_mhs[2][2]=130; //jurusan SIPIL 2017
       data_mhs[2][3]=150; //jurusan SIPIL 2018
       data_mhs[2][4]=150; //jurusan SIPIL 2019

 cout<<"Data mahasiswa baru"<<endl;
 while(1){
 cout<<"Pilihan jurusan :\n"
        <<"0. INFORMATIKA\n"
        <<"1. ELEKTRO\n"
        <<"2. SIPIL\n"
        <<"Pilih : ";cin>>jurusan;
        if(jurusan<3 && jurusan>=0)
               break;
 }
 while(1){
       cout<<"Pilihan tahun 2015-2019 : ";cin>>tahun;
        tahun -= 2015; //konversi ke 0,1,2, 3 atau 4
        if(tahun<5 && tahun>=0)
               break;
 }
       cout<<"Jumlah mahasiswa baru : "
              <<data_mhs[jurusan][tahun]<<endl;
}


