#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
map<char, int> m;
char c;
int main(){	
	while (cin>>c){
		if (c>='A' && c<='Z'){
			m[c]++;
        }
    }
	int Max=-1;
	for (auto i : m){
		if (i.second>Max){
			Max=i.second;
        }
    }
	for (int i=0;i<Max;i++){
		for (int j=0;j<26;j++){
			if (i>=Max-m[j+'A']){
				cout<<"* ";
            }else{
				cout<<"  ";
            }
        }
		cout<<endl;
	}
	for (auto i : m){
		cout<<i.first<<" ";
    }
	return 0;
}