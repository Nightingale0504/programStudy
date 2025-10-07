#include <bits/stdc++.h> 
using namespace std;
char ans[100005];
char a[100005], b[100005];
int main() {
    freopen("drink.in", "r", stdin);
    freopen("drink.out", "w", stdout);
#define int long long
	int p = 0, q = 0, k = 0, n, j = 0, flag = 0;
	scanf("%s %d", a, &q);
	q--;
	n = strlen(a);
	for(int i = 0; i < n; i++){
		p = p * 10 + a[i] - '0';
		if(p >= q) {
			k = p / q;
			ans[j++] = k + '0';
			p = p % q;
		} else ans[j++] = '0';
	}
	for(int i = 0; i < j; i++) {
		if(ans[i] != '0') flag = 1;
		if(flag == 1) printf("%c", ans[i]);
	}
}
