#include <bits/stdc++.h>
using namespace std;
struct node {
    int x, y;
} a[5];
int Max(int a, int b, int c) { return max(max(a, b), c); }
int Min(int a, int b, int c) { return min(min(a, b), c); }
int main() {
	freopen("camp.in", "r", stdin);
	freopen("camp.out", "w", stdout);
    scanf("%d%d%d%d%d%d", &a[1].x, &a[1].y, &a[2].x, &a[2].y, &a[3].x, &a[3].y);
    printf("%d\n", Max(a[1].x, a[2].x, a[3].x) - Min(a[1].x, a[2].x, a[3].x) + Max(a[1].y, a[2].y, a[3].y) -
                       Min(a[1].y, a[2].y, a[3].y) + 1);
    return 0;
}
