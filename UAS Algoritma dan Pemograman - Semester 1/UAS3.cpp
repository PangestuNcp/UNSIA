#include <iostream>
using namespace std;

// Nama 		: Pangestu Nur Cahyo Putro
// NIM		    : 220401010161
// kelas       : IT-102
// Mata Kuliah	: Algoritma dan Pemrograman


int tarif();
//variabel global digunakan pada main dan fungsi tarif
char kodeBuku, ulang;
int jumlahPinjam, hargaSewa;
float totalBayar;

int main(){
    cout << "Kode Jenis Buku |\tJenis \t| Tarif" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "\tC \t| CerPen \t| 500" << endl;
    cout << "\tK \t| Komik \t| 700" << endl;
    cout << "\tN \t| Novel \t| 1000" << endl;

    do
    {
        char nama[25]; // Variabel Lokal

        cout <<"\nPerpustakaan \"Kecil-Kecilan\"\n";
        cout <<"----------------------------\n";
        cout <<"Nama Penyewa Buku \t: "; cin >>nama;
        cout <<"Kode Buku [C/K/N] \t: "; cin >>kodeBuku;
        cout <<"Banyak Pinjam     \t: "; cin >>jumlahPinjam;

        cout << endl;
        tarif();   //pemanggilan fungsi tarif
        cout <<endl;

        cout <<"Penyewa dengan Nama \t: "<<nama<<endl;
        totalBayar = hargaSewa * jumlahPinjam;
        cout <<"Jumlah Bayar Penyewaan Sebesar Rp."<<totalBayar;
        
        cout <<"\n\nIngin menjalankan program dari awal (y/n) ? "; cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    cout << "Terimakasih" << endl;
}

int tarif(){
    char *jenis; //variabel lokal
    if (kodeBuku =='C' || kodeBuku =='c'){
        jenis = "CerPen ( Kumpulan Cerita Pendek )";
        hargaSewa = 500;
    } else if (kodeBuku =='K' || kodeBuku =='k'){
        jenis = "Komik";
        hargaSewa = 700;
    } else if (kodeBuku =='N' || kodeBuku =='n'){
        jenis = "Novel";
        hargaSewa = 1000;
    } else{
        jenis = "Yang anda masukan tidak ada didaftar menu.";
        hargaSewa = 0;
    }
    cout <<"Tarif Sewa \t\t: Rp." <<hargaSewa<<endl;
    cout <<"Jenis Buku \t\t: " <<jenis<<endl;
}