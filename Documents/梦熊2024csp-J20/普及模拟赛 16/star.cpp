#include <bits/stdc++.h>
using namespace std;
int a, b;
int inf = 1919810;
struct edge {
    int from;
    int to;
    int val;
};
vector<edge> gra;
int fsu[2005];
bool cmp(edge x, edge y) { return (x.val < y.val); }
int find(int lo) {
    if (fsu[lo] != lo)
        fsu[lo] = find(fsu[lo]);
    return fsu[lo];
}
void com(int x, int y) { fsu[find(x)] = y; }
int tol = 0;
int main() {
    freopen("star.in", "r", stdin);
    freopen("star.out", "w", stdout);
    scanf("%d%d", &a, &b);
    for (int i = 0; i <= b; i++) {
        fsu[i] = i;
        edge ed;
        ed.from = 0;
        ed.to = i;
        ed.val = a;
        gra.push_back(ed);
    }
    int ind = 1;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= b; j++) {
            edge ed;
            scanf("%d", &ed.val);
            if (ed.val == 0)
                continue;
            ed.from = i;
            ed.to = j;
            gra.push_back(ed);
        }
    }
    sort(gra.begin(), gra.end(), cmp);
    for (int i = 0; i < gra.size(); i++) {
        int from = gra[i].from;
        int to = gra[i].to;
        int val = gra[i].val;
        if (find(from) != find(to)) {
            tol += val;
            com(from, to);
        }
    }
    cout << tol;
    return 0;
}
