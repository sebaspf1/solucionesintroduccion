#include <iostream>

using namespace std;

int n, c, vaso[1000005], a;

int main(){
    cin >> n >> c;
    for(int i = 1; i <= c; i++){
        cin >> a;
        vaso[a]++;
    }
    for(int i = 1; i <= n; i++){
        cout << vaso[i] << '\n';
    }
    return 0;
}