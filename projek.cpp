#include<iostream>
#include<iomanip>
using namespace std;
 

int main()
{

char const* character[] = {"", "", "", "", "", "", "", "",
                            "\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
                            "", "", "", "", "", "", "", "",
                            "", "", "", "", "", "", "", ""};
 
//Deklarasi variable
char c, karakter;
int row, pilih;

//Print baner biar bagus
printf(" | *************************************|");cout<<endl;
printf(" | 1. Print ASCII Tabel\t\t\t|");cout<<endl;
printf(" | 2. Konversi ASCII ke Hex, Dec, Oct\t|");cout<<endl;
printf(" | *************************************|");

//Meminta input untuk memilih tool
cout << "\n";
cout << "Pilih >> "; cin >> pilih;
cout << "\n";


//Kondisi 'switch' untuk memilih 2 tool
switch(pilih)
   {
   
   // 1. Tabel ASCII
   case 1:
      { 

 cout << "ASCII Tabel" << endl;
      for(int i = 0; i < 16; i++)
      {
        row = i;
        while (row <= 127) {
            if (row < 32)
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << character[i] << " | ";
            
            else if (row >= 32 && row < 127)
            {
                c = row;
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << c << " | ";
            }
            
            else
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << "DEL" << " | ";
            row = row + 16;
         }
         cout << endl;
       }
      break;
      }
    
   // 2. Konversi karaKter ASCII ke OCT, DEC, HEX
   case 2:
      cout << "Masukkan karakter : ";
      cin >> karakter;
      cout << "ASCII\t:" << karakter << endl          // output ASCII
       << "OCT\t:" << oct << (int)karakter << endl   // output Octal
       << "DEC\t:" << dec << (int)karakter << endl   // output Decimal
       << "HEX\t:" << hex << (int)karakter << endl;  // output Hexadecimal
      break;

   }
} 

