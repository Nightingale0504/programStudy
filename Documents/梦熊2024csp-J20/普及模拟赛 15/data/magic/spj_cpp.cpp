#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
int f[N];
long long G[4],F[4];
int main(int argc,char *argv[]){
    registerTestlibCmd(argc,argv);
    G[1]=inf.readLong(),G[2]=inf.readLong(),G[3]=inf.readLong();
    string A=ouf.readToken();
    string B=ans.readToken();
	if(A==B&&A[0]=='N') quitf(_ok,"Correct. Participant found a valid solution.");
    if(A!=B&&A[0]=='N') quitf(_wa,"Wrong Answer.");
	long long x=ouf.readLong(),y=ouf.readLong(),z=ouf.readLong();
	F[1]=max(x,y),F[2]=max(x,z),F[3]=max(y,z);
	while(!ouf.seekEof()) ouf.readToken();
	sort(F+1,F+4);
	sort(G+1,G+4);
	for(int i=1;i<=3;i++) if(F[i]!=G[i]) quitf(_wa,"Wrong Answer.");
    quitf(_ok,"Correct. Participant found a valid solution.");
	return 0;
}
