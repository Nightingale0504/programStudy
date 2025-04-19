#include<bits/stdc++.h> 
using namespace std;
char initial,latest;
int n,sum=1,flag[10005];
int main(){
	cin>>initial;
	cin>>n;
	latest=initial;
	flag[(int)initial]=1;
	for (int i=1;i<=n;i++){
		char f,s;
		cin>>f>>s;
		if (latest!=f && latest!=s){
			continue;
		}else{
			if (latest==s){
				if (flag[(int)f]==0){
					flag[(int)f]=1;
					sum++;
				}
				latest=f;
			}
		}
	}
	cout<<latest<<endl;
	cout<<sum;
	return 0;
}

