#include<iostream> //Library standart input output
using namespace std;
 

int main()
{

 
//Deklarasi variable
char karakter; //Untuk case 1/ASCII Tabel
char karakter2[10]; //Kita batasi input hanya 10 karakter

int pilih;

//Print baner biar bagus
printf(" | *************************************|");cout<<endl;
printf(" | 1. Print ASCII Tabel\t\t\t|");cout<<endl;
printf(" | 2. Konversi Char[1] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | 3. Konversi Char[10] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | *************************************|");

//Meminta input untuk memilih tool
cout << "\n";
cout << "Pilih >> "; 
cin >> pilih;
cout << "\n";


//Inputan dari 'pilih' diatas kita lempar ke Kondisi 'switch' untuk memilih 2 tool
switch(pilih)
{
   
   
   // 1. Tabel ASCII
   case 1:
    { 
     cout << "ASCII Tabel\n";
     cout << "-----------\n";
     
     for(int i=1; i<255; i++)
      {
      karakter = i;
      cout << i << "=" << karakter << "\t |" ;
      }
      break;
    }
    
   
   // 2. Konversi 1 karaKter ke OCT, DEC, HEX
   case 2:
    {
      cout << "Masukkan karakter : ";
      cin >> karakter2;

      cout 
       << "OCT\t:" << oct << (int)karakter << endl   // output Octal
       << "DEC\t:" << dec << (int)karakter << endl   // output Decimal
       << "HEX\t:" << hex << (int)karakter << endl;  // output Hexadecimal

    }


    // 3. Konversi 10 karaKter ke OCT, DEC, HEX
    case 3:
    {

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
    }

}
} 

