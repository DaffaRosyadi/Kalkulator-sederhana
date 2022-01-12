/*============================
  Nama		: Daffa Miftahurrohman Rosyadi
  Nim		: 2130511085
  Kelas		: 1B Teknik informatika
  Program	: Kalkulator Sederhana
=============================*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main (){
	a:
    cout << "===================================\n";
    cout << "  Kalkulator Sederhana\n";
    cout << "===================================\n";
    int pilih,lagi;
    float satu, dua;
    cout << "1. penjumlahan\n";
    cout << "2. pembagian\n";
    cout << "3. perkalian\n";
    cout << "4. pengurangan\n";
    cout << "masukan pilihan = "; cin >> pilih;

    if (pilih<=4 && pilih>=1)
    {
        cout << endl;
        switch (pilih)
        {
        case 1:
            cout << " Anda Memiilih Penjumlahan [ + ]" << "\n";break;

        case 2:
            cout << " Anda Memiilih Pembagian [ : ]" << "\n";break;

        case 3:
            cout << " Anda Memiilih Perkalian [ x ]" << "\n";break;

        case 4:
            cout << " Anda Memiilih Pengurangan [ - ]" << "\n";break;
        }
        cout << " angka pertama = "; cin >> satu;
        cout << " angka kedua = "; cin >> dua;
        switch (pilih)
        {
        case 1:
            cout << " " << satu << " + " << dua << " = " << satu+dua << "\n";break;

        case 2:
            cout << " " << satu << " : " << dua << " = " << satu/dua << "\n";break;

        case 3:
            cout << " " << satu << " x " << dua << " = " << satu*dua << "\n";break;

        case 4:
            cout << " " << satu << " - " << dua << " = " << satu-dua << "\n";break;
        }
    }
    else
    {
        cout << "kesalahan silahkan ulangi !" << "\n\n\n";
    }
        cout << endl;
        cout << "pilih lagi YA = [1] / TIDAK = [2] ?? ";
        cin >> lagi;
        if (lagi == 1)
        {
            system ("cls");
            goto a;
        }
        else if(lagi == 2)
        {
            system ("cls");
            cout << "Terima Kasih";
        }
}
