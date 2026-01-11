#include<bits/stdc++.h> 
using namespace std;
int main() {
	int T;
	cin >> T;
	if (T == 1) {
		cout << "I love Luogu!";
	}
	else if (T == 2) {
		cout << 2 + 4 << " " << 10 - 2 - 4;
	}
	else if (T == 3) {
		cout << 3 << endl << 12 << endl << 2;
	}
	else if (T == 4) {
		cout << fixed << setprecision(3) << (float)500 / 3;
	}
	else if (T == 5) {
		cout << 15;
	}
	else if (T == 6) {
		cout << sqrt(6 * 6 + 9 * 9);
	}
	else if (T == 7) {
		cout << 110 << endl << 90 << endl << 0;
	}
	else if (T == 8) {
		double pi=3.141593;
		cout << 2 * 5 * pi << endl << 5 * 5 * pi << endl << 4.0 / 3 * 5 * 5 * 5 * pi;
	}
	else if (T == 9) {
		int a=1;
		for (int i=1; i < 4; i++)
		{
			a=(a + 1) * 2;
		}
		cout << a;
	}
	else if (T == 10) {
		cout << 9;
	}
	else if (T == 11) {
		cout << (float)100 / 3;
	}
	else if (T == 12) {
		cout << 'M' - 'A' + 1 << endl;
		cout << (char)('A' + 18 - 1);
	}
	else if (T == 13) {
		double pi=3.141593;
		double sum=4.0 / 3 * (4 * 4 * 4 + 10 * 10 * 10) * pi;
		cout << (int)pow(sum, 1.0 / 3);
	}
	else if (T == 14) {
		int a[2];
		int j=0;
		for (int i=0; i < 100; i++)
		{
			if ((110 - i) * (10 + i) == 3500)
			{
				a[j++]=110 - i;
			}
		}
		if (a[0] >= a[1])
			cout << a[1];
		else
			cout << a[0];
	}
	return 0;
}
