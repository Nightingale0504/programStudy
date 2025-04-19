#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=8000010; 
int a[maxN],s[maxN];
int n,M,ansi,ansj,ansmax;
int sum,l,r,mid,i,j,x;
inline int read(){
    int x=0,t=1;
    char ch=getchar();
    while (ch<'0' || ch>'9'){
        if (ch=='-'){
        	t=-1;
		}
        ch=getchar();
    }
    while (ch>='0' && ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*t;
}
inline void write(int x)
{
    if (x<0){
    	putchar('-');
		x=-x;
	}
    if (x>9) 
		write(x/10);
    putchar(x%10+'0');
}
int find(int k){
	l=1;
	r=n+1;
	while (l<r){
		int mid=l+(r-1)/2;
		if (s[mid]>=k){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	if (a[l]==k){
		return 1;
	}else{
		return l-1;
	}
}
void solve(int id){
	switch (id){
		case 1:{
			n=read();
			M=read();
			for (int i=1;i<=n;i++){
				a[i]=read();
			}
			for (int i=1;i<=n;i++){
				for (int j=i;j<=n;j++){
					sum=0;
					for (int k=i;k<=j;k++){
						sum+=a[k];
					}
					if (sum<=M && sum>ansmax){
						ansmax=sum;
						ansi=i;
						ansj=j;
					}
				}
			}
			write(ansi);
			printf(" ");
			write(ansj);
			printf(" ");
			write(ansmax);
			printf(" ");
			break;
		}
		case 2:{
			n=read();
			M=read();
			for (int i=1;i<=n;i++){
				a[i]=read();
			}
			s[0]=0;
			for (int i=1;i<=n;i++){
				s[i]=s[i-1]+a[i];
			}
			for (int i=1;i<=n;i++){
				for (int j=i;j<=n;j++){
					sum=s[j]-s[i-1];
					if (sum<=M && sum>ansmax){
						ansmax=sum;
						ansi=i;
						ansj=j;
					}
				}
			}
			write(ansi);
			printf(" ");
			write(ansj);
			printf(" ");
			write(ansmax);
			printf(" ");
			break;
		}
		case 3:{
			n=read();
			M=read();
			for (int i=1;i<=n;i++){
				a[i]=read();
			}
			s[0]=0;
			for (int i=1;i<=n;i++){
				s[i]=s[i-1]+a[i];
			}
			for (int i=1;i<=n;i++){
				x=s[i-1]+M;
				j=find(x);
				sum=s[j]-s[i-1];
				if (sum<=M && sum>ansmax){
					ansmax=sum;
					ansi=i;
					ansj=j;
				}
			}
			write(ansi);
			printf(" ");
			write(ansj);
			printf(" ");
			write(ansmax);
			printf(" ");
			break;
		}
		case 4:{
			i=1;
			j=1;
			n=read();
			M=read();
			for (int i=1;i<=n;i++){
				a[i]=read();
			}
			while (i<=n){
				while (j<=n && sum+a[j]<=M){
					sum+=a[j];
					j++;
				}
				if (sum<=M && sum>ansmax){
					ansmax=sum;
					ansi=i;
					ansj=j-1;
				}
				sum-=a[i];
				i++;
			}
			write(ansi);
			printf(" ");
			write(ansj);
			printf(" ");
			write(ansmax);
			printf(" ");
			break;
		}
	}
}
signed main(){
	solve(4);
	return 0;
}

