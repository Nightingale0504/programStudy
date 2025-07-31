#include<bits/stdc++.h> 
using namespace std;
#define int long long
string str,ss;
struct node{
    string ans,process;
    int step;
}t;
queue<node> que;
map<string,int> m;
signed main(){
    for (int i=1;i<=8;i++){
        int a;
        scanf("%lld",&a);
        str+=(a+'0');
    }
    t={"12345678","",0};
    que.push(t);
    m["12345678"]=1;
    while (!que.empty()){
        string s=que.front().ans;
        string p=que.front().process;
        int step=que.front().step;
        que.pop();
        if (s==str){
            cout<<step<<"\n";
            cout<<p;
            return 0;
        }
        // A 87654321
        ss=s;
        reverse(ss.begin(),ss.end());
        if (m[ss]==0){
            t={ss,p+"A",step+1};
            que.push(t);
            m[ss]=1;
        }
        // B 41236785
        ss="";
        ss+=s[3];
        ss+=s[0];
        ss+=s[1];
        ss+=s[2];
        ss+=s[5];
        ss+=s[6];
        ss+=s[7];
        ss+=s[4];
        if (m[ss]==0){
            t={ss,p+"B",step+1};
            que.push(t);
            m[ss]=1;
        }
        // C 17248635
        ss="";
        ss+=s[0];
        ss+=s[6];
        ss+=s[1];
        ss+=s[3];
        ss+=s[7];
        ss+=s[5];
        ss+=s[2];
        ss+=s[4];
        if (m[ss]==0){
            t={ss,p+"C",step+1};
            que.push(t);
            m[ss]=1;
        }
    }
	return 0;
}