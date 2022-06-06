#include <iostream>

using namespace std;

int num;

int main(){
	cin >> num;
	if(num < 0)
        num *= -1;
    cout << num;
    return 0;
}
