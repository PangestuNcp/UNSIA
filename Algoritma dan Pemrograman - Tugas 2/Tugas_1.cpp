#include <iostream>
using namespace std;
int displayMenu(){
    cout << "\n\n" << endl;
    string data[3][3] = {{"D","Dada","Rp. 2500"},{"P","Paha","Rp. 2000"}, {"S","Sayap","Rp. 1500"}};
    cout << "\tGEROBAK FRIED CHICKEN" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Kode\t\tKode\t\tKode\t\t" << endl;
    cout << "----------------------------------------" << endl;
    for (int baris = 0; baris < 3; baris++ ){
        for(int kolom = 0; kolom < 3; kolom++){
            cout << data[baris][kolom] + "\t\t";
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}

int main(){
    // Deklarasi Variabel
    int banyakJenis ,a;
    char ulang,jenisPotongan[6], *keteranganItem[6];
    float banyakPembelian[6],jumlahHarga[6],hargaSatuan[6],totalBayar[6],pajak[6],totalSemua[6];

    do
    {
        displayMenu();
        // ============================== Display Input ============================== //
        cout << "\nBanyak Jenis \t: "; cin >> banyakJenis;
        for (a = 1; a <= banyakJenis; ++a)
        {
            cout<<"Jenis ke-" << a << endl;
            cout<<"Jenis Potong [D/P/S]\t: ";cin>>jenisPotongan[a];
            cout<<"Banyak Potong\t\t: ";cin>>banyakPembelian[a];
            cout << endl;
            

            if(jenisPotongan[a] == 'D' || jenisPotongan[a] == 'd'){
                keteranganItem[a] = "Dada";
                hargaSatuan[a] = 2500;
            } else if (jenisPotongan[a] == 'P' || jenisPotongan[a] == 'p'){
                keteranganItem[a] = "Paha ";
                hargaSatuan[a] = 2000;
            } else if (jenisPotongan[a] == 'S' || jenisPotongan[a] == 's'){
                keteranganItem[a] = "Sayap";
                hargaSatuan[a] = 1500;
            } else{
                cout<<"Anda Salah Masukan Kode Jenis Potongan."<<endl;
                hargaSatuan[a] = 0;
            }

            jumlahHarga[a] = hargaSatuan[a] * banyakPembelian[a];
            totalBayar[banyakJenis] = totalBayar[banyakJenis] + hargaSatuan[a] * banyakPembelian[a]; 

            if (totalBayar[banyakJenis] == 0){
                pajak[banyakJenis] = 0;
                totalSemua[banyakJenis] = 0;
            } else{
                pajak[banyakJenis] = totalBayar[banyakJenis] * 0.1;
                totalSemua[banyakJenis] = totalBayar[banyakJenis] + pajak[banyakJenis];
            }
        }
        cout<<""<<endl;
        // ============================== Akhir Display Input ======================= //

        // ============================== Display Output ============================ //
        cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "No. \tJenis\t\tHarga\t\tBanyak\t\tJumlah" << endl;
        cout << " \tPotongan\tSatuan\t\tPotongan\tHarga" << endl;
        cout << "----------------------------------------------------------------------" << endl;

         for (a = 1; a <= banyakJenis; ++a){
            cout<<" "<<a<<"\t"<<keteranganItem[a]<<"\t\t"<<hargaSatuan[a];
            cout<<"        \t"<<banyakPembelian[a]<<"\t\tRp."<<jumlahHarga[a]<<endl;
        }
        cout<<"--------------------------------------------------------------------- +\n";
        cout<<"\t\t\t\t\tJumlah Bayar    Rp."<<totalBayar[banyakJenis]<<endl;
        cout<<"\t\t\t\t\tPajak 10%       Rp."<<pajak[banyakJenis]<<endl;
        cout<<"\t\t\t\t\t\t\t-------------- +" << endl;
        cout<<"\t\t\t\t\tTotal Bayar     Rp."<<totalSemua[banyakJenis];
        // ============================== Akhir Display Output ======================= //

        cout<<"\n\nAnda Ingin Memesan Lagi? [Y/T] = ";cin>>ulang;
    } while (ulang=='Y'||ulang=='y');
    cout<<"Terimakasih, Silahkan datang Kembali.";
    akhir:
    return 0;
}
