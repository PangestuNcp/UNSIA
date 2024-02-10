#include <iostream>
using namespace std;

// Nama 		: Pangestu Nur Cahyo Putro
// NIM		    : 220401010161
// kelas       : IT-102
// Mata Kuliah	: Algoritma dan Pemrograman

int main(){
     // Deklarasi Variabel
    int banyakSiswa, a;
    string grade[6], namaSiswa[35];
    char ulang;
    float nilaiTugas[6], nilaiUTS[6], nilaiUAS[6], nilaiAkhir[6];

    do
    {
        // ============================== Display Input ============================== //
        cout << "\nPROGRAM HITUNG NILAI AKHIR\nMATERI PEMROGRAMMAN C++\n" << endl;
        cout << "Masukkan Jumlah Mahasiswa \t: "; cin >> banyakSiswa;
        for (a = 1; a <= banyakSiswa; ++a)
        {   
            // Input Data Nama dan Nilai
            cout<<"Mahasiswa Ke-" << a << endl;
            cout<<"Nama Mahasiswa\t: ";cin>>namaSiswa[a];
            cout<<"Nilai Tugas \t: ";cin>>nilaiTugas[a];
            cout<<"Nilai UTS \t: ";cin>>nilaiUTS[a];
            cout<<"Nilai UAS \t: ";cin>>nilaiUAS[a];
            cout << endl;
            
            // Mencari Nilai Akhir Siswa
            nilaiAkhir[a] = (nilaiTugas[a] * 0.3) + (nilaiUTS[a] * 0.3) + (nilaiUAS[a] * 0.4);

            // Menentukan Grade Siswa
            if(nilaiAkhir[a] >= 80){
                grade[a] = "A";
            } else if(nilaiAkhir[a] >= 70){
                grade[a] = "B";
            } else if(nilaiAkhir[a] >= 59){
                grade[a] = "C";
            } else if(nilaiAkhir[a] >= 50){
                grade[a] = "D";
            } else if(nilaiAkhir[a] < 50 ){
                grade[a] = "E";
            } else {
              cout << "Nilai yang anda masukan bukan angka." << endl;
              grade[a] = "Null"; 
            }
        }
        cout<<""<<endl;
        // ============================= End Display Input ============================ //

        // ============================== Display Output ============================== //
        cout << "\t\t\tDAFTAR NILAI" << endl;
        cout << "\t\t MATERI : PEMROGRAMMAN C++" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "No. Nama Mahasiswa\t\tNilai\t\t\tGrade"<< endl;
        cout << "\t\t\t----------------------------------------------" << endl;
        cout << " \t\t\t Tugas\tUTS\tUAS\tAkhir\t\t"<< endl;
        cout << "----------------------------------------------------------------------" << endl;

         for (a = 1; a <= banyakSiswa; ++a){
            cout<<""<<a<<"\t"<<namaSiswa[a]<<"\t\t "<<nilaiTugas[a]<<"\t"<<nilaiUTS[a]<<"\t"<<nilaiUAS[a]<<"\t "<<nilaiAkhir[a]<<"\t  "<<grade[a] <<endl;
        }
        cout<<"-----------------------------------------------------------------------\n";
        // ============================= End Display Output ============================ //

        // Menanyakan User apakah ingin melakukan perhitungan kembali ?
        cout<<"\n\nIngin menjalankan program dari awal (y/n) ";cin>>ulang;
        cout << endl;
    } while (ulang=='Y'||ulang=='y');
    cout<<"Terimakasih.";
    return 0;
}