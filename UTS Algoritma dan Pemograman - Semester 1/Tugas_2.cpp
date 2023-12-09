#include <iomanip>
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
        char nama[80];
        int jamKerja = 8, golPendidikan, golJabatan, totalJamKerja, lembur;
        long honorTetap = 3500000, honorLemburPerJam = 12500, honorLembur, tunjanganPendidikan, tunjanganGolongan, totalPendapatan;

        cout << "\n======================================================" << endl;
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl;
        cout << "Masukan Nama Anda\t: ";
        cin >> nama;
        cout << "Golongan\t\t: ";
        cin >> golJabatan;
        cout << "Pendidikan (SMU/D3/S1)\t: ";
        cin >> golPendidikan;
        cout << "Jumlah Jam Kerja\t: ";
        cin >> totalJamKerja;
        
        cout << "\n\n" << endl;
        cout << "Karyawan yang bernama\t: " << nama << endl;
        cout << "Honor yang diterima" << endl;
        cout << "Honor Tetap\t\t: Rp" << formatAngka(honorTetap) << endl;

        // Tunjangan Golongan
        switch (golJabatan)
        {
        float tunjangan;
        case 1 :
            tunjangan = 5;
            tunjanganGolongan = (tunjangan / 100) * honorTetap;
            break;
        
        case 2 :
            tunjangan = 10;
            tunjanganGolongan = (tunjangan / 100) * honorTetap;
            break;
        
        case 3 :
            tunjangan = 15;
            tunjanganGolongan = (tunjangan / 100) * honorTetap;
            break;
        }
        // int konveksiGolongan = tunjanganGolongan;
        cout << "Tunjangan jabatan\t: Rp" << formatAngka(tunjanganGolongan) << endl;
       
        // Tunjangan Pendidikan
        switch (golPendidikan)
        {
        float tunjangan;
        case 1 :
            tunjangan = 1.5;
            tunjanganPendidikan = (tunjangan / 100) * honorTetap;
            break;
        
        case 2 :
            tunjangan = 5;
            tunjanganPendidikan = (tunjangan / 100) * honorTetap;
            break;
        
        case 3 :
            tunjangan = 7.5;
            tunjanganPendidikan = (tunjangan / 100) * honorTetap;
            break;
        }
        cout << "Tunjangan Pendidikan\t: Rp" << formatAngka(tunjanganPendidikan) << endl;

        // Honor Lembur
        honorLembur = totalJamKerja - jamKerja;
        honorLembur *= honorLemburPerJam;
        cout << "Honor Lembur\t\t: Rp" << formatAngka(honorLembur) << endl;
        cout << "\t\t\t -----------------------------+"  << endl;

        // Total Pendapatan
        totalPendapatan =  honorTetap + tunjanganGolongan + tunjanganPendidikan + honorLembur;
        cout << "Honor Yang Diterima\t: RP" << formatAngka(totalPendapatan)  << endl;
        
        cout << "\nHitung ulang Honor Karyawan Lainnya (Y/N) ? ";
        cin >> ulang;
    }
    return 0;
}
