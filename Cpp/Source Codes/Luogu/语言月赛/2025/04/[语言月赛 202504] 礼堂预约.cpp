#include<bits/stdc++.h> 
#define int long long
using namespace std;
int n,ans[5005],year,month,day,date;
char c1,c2;
map<int,int> m;
priority_queue< int,vector<int>,greater<int> > que;
signed main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>c1>>date>>c2;
		if (c2=='M'){
			date=date*10+1;
		}
		if (c2=='A'){
			date=date*10+2;
		}
		if (c2=='E'){
			date=date*10+3;
		}
		if (c1=='O'){
			date=date*10+1;
		}
		if (c1=='C'){
			date=date*10+2;
		}
		if (c1=='P'){
			date=date*10+3;
		}
		date=date*10000+i;
		que.push(date);
	}
	while (!que.empty()){
		date=que.top();
		que.pop();
		if (m[date/100000]==0){
			m[date/100000]=1;
			ans[date%10000]=date/1000000;
			
		}else{
			year=date/10000000000;
			month=date/100000000%100;
			day=date/1000000%100;
			day++;
			if (month==4 || month==6 || month==9 || month==11){
				if (day==31){
					month++;
					day=1;
				}
			}else if (month==2){
				if ((year%4==0 && year%100!=0) || year%400==0){
					if (day==30){
						month++;
						day=1;
					}
				}else{
					if (day==29){
						month++;
						day=1;
					}
				}
			}else{
				if (day==32){
					month++;
					day=1;
				}
				if (month==13){
					year++;
					month=1;
					day=1;
				}
			}
			date=year*10000000000+month*100000000+day*1000000+date%1000000;
			que.push(date);
		}
	}
	for (int i=1;i<=n;i++){
		printf("%lld\n",ans[i]);
	}
	return 0;
}

