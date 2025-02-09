#include "interaction.h"
using namespace std;
int n=get_num(),l,r,m;
vector<int>v;
int main(){
	for (int i=0;i<n;i++){
		l=0;
		r=1e6;
		while (l<=r){
			if (m=l+r>>1,guess(i,m)>0){
				r=m-1;
			}else{
				l=m+1;
			}
		}
		v.push_back(l-1);
	}
	submit(v);
	return 0;
}

