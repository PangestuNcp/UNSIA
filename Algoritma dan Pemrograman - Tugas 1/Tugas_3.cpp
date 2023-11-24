#include <iostream>
using namespace std;

int main()
{
  string ulang = "y";
  while(ulang == "y"){
    int angka;
    
    cout << "Masukan angka : ";
    cin >> angka;
    cout << "\n===============================================\n";
    cout << "Angka yang anda masukan adalah : " << angka << endl;

    // ================================================================================ //
    // Perogram ini untuk bilangan Prima
    int hasil = 0;
    for(int a = 1; a <= angka; a++){
      if(angka % a == 0){
         hasil++;
      }
    }

    // ================================================================================ //
    // Program ini digunakan untuk mengetahui angka yang dimasukan apakah merupakan
    // Bilangan Positif / Negatif, Bilangan Genap / Ganjil dan Bilangan Prima / bukan
    if(angka > 0){                // Angka Positif
      cout << angka << " adalah Positif" << endl;
      if(angka % 2 == 0){         // Angka Positif Genap
        cout << angka << " adalah Genap" << endl;
        if(hasil == 2){           // Angka Positif Genap Prima
          cout << angka << " adalah Prima" << endl;
        } else{                   // Angka Positif Genap Bukan Prima
          cout << angka << " adalah bukan Prima" << endl;
        }
      } else{                     // Angka Positif Ganjil
        cout << angka << " Adalah Ganjil" << endl;
         if(hasil == 2){          // Angka Positif Ganjil Prima
          cout << angka << " adalah Prima";
        } else{                   // Angka Positif Ganjil Bukan Prima
          cout << angka << " adalah bukan Prima" << endl;
        }
      }
    } else if(angka == 0){        // Angka 0 (Noll)
      cout << "Angka yang anda masukan adalah 0 (Noll)";
    } else {                      // Angka Negatif
      cout << angka << " adalah Negatif" << endl;
      if(angka % 2 == 0){         // Angka Negatif Genap
        cout << angka << " adalah Genap" << endl;
      } else{                     // Angka Negatif Ganjil
         cout << angka << " Adalah Ganjil" << endl;
      }
    } 


    // ================================================================================ //
    // Untuk melanjutkan atau mengakhiri program 
    cout << "\nApakah anda ingin mengulang Program (y/n): ";
    cin >> ulang;
  }
  cout << "Terima kasih telah menggunakan Progam ini. :)\n";
    return 0;
}
