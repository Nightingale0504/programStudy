#include<bits/stdc++.h> 
using namespace std;
#define int long long
int t,n,cnt;
bool flag=true;
struct node{
	int x,id;
}a[1005],b[1005];
signed main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for (int i=1;i<=n;i++){
			scanf("%lld",&a[i].x);
 			a[i].id=i;
		}
		for (int i=1;i<=n;i++){
			scanf("%lld",&b[i].x);
			b[i].id=i;
		}
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				if (a[i].x<a[j].x){
					swap(a[i],a[j]);
				}
			}
		}
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				if (b[i].x>b[j].x){
					swap(b[i],b[j]);
				}
			}
		}
		cnt=0;
		flag=true;
		for (int i=1;i<=n && flag;i++){
			cnt+=a[i].x;
   			if (cnt>=b[i].x){
   			    cnt-=b[i].x;
		    }else{
 			    flag=false;
			}
		}
		if (flag){
		   printf("Yes\n");
		   for (int i=1;i<=n;i++){
			   printf("%lld ",a[i].id);
		   }
		   printf("\n");
		   for (int i=1;i<=n;i++){
			   printf("%lld ",b[i].id);
		   }
		   printf("\n");
	    }else{
			printf("No\n");
		}
	}
	return 0;
}

