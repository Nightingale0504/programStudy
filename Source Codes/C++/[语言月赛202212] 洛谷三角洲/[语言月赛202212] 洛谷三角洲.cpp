#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int x,y,z;
int t1,t2,t3;
int main(){
	scanf("%d%d%d",&x,&y,&z);
	t1=(x>y+z)?y+z:x;
	t2=(y>x+z)?x+z:y;
	t3=(z>y+x)?x+y:z;
	printf("%d\n%d\n%d",t1,t2,t3);
	return 0;
}

