#include<bits/stdc++.h> 
using namespace std;
#define maxN 1024 
int main(){
	int n,a[3][maxN],ans=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[0][i]);
		scanf("%d",&a[1][i]);
		scanf("%d",&a[2][i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if (abs(a[0][i]-a[0][j])<=5 && abs(a[1][i]-a[1][j])<=5 && abs(a[2][i]-a[2][j])<=5 && abs(a[0][i]+a[1][i]+a[2][i]-a[0][j]-a[1][j]-a[2][j])<=10){
				ans++;
			}
		}
	}
	printf("%d",ans);
	return 0;
}

