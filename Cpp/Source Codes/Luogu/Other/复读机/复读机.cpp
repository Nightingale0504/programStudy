#include<bits/stdc++.h> 
using namespace std;
#define int long long
int t;
string a;
signed main(){
	fstream infile;
    fstream outfile;
    infile.open("copycat.in",ios::in);
    outfile.open("copycat.out",ios::out);
    infile>>t;
    for (int i=0;i<t;i++){
    	infile>>a;
		outfile<<a<<endl;
	}
	infile.close();
	outfile.close();
	return 0;
}

