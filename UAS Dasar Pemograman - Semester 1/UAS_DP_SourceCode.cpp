// Nama     : Pangestu Nur Cahyo Putro
// Kelas    : IT-102
// NIM      : 220401010161

#include <iostream>
using namespace std;

// Deklarasi ============================================================
int panjang, lebar, sisi, luas, chois;
string lanjut;
void pilihan();

// Main Program =========================================================
int main(){
    cout << "Program ini bertujuan untuk menghitung luas persegi luas dari sebuah segi empat ? \nLanjutkan <Y/N> : "; 
    cin >> lanjut;
    // Pengulangan do while
    do
    {   
        // Pemilihan kondisi
        if(lanjut == "Y" || lanjut == "y"){
            pilihan();
        }
        
    } while (lanjut == "Y" || lanjut == "y");
    cout << "Terimakasih!";
    return 0;
}

// Function ============================================================
void pilihan(){
    cout << "\nSilahkan pilih ingin menghitung luas \n1.persegi panjang \n2.luas persegi \nSilahkan pilih mana yang ingin anda hitung luasnya : "; 
    cin >> chois;

    //  Pemilihan kondisi
    if(chois == 1){
        cout << "\nYang anda pilih adalah menghitung luas panjang persegi." << endl;
        cout << "Silahkan masukan panjang persegi : ";
        cin >> panjang;
        cout << "Silahkan masukan Lebar persegi : ";
        cin >> lebar;
        cout << "\nLuasnya adalah : ";
        luas = panjang * lebar;
    } else if(chois == 2){
        cout << "\nYang anda pilih adalah menghitung luas persegi." << endl;
        cout << "Silahkan masukan sisi persegi : ";
        cin >> sisi;
        cout << "\nLuasnya adalah : ";
        luas = sisi * sisi; 
    }else {
        cout << "\nYang anda masukan tidak ada di menu pilihan. \nLuasnya adalah ";
        luas = 0;
    }
    cout << luas << endl;

    cout << "\n\nIngin mengulangi program dari awal ? <Y/N> : "; 
    cin >> lanjut;
}