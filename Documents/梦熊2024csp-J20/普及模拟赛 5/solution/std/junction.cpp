#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
const int M = 1e6 + 10;  // 因为 m 达到 5e5，而且是无向图，需要建两条边，所以应该开双倍
int h[M], cnt, n, m, ne[M], e[M], q[M], a, b;
bool fl[M];
long long s1, s2;

inline void add(int u, int v) { // 建边
	++cnt;
	e[cnt] = v;
	ne[cnt] = h[u];
	h[u] = cnt;
	++cnt;
	e[cnt] = u;
	ne[cnt] = h[v];
	h[v] = cnt;
}

void bfs(int s) {
	int l = 0, r = 1;
	q[r] = s;    // 起点入队
	fl[s] = fl[b] = 1; //起点和终点打标记
	while (l < r) { // 手写队列：如果队列不为空
		++l;
		int tmp = q[l];
		for (int k = h[tmp]; k; k = ne[k]) {
			int ch = e[k];
			if (!fl[ch]) fl[ch] = 1, q[++r] = ch; // 塞进队列并打上标记
		} 
	}
}

void dfs(int x) {
	for (int k = h[x]; k; k = ne[k]) {
		int ch = e[k];
		if (!fl[ch]) fl[ch] = 1, dfs(ch);
        // 只要没有访问到的，打上标记，继续 dfs
	}
}

void init(void) { // 初始化
	cnt = 0;
	for (int i = 1; i <= n; ++i) h[i] = 0;
	for (int i = 1; i <= n; ++i) fl[i] = 0;
	s1 = s2 = 0;
}

void run(void) {
	scanf("%d%d%d%d", &n, &m, &a, &b);
	init();
	for (int i = 1, u, v; i <= m; ++i) scanf("%d%d", &u, &v), add(u, v);
	bfs(a); 
	for (int i = 1; i <= n; ++i) if (!fl[i]) ++s1;  // 统计
	memset(fl, 0, sizeof fl); 
   // 这里只需要初始化 fl 数组
	fl[a] = 1; // 不要忘记给终点打标记
	dfs(b);
	for (int i = 1; i <= n; ++i) if (!fl[i]) ++s2;
	printf("%lld\n", s1 * s2);
}

int main() {
//	freopen("junction.in", "r", stdin);
//	freopen("junction.out", "w", stdout);
	run();
	return 0;
} 
//为了同时给出 bfs、dfs 两种做法的程序，以下代码是以 bfs 搜 b 右边的点，以 dfs 搜 a 左边的点。
