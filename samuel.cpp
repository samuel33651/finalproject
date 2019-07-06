#include<iostream>
#include<iomanip>
using namespace std;
 

int main()
{

char const* character[] = {"", "", "", "", "", "", "", "",
                            "\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
                            "", "", "", "", "", "", "", "",
                            "", "", "", "", "", "", "", ""};
 
char c, karakter;
int row, pilih;

printf(" | *************************************|");cout<<endl;
printf(" | 1. Print ASCII Tabel\t\t\t|");cout<<endl;
printf(" | 2. Mencari Nilai ASCII dari Karakter\t|");cout<<endl;
printf(" | *************************************|");
cout << "\n";
cout << "Pilih >> "; cin >> pilih;
cout << "\n";



switch(pilih)
   {
   
   // 1. Encryption
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
         
   case 2:
      cout << "Enter a character: ";
      cin >> karakter;
      cout << "ASCII Value of " << karakter << " is " << int(karakter);
      break;

   }
} 

