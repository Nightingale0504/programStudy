#include<bits/stdc++.h> 
using namespace std;
int a[4],n=3;
int main(){
	for (int i=1;i<=3;i++){
		scanf("%d",&a[i]);
	} 
	sort(a+1,a+n+1);
	if (a[1]+a[2]<=a[3]){
		printf("Not triangle\n");
		return 0;
	}
	if (a[3]*a[3]==(a[2]*a[2]+a[1]*a[1])) printf("Right triangle\n");
	else if (a[3]*a[3]>(a[2]*a[2]+a[1]*a[1])) printf("Obtuse triangle\n");
	else if (a[3]*a[3]<(a[2]*a[2]+a[1]*a[1]))printf("Acute triangle\n");
	if (a[1]==a[2]||a[2]==a[3]||a[3]==a[1]) printf("Isosceles triangle\n");
	if (a[1]==a[2]&&a[2]==a[3]) printf("Equilateral triangle\n");
	return 0;
}

