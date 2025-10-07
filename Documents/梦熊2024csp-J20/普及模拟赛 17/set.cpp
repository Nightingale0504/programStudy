#include <bits/stdc++.h>
using namespace std;

int n, q, a[100010];

int box[100010];

vector<int> factor[100010];
//int f[100000]
vector<int>v[100002];
int main() {
//	int ans=0;
//	for(int i=2;i<=100000;i++){
//		int cnt=0;
//		for(int j=1;j*j<=i;j++){
//			if(i%j==0) cnt+=2;
//			if(j*j==i) cnt--;
//		}
//		ans=max(ans,cnt);
//	}
//	cout<<ans<<endl;
	
//    freopen("set.in", "r", stdin);
//    freopen("set.out", "w", stdout);
//    for (int i = 1; i <= 100000; i++)
//        for (int j = i; j <= 100000; j += i) factor[j].push_back(i);
//
//    cin >> n >> q;
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i];
//        box[a[i]]++;
//    }
//
//    while (q--) {
//        int opt, x;
//        cin >> opt >> x;
//        if (opt == 1)
//            box[x]--;
//        else if (opt == 2)
//            box[x]++;
//        else {
//            int maxn = 0;
//
//            for (auto y : factor[x]) {
//                if (box[y] == 0 or y == 1)
//                    continue;
//
//                int temp = x, cnt = 0;
//                while (temp % y == 0) {
//                    cnt++;
//                    temp /= y;
//                }
//                maxn = max(maxn, cnt);
//            }
//
//            cout << maxn << endl;
//        }
//    }
    return 0;
}
/*
如果y是x的k重约数
那么y一定是x的因数 
对于每组询问，去查询x的所有因数
看一下y在不在集合中出现过
如果出现过不停执行
while(x%y==0) x/=y; 

桶的思想
f[x] 表示x在集合中出现了几次
每当加入一个元素x，就让f[x]++
每当删除一个元素x,就让f[x]--
询问x
枚举x的所有因数y，看一下f[y]是否大于0
10^5*sqrt(10^5)
进一步的优化
一个数的因数个数，其实远小于sqrt(x)
提前预处理出每个数的因数具体是哪些 
*/
