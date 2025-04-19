#include<bits/stdc++.h> 
using namespace std;
#define int long long
char n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
int p,q;
signed main(){
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n1='A';
	}else{
		n1='B';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n2='C';
	}else{
		n2='D';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n3='E';
	}else{
		n3='F';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n4='G';
	}else{
		n4='H';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n5='I';
	}else{
		n5='J';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n6='K';
	}else{
		n6='L';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n7='M';
	}else{
		n7='N';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n8='O';
	}else{
		n8='P';
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n9=n1;
	}else{
		n9=n2;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n10=n3;
	}else{
		n10=n4;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n11=n5;
	}else{
		n11=n6;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n12=n7;
	}else{
		n12=n8;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n13=n9;
	}else{
		n13=n10;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n14=n11;
	}else{
		n14=n12;
	}
	scanf("%lld-%lld",&p,&q);
	if (p>q){
		n15=n13;
	}else{
		n15=n14;
	}
	printf("%c",n15);
	return 0;
}

