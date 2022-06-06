#include <iostream>
using namespace std;

int carta[50], n, st1, st0;

int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> carta[i];
		if(i % 2 == 0 && carta[i] == 0)
			st0++;
		else if(i % 2 == 0 && carta[i] == 1)
			st1++;
		else if(i % 2 != 0 && carta[i] == 0)
			st1++;
		else
			st0++;
	}
	if(st0 < st1)
		cout << st0;
	else
		cout << st1;
	return 0;
}