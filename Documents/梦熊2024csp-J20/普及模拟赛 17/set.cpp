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
���y��x��k��Լ��
��ôyһ����x������ 
����ÿ��ѯ�ʣ�ȥ��ѯx����������
��һ��y�ڲ��ڼ����г��ֹ�
������ֹ���ִͣ��
while(x%y==0) x/=y; 

Ͱ��˼��
f[x] ��ʾx�ڼ����г����˼���
ÿ������һ��Ԫ��x������f[x]++
ÿ��ɾ��һ��Ԫ��x,����f[x]--
ѯ��x
ö��x����������y����һ��f[y]�Ƿ����0
10^5*sqrt(10^5)
��һ�����Ż�
һ������������������ʵԶС��sqrt(x)
��ǰԤ�����ÿ������������������Щ 
*/
