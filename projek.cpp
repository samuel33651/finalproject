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
printf(" | 2. Print ASCII A-Z\t\t\t|");cout<<endl;
printf(" | 3. Print ASCII a-z\t\t\t|");cout<<endl;
printf(" | 4. Konversi Char[1] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | 5. Konversi Char[10] ke Hex,Dec,Oct\t|");cout<<endl;
printf(" | 6. Konversi Desimal ke Binary\t|");cout<<endl;
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
    //deklarasi variable ascii dengan tipe data unsigned char
    unsigned char ascii;

    //looping karakter ascii 32-255 
    for(ascii=32; ascii< 255; ascii+=1)
    {

      //%3d = print dalam decimal
      //%c  = print dalam char/ascii
        printf("  %3d = %c", ascii, ascii);
        
        //Kondisi jika looping ascii sudah sebanyak 6 baris, maka akan di spasi (\n)
        if(ascii % 6==0){
            printf("\n");
        }
    }
    break;

    }
   
  
   // 2. Print ASCII A-Z
   case '2':
    {
    
    //looping/menampilkan konversi char A-Z ke ASCII
    for(int a='A'; a<='Z'; a++)
    cout<<"CHAR : " << (char)a << " ==> ASCII : " << a <<endl;
    }
    break;


   // 3. Print ASCII a-z
   case '3':
    {
    
    //looping/menampilkan konversi char a-z ke ASCII
    for(int a='a'; a<='z'; a++)
    cout<<"Char : " << (char)a << " ==> ASCII : " << a <<endl;
    }
    break;


   // 4. Konversi 1 karaKter ke OCT, DEC, HEX
   case '4':      
      cout << "Masukkan karakter : ";
      karakter3 = getchar();
      karakter3 = getchar();
      
      cout 
      << "\nOCT\t:" << oct << (int)karakter3 << endl   // output Octal
      << "DEC\t:" << dec << (int)karakter3 << endl   // output Decimal
      << "HEX\t:" << hex << (int)karakter3 << endl;  // output Hexadecimal
      break;


    // 5. Konversi 10 karaKter ke OCT, DEC, HEX
    case '5':
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

      break;

    
    // 6. Konversi 1 karaKter ke Binary
    case '6':      
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
      cout << "Binary = ";

      for (int a = i-1; a >= 0; a--) 
      cout << MaksimalPanjang[a]; 

      break;

}
} 

