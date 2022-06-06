#include <iostream>

using namespace std;

int a, b;

int main(){
    cin >> a >> b;
    while(a < 4000 && b < 4000){
        for(int i = 1; i <= 5; i++){
            a += b;
            b /= 2;
        }
        while(b < 100)
            b += 3;
    }
    cout << a << ' ' << b;
    return 0;
}