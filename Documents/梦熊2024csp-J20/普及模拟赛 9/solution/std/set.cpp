#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,i,t,x;
char c;
map<int,int> f,a;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        cin>>c>>x;
        if(c=='+') f[x]++;
        else{
            if(!a[x]) t=1;
            else t=a[x];
            for(i=t;;i++)
                if(!f[i*x]){
                    cout<<i*x<<"\n",a[x]=i;
                    break;
                }
        }
    }
    return 0;
}
/*
�����ĽǶ�ȥ˼��
unordered_map/map  S�洢��Щ�������� O(1)

ѯ�ʵ�ʱ��,x

 S[x] �ڲ���
 S[2*x]
 S[3*x] 
 
������һ����x����Ϊkx����ô��һ�ο���ֱ�Ӵ�kx������

kx,kx+x,kx+2x,....

һ��Ԫ��x�����ᱻ��Щѯ���ʵ� ���� 

 

*/
