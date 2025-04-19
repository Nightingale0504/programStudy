#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a;
	double b;
	scanf("%d",&a);
	b=(a<=150?a*0.4463:150*0.4463+(a<=400?(a-150)*0.4663:(400-150)*0.4663+(a-400)*0.5663));
	printf("%.1lf",b);
	return 0;
}

