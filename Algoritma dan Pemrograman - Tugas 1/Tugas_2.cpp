#include <iostream>

using namespace std;

int main()
{
    // Awal dari program
    cout << "\n========== Selamat Datang di ATM ABCD ========== \n\n";
    string ulang;

    do
    {

        //==================== Mengecek kondisi nominal uang yang dipilih ====================
        int jumlah;
        cout << "Silahkan pilih (1-3) jumlah uang yang akan anda ambil :\n1. 100.000 \n2. 250.000 \n3. 500.000 \n\nPilihan : ";
        cin >> jumlah;

        if(jumlah == 1){
            cout << "Silahkan ambil uang anda sebesar \n===== Rp100.000.00,- =====\n";
        } else if(jumlah == 2){
            cout << "Silahkan ambil uang anda sebesar \n===== Rp250.000.00,- =====\n";
        } else if(jumlah == 3){
            cout << "Silahkan ambil uang anda sebesar \n===== Rp500.000.00,- =====\n";
        } else {
            cout << "Yang anda masukan tidak ada dimenu pilihkan.\n";
        }

        // ==================== Mengecek kondisi pengulangan ====================
        cout << "Apakah anda ingin melakukan transaksi lagi (Y/N) : ";
        cin >> ulang;
    
        // Pengkondisian ini dibuat untuk mengantisipasi user menginput diluar menu yang ada dan
        // digunakan untuk mengkonversi string kecil sama dengan string besar ( y == Y ) / jika user input
        // setring y maka nilainya akan ditimpah ke Y besar.
        if(ulang == "y"){                 
            ulang = "Y";
        }else if(ulang == "Y"){
            ulang = "Y";
        }else if(ulang == "n"){
            ulang = "N";
        } else if(ulang == "N"){
            ulang = "N";
        }else{
            cout << "Yang anda masukan salah. \nSilahkan pilih Y / N : ";
            cin >> ulang;
        }
        cout << "\n\n";

    } while (ulang == "Y");

    // Akir Dari program
    cout << "========== Terima kasih telah menggunakan ATM ABCD ==========\n";   

    return 0;
}

