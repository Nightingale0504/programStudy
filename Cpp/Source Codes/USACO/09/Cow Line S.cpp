#include<bits/stdc++.h> 
using namespace std;
#define int long long
int s,num,m;
deque<int> deq;
char t,d;
signed main(){
	cin>>s;
	while (s--){
		cin>>t;
		switch (t){
			case 'A':{
				cin>>d;
				switch (d){
					case 'L':{
						deq.push_front(++m);
						break;
					}
					case 'R':{
						deq.push_back(++m);
						break;
					}
				}
				break;
			}
			case 'D':{
				cin>>d>>num;
				switch (d){
					case 'L':{
						while (num--){
							deq.pop_front();
						}
						break;
					}
					case 'R':{
						while (num--){
							deq.pop_back();
						}
						break;
					}
				}
				break;
			}
		}
	}
	while (!deq.empty()){
		printf("%lld\n",deq.front());
		deq.pop_front();
	}
	return 0;
}

