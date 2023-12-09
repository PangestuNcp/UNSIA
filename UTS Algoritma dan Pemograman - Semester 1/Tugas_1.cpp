// Kuang no 1
#include <iostream>
using namespace std;

int main (){
    int A = 3, B = 6, C = 2, K = 5, L = 4, M = 3;

    // a
    cout << "No.A" << endl;
    if(int D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2)){
        cout << true;
    }else{
        cout << false;
    }

    // b
    cout << "\nNo.B" << endl;
    if(K + 5 < M || ( C * M < L && 2 * M - L > 0 )){
        cout << true;
    }else{
        cout << false;
    }

    // c
    cout << "\nNo.C" << endl;
    if(L + 5 < M || C * K < L && 2 * K - L > 0){
        cout << true;
    }else{
        cout << false;
    }

    // d
    cout << "\nNo.D" << endl;
    if(A * 4 <= 3 * M + B){
        cout << true;
    }else{
        cout << false;
    }

    // e
    cout << "\nNo.E" << endl;
    if(K + 10 > A && L - 2 > 4 * C){
        cout << true;
    }else{
        cout << false;
    }

    
    
    return 0;
}