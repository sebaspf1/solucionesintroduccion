#include <iostream>

using namespace std;

int n, cantidad, precio, suma;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> cantidad >> precio;
        suma += cantidad * precio;
    }
    cout << suma;
    return 0;
}