#include <iostream>
using namespace std;

// ==================================================================
// Untuk mengkonveksi menjadi nilai rupiah / menambahkan . "titik" 
string formatAngka(int angka, string perantara = "."){
    string output = to_string(angka);
    int inspost = output.length() - 3;
    while (inspost > 0 )
    {
        output.insert(inspost, perantara);
        inspost -= 3;
    }
    return output;
}

// ==================================================================
// Function Potongan
int potongan(){
    int besarPembelian, besarDiskon, totalBayar;
    char ulang;
    do
    {
        cout << "\n=============== Program Hitung Potongan. ===============\n" << endl;
        cout <<"Besar pembelian barang \t\t\t: Rp.";cin >> besarPembelian;

        if(besarPembelian < 1000000){
            besarDiskon = 0;
            totalBayar = besarPembelian - besarDiskon;
        } else if(besarPembelian >= 1000000 && besarPembelian < 5000000){
            besarDiskon = 0.2 * besarPembelian;
            totalBayar = besarPembelian - besarDiskon;
        } else{
            besarDiskon = 0.35 * besarPembelian;
            totalBayar = besarPembelian - besarDiskon;
        }
        
        cout <<"Besar diskon yang diberikan \t\t: Rp." << formatAngka(besarDiskon) << endl;
        cout <<"Besar harga yang harus dibayarkan \t: Rp." << formatAngka(totalBayar) << endl;

        cout <<"\nIngin menjalankan program dari awal (y/n) ? "; cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    cout << "Terimakasih" << endl;
    
    return 0;
}

// ==================================================================
// Program
int main(){
    potongan();
    return 0;
}
