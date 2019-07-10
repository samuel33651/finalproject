#include<iostream> //Library standart input output
#include <conio.h>
#include<iomanip> //Library utnuk memanggil fungsi setfill, setw, setbase

using namespace std;
 

int main()
{

 
//Deklarasi variable
int angka;
char karakter, pilih; //Untuk case 1/ASCII Tabel
char karakter2[10]; //Kita batasi input hanya 10 karakter
char karakter3;

//Print baner biar bagus
printf(" | *************************************|");cout<<endl;
printf(" | 1. Print ASCII Tabel\t\t\t|");cout<<endl;
printf(" | 2. Konversi Char[1] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | 3. Konversi Char[10] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | 4. Konversi Desimal ke Binary\t|");cout<<endl;
printf(" | *************************************|");

//Meminta input untuk memilih tool
cout << "\n";
cout << "Pilih >> "; 
pilih = getchar();
cout << "\n";




//Inputan dari 'pilih' diatas kita lempar ke Kondisi 'switch' untuk memilih 2 tool
switch(pilih)
{
   
   
   // 1. Tabel ASCII
   case '1':
    { 
     cout << "ASCII Tabel | Dimulai dari 30 ==> 255\n"; //Saya mulai dari ke 30 karena 1-30 merupakan karakter non-printable
     cout << "--------------------------------------------------------------------------\n";
      
      //looping sampai karakter ke 255
      for (int i=0;i<=127;i++)
      {
        karakter=i;
        cout << setw(2) << karakter 
             << setw(6) << i;
      }
     cout << "\n--------------------------------------------------------------------------\n";
     break;
    }
    
   
   // 2. Konversi 1 karaKter ke OCT, DEC, HEX
   case '2':      
      cout << "Masukkan karakter : ";
      karakter3 = getchar();
      karakter3 = getchar();
      
      cout 
      << "\nOCT\t:" << oct << (int)karakter3 << endl   // output Octal
      << "DEC\t:" << dec << (int)karakter3 << endl   // output Decimal
      << "HEX\t:" << hex << (int)karakter3 << endl;  // output Hexadecimal
      break;


    // 3. Konversi 10 karaKter ke OCT, DEC, HEX
    case '3':
      cout << "Masukkan karakter : ";
      cin >> karakter2;

      cout << "\nHasil konversi untuk 10 karakter [Kita sengaja batasi 10 karakter]\n";
      cout << "HEX\t:";
      for(int i=0; i<= 10; ++i)
      cout << hex << (int)karakter2[i];              // output Hexadecimal
 
      cout << "\nDEC\t:";
      for(int i=0; i<= 10; ++i)
      cout << dec << (int)karakter2[i];              // output Decimal

      cout << "\nOCT\t:";
      for(int i=0; i<= 10; ++i)
      cout << oct << (int)karakter2[i];              // output Octal


    // 4. Konversi 1 karaKter ke Binary
    case '4':      
      cout << "Masukkan angka = "; cin >> angka;

      int MaksimalPanjang[32], i=0; 
      
      while (angka > 0) 
        { 
        //Increament looping : Hasil disimpan di MaksimalPanjang
        MaksimalPanjang[i] = angka % 2; 
        angka /= 2; 
        i++; 
        } 

      //Menampilkan angka yg diinput (dari step diatas) ke binary
      for (int a = i-1; a >= 0; a--) 
      cout << MaksimalPanjang[a]; 

      break;

}
} 

