#include <iostream>
using namespace std;

// Pendukung
// Fungsi untuk mencetak matriks
void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}


//================================================================================
// Fungsi untuk melakukan operasi penjumlahan matriks
void penjumlahan(int matrix1[3][3], int matrix2[3][3]) {
    int result[3][3];
    // Lakukan penjumlahan elemen per elemen
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Hasil penjumlahan matriks :\n";
    printMatrix(result);
}
// Fungsi untuk melakukan operasi pengurangan matriks
void pengurangan(int matrix1[3][3], int matrix2[3][3]) {
    int result[3][3];
    // Lakukan pengurangan elemen per elemen
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << "Hasil pengurangan matriks : \n";
    printMatrix(result);  
}
// Fungsi untuk hukum Distributi
void hukumDistributi(int matrix1[3][3], int matrix2[3][3], int matrix3[3][3]){
    int result[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = matrix1[i][j] * (matrix2[i][j] + matrix3[i][j]);
        }
    }
    cout << "Hasil hukum distributif : \n";
    printMatrix(result); 
}
// Fungsi untuk hukum Asosiatif
void hukumAsosiatif(int matrix1[3][3], int matrix2[3][3], int matrix3[3][3]){
    int result[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = (matrix1[i][j] + matrix2[i][j]) + matrix3[i][j];
        }
    }
    cout << "Hasil hukum asosiatif : \n";
    printMatrix(result);
}
// Fungsi untuk menghitung determinan biasa
int determinanBiasa(int matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}
// Fungsi untuk menghitung determinan ekspansi kofaktor
int determinanEkspansiKofaktor(int matrix[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; ++i) {
        det += (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] -
                                matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    return det;
}


//================================================================================
// Main
int main() {
    // ===========================================================================
    cout << "\nNama\t: Pangestu Nur Cahyo Putro" << endl;
    cout << "Kelas\t: IT-102" << endl;
    cout << "NIM\t: 220401010161" << endl;
    cout << "=============================================" << endl;
    
    // ===========================================================================
    string ulang = "y";
    while (ulang == "y" || ulang == "Y")
    {
        int matrixA[3][3], matrixB[3][3], matrixC[3][3];
        // matriks A
        cout << "\nMasukkan elemen matriks A (3x3):\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
                cin >> matrixA[i][j];
            }
            cout << endl;
        }
        // matriks B
        cout << "\nMasukkan elemen matriks B (3x3):\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
                cin >> matrixB[i][j];
            }
            cout << endl;
        }

        int choice;
        cout << "Pilih operasi yang ingin dilakukan\n";
        cout << "1. Penjumlahan matriks\n";
        cout << "2. Pengurangan matriks\n";
        cout << "3. Determinan biasa\n";
        cout << "4. Determinan ekspansi kofaktor\n";
        cout << "5. Hukum distributif\n";
        cout << "6. Hukum asosiatif\n";
        cout << "Masukan angka yang anda pilih ( 1-6 ) : ";
        cin >> choice;
        cout << endl;
        cout << endl;
        
        switch (choice) {
            case 1:
                // Penjumlahan
                penjumlahan(matrixA, matrixB);
                break;
            case 2:
                // Pengurangan
                pengurangan(matrixA, matrixB);
                break;
            case 3:
                // Determinan Biasa
                cout << "Determinan matriks A : " << determinanBiasa(matrixA) << endl;
                cout << "Determinan matriks B : " << determinanBiasa(matrixB) << endl;
                break;
            case 4:
                // Determinan Ekspansi Kofaktor
                cout << "Determinan matriks A : " << determinanEkspansiKofaktor(matrixA) << endl;
                cout << "Determinan matriks B : " << determinanEkspansiKofaktor(matrixB) << endl;
                break;
            case 5:
                // Hukum Distributif
                cout << "Untuk mengetahui Hukum Distributif memperlukan elemen matriks ke-3 (matriks C)" << endl;
                cout << "Masukkan elemen matriks C (3x3):\n";
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
                        cin >> matrixC[i][j];
                    }
                    cout << endl;
                }
            hukumDistributi(matrixA, matrixB, matrixC);
                break;
            case 6:
                // Hukum Asosiatif
                cout << "Untuk mengetahui Hukum Asosiatif memperlukan elemen matriks ke-3 (matriks C)" << endl;
                cout << "Masukkan elemen matriks C (3x3):\n";
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
                        cin >> matrixC[i][j];
                    }
                    cout << endl;
                }
                hukumAsosiatif(matrixA, matrixB, matrixC);
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
        
        cout << "\n\nApakah anda ingin mengulangi program ini kembali ? (Y/N) : ";
        cin >> ulang;
    }
   
    cout << "Terimakasih." << endl;
    
    return 0;
}
