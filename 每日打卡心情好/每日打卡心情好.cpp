#include<iostream>
#include<algorithm>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int N;cin>>N;
	int x,sum=0,num=0,h=0;
 	while(N--)
	{
	 	cin>>x;
	 	if(x==1)//´ò¿¨ 
	 	{
	 		if(num>0)
	 		{
	 			h-=pow(2,num-1);
			 }
			 if(h<0)
			 {
			 	h=0;
			 }
			 sum++;
			 h++; 
			 num=0;
			 if(h>=3)sum++;
			 if(h>=7)sum++;
			 if(h>=30)sum++;
			 if(h>=120)sum++;
			 if(h>=365)sum++;
		 }else if(x==0){
		 	num++;
		 }
	} 
	cout<<sum<<endl; 
	return 0;
} 
