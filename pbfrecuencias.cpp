#include <iostream>

using namespace std;

int p, n, fav, frecuencias[105];

int main(){
    cin >> p >> n;
    for(int i = 1; i <= n; i++){
        cin >> fav;
        frecuencias[fav]++;
    }
    for(int i = 1; i <= p; i++){
        cout << i << '-' << frecuencias[i] << '\n';
    }
    return 0;
}