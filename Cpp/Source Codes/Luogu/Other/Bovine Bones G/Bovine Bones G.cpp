#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b){
    	swap(a,b);
	}
    if (b<c){
    	swap(b,c);
	}
    if (a<b){
    	swap(a,b);
	}
    if(b<=a-c+1)
        cout<<1+b+c;
    else
        cout<<2+a+(b-a+c-1)/2;
	return 0;
}

