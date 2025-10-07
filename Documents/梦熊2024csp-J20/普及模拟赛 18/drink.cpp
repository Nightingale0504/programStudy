#include <bits/stdc++.h>
using namespace std;
char ans[100005];
char a[100005], b[100005];
int main() {
    freopen("drink.in", "r", stdin);
    freopen("drink.out", "w", stdout);
#define int long long
    int p = 0, q = 0, k = 0, n, j = 0, flag = 0;
    scanf("%s %d", a+1, &q);
    //a+1里面存的是这个大数字的数组
	int len=strlen(a+1);
	//翻转操作 -> 所有高精度都要处理 
	//高位在前，低位在后->高位在后，低位在前 
	q--;
	for(int i=1;i<=len/2;i++) swap(a[i],a[len-i+1]);
	int sum=0;
	for(int i=len;i>=1;i--){
		sum=sum*10+a[i]-'0';
		f[i]=sum/q;
		sum=sum%q;
	}
	//包含了前导零
	int x=len;
	while(f[x]==0) x--;
	for(int i=x;i>=1;i--) cout<<f[i]; 
    
//    q--;
//    n = strlen(a);
//    for (int i = 0; i < n; i++) {
//        p = p * 10 + a[i] - '0';
//        if (p >= q) {
//            k = p / q;
//            ans[j++] = k + '0';
//            p = p % q;
//        } else
//            ans[j++] = '0';
//    }
//    for (int i = 0; i < j; i++) {
//        if (ans[i] != '0')
//            flag = 1;
//        if (flag == 1)
//            printf("%c", ans[i]);
//    }
}
/*
每喝了k杯饮料，就可以换一杯新的 
k-1杯饮料瓶，可以换一杯新的饮料，并且新的饮料瓶不能再用
n/(k-1)
高精度/int 的形式
问最终答案
所有高精度的原理都是模拟竖式 
整个数字读入,放到一个数组里面,假设数组是f
假设上一轮剩下的余数为sum
sum*10+f[i] 
高精度=模拟 
*/


