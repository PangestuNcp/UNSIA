#include <iostream>
using namespace std;

int main(){
      // Membuat Program Berjalan secara berulang sampai user menginput n
      string ulangi;
      ulangi = "y";
      while (ulangi == "y"){

            // Membuat input masukan angka ganjil untuk user
            int n;
            cout << "Jumlah baris : ";
            cin >> n;
            cout << "Membuat pattren bintang (" << n <<")" << endl << endl;

            // Ini untuk mengecek apakah bilangan / angka yang dimasukan merupakan
            // bilangan ganjil / genap / bukan angka
            if(n % 2 == 1){ // Mengecek bilangan ganjil
                  
                  // Program ini untuk melakukan pengulangan pada baris sebanyak input yang dimasukan user
                  for (int a = 1; a <= n; a++)
                  {
                        // Program ini untuk melakukan pengulangan pada Kolom sebanyak input yang dimasukan user
                        for (int b = 1; b <= n; b++){
                        
                              // Program ini adalah mencetak gambar simbol * selama bernilai true
                              // jika a == (n/2) + 1 adalah 3 maka hasilnya True atau b == (n/2) + 1 adalah 3 maka hasilnya True
                              if (a == (n/2)+1 || b == (n/2)+1){  
                              cout << "*";
                              }else{      // jika kondisi if diatas tidak True maka masuk ke else dan mengeluarkan output " ";
                              cout << " ";
                              } 
                        }
                        cout << endl;
                  }
            }else{      // Memberi tau bila yang dimasukan user merupakan bilangan ganjil
                  cout << "Yang anda masukan adalah bilangan Genap!" << endl;
            }

            // Memberi inputan untuk mengulangi y untuk mengulangi, n untuk berhenti mengulangi
            cout << "\nMau mengulangi ? (y/n) : ";
            cin >> ulangi;
      };
      cout << "Terima kasih telah menggunakan Progam ini." << endl;
      return 0;
}