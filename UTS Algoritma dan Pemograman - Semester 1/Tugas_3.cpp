#include <iostream>
using namespace std;

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

int main(){
    string ulang = "y";
    while (ulang == "y" || ulang == "Y")
    {
        cout << "\n\t\tTOKO KELONTONG KERONCONGAN\t\t" << endl;
        cout << "----------------------------------------------------------\n" << endl;
        // Daftar List Produk
        cout << "A. Susu Dancow \n\t1. Ukuran Kecil \n\t2. Ukuran Sedang \n\t3. Ukuran Besar" << endl;
        cout << "B. Susu Bender \n\t1. Ukuran Kecil \n\t2. Ukuran Sedang \n\t3. Ukuran Besar" << endl;
        cout << "C. Susu SGM \n\t1. Ukuran Kecil \n\t2. Ukuran Sedang \n\t3. Ukuran Besar" << endl;
        
        cout << "\n----------------------------------------------------------" << endl;

        string jenisSusu;
        int jenisUkuran, jumlah, harga, total;
        
        cout << "Masukan Jenis Susu\t : ";
        cin >> jenisSusu;
        cout << "Masukan Ukuran Kaleng\t : ";
        cin >> jenisUkuran;

        // Menampilkan Harga Satuan Produk
        if(jenisSusu == "A" || jenisSusu == "a"){         // Produk Dancom
            if(jenisUkuran == 1){
                harga = 15000;
            } else if (jenisUkuran == 2){
                harga = 20000;
            } else if (jenisUkuran == 3){
                harga = 25000;
            } 
        } else if(jenisSusu == "B" || jenisSusu == "b"){  // Produk Bendera
            if(jenisUkuran == 1){
                harga = 13500;
            } else if (jenisUkuran == 2){
                harga = 17500;
            } else if (jenisUkuran == 3){
                harga = 20000;
            }
        } else if(jenisSusu == "C" || jenisSusu == "c"){  // Produk SGM
            if(jenisUkuran == 1){
                harga = 15000;
            } else if (jenisUkuran == 2){
                harga = 18500;
            } else if (jenisUkuran == 3){
                harga = 22000;
            } 
        } 

        cout << "Harga Satuan Barang\t : Rp"<< formatAngka(harga) << endl;
        cout << "Jumlah Yang dibeli\t : ";
        cin >> jumlah;

        // Menampilkan Total Harga
        total = harga * jumlah;
        cout << "\narga Yang Harus dibayar Sebesar Rp" << formatAngka(total) << endl;
        
        cout << "\nIngin hitung transaksi lainnya (Y/N) ? ";
        cin >> ulang;
    }
    return 0;
}
