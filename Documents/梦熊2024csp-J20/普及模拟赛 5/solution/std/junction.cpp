#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
const int M = 1e6 + 10;  // ��Ϊ m �ﵽ 5e5������������ͼ����Ҫ�������ߣ�����Ӧ�ÿ�˫��
int h[M], cnt, n, m, ne[M], e[M], q[M], a, b;
bool fl[M];
long long s1, s2;

inline void add(int u, int v) { // ����
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
	q[r] = s;    // ������
	fl[s] = fl[b] = 1; //�����յ����
	while (l < r) { // ��д���У�������в�Ϊ��
		++l;
		int tmp = q[l];
		for (int k = h[tmp]; k; k = ne[k]) {
			int ch = e[k];
			if (!fl[ch]) fl[ch] = 1, q[++r] = ch; // �������в����ϱ��
		} 
	}
}

void dfs(int x) {
	for (int k = h[x]; k; k = ne[k]) {
		int ch = e[k];
		if (!fl[ch]) fl[ch] = 1, dfs(ch);
        // ֻҪû�з��ʵ��ģ����ϱ�ǣ����� dfs
	}
}

void init(void) { // ��ʼ��
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
	for (int i = 1; i <= n; ++i) if (!fl[i]) ++s1;  // ͳ��
	memset(fl, 0, sizeof fl); 
   // ����ֻ��Ҫ��ʼ�� fl ����
	fl[a] = 1; // ��Ҫ���Ǹ��յ����
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
//Ϊ��ͬʱ���� bfs��dfs ���������ĳ������´������� bfs �� b �ұߵĵ㣬�� dfs �� a ��ߵĵ㡣
