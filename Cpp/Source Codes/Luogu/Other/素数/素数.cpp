#include<bits/stdc++.h> 
using namespace std;
#define maxN 10010
// part:define function
void menu(){
	printf("%s%c","Welcome to use Prime Checker.",'\n');
	printf("%s%c","Usage:Enter two numeric parameters, separated by spaces.",'\n');
	printf("%s%c","The first parameter,the method for solution.",'\n');
	printf("%s%c","The second parameter,the number you want to check(type int).",'\n');
	printf("%s%c","The method selections:",'\n');
	printf("%s%c","1:Violent Solution	2:Radical Solution	3:Eulerian sieve method Solution",'\n');
	printf("%s%c","The result will be like 'True' or 'False' to output.",'\n');
	printf("%s%c","'True' means the number is a prime.",'\n');
	printf("%s%c","'False' means the number isn't a prime.",'\n');
	printf("%s","Please enter you selected method and number:");
} 
bool calcPrime(int n,int id){
	switch (id){
		case 1:{	// Violent Solution,VS
			if (n<=1){
				return false;
			}
			for (int i=2;i<n;i++){
				if (n%i==0){
					return false;
				}
			}
			break;
		}
		case 2:{	// Radical Solution,RS
			if (n<=1){
				return false;
			}
			int m=sqrt(n);
			for (int i=2;i<=m;i++){
				if (n%i==0){
					return false;
				}
			}
			break;
		}
		case 3:{	// Eulerian sieve method Solution,EsmS
			int vis[maxN]={ 0 };
			int prim[maxN]={ 0 };
			int len=0;
			if (n<=1){
				return false;
			}
			for (int i=2;i<=n;i++){
				if (!vis[i]){
					prim[++len]=i;
				}
				for (int j=1;j<=len && i*prim[j]<=n;j++){
					vis[i*prim[j]]=1;
					if (i%prim[j]==0){
						break;
					}
				}
			}
			break;
		}
	}
	return true;
}
int main(){
	menu();
	int num,n;
	scanf("%d%d",&num,&n);
	bool state=calcPrime(n,num);
	if (state==1){
		printf("%c%c%s%c",'\n','\n',"The result: True",'\n');
	}else{
		printf("%c%c%s%c",'\n','\n',"The result: False",'\n');
	}
	system("pause"); 
	return 0;
}

