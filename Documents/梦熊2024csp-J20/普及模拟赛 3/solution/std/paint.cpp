#include <stdio.h>

inline int min(int a, int b){
	return a < b ? a : b;
}

inline int max(int a, int b){
	return a > b ? a : b;
}

int main(){
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	int l1, r1, l2, r2;
	scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
	printf("%d", max(min(r1, r2) - max(l1, l2), 0));
	return 0;
}
