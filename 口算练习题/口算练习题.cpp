#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	char a;
	int n,c,d;
	char s[100],b[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		if(b[0]>='a' && b[0]<='z'){
			a=b[0];
			cin>>c>>d;
		}else{
			sscanf(b,"%d",&c);
			cin>>d;
		}
		memset(s,0,sizeof(s));
		if(a=='a'){
			sprintf(s,"%d+%d=%d",c,d,c+d);
		}else if(a=='b'){
			sprintf(s,"%d-%d=%d",c,d,c-d);
		}else if(a=='c'){
			sprintf(s,"%d*%d=%d",c,d,c*d);
		}
		cout<<s<<endl<<strlen(s)<<endl;
	}
	return 0;
}

