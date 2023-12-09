#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++){
            if (a == a){  
                cout << a * b;
            }
            cout << "\t";
        }
        cout << endl;
    }
    return 0;
}