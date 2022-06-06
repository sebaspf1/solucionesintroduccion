#include <iostream>

using namespace std;

int a, b;

int main(){
	cin >> a >> b;
    if(a < b)
        cout << "menor";
    else if(a > b)
        cout << "mayor";
    else
        cout << "iguales";

    return 0;
}