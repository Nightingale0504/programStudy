#include <iostream>
#include <cstring>
using namespace std;
const int MAX_LEN=1000000;
char S[MAX_LEN+1];
int del_ops[MAX_LEN/3][3];
int main() {
    int T;
    cin>>T;
    while (T--){
        cin>>S;
        int n=strlen(S);
        int del_count=0;
        bool marked[MAX_LEN]={false};
        bool found=true;
        while (found){
            found=false;
            int a_pos=-1,p_pos=-1,c_pos=-1;
            for (int i=0;i<n;++i) {
                if (!marked[i]){
                    if (S[i]=='A'){
                    	a_pos=i;
					}
                    if (S[i]=='P' && a_pos!=-1){
                    	p_pos=i;
					}
                    if (S[i]=='C' && p_pos!=-1) {
                        c_pos=i;
                        break;
                    }
                }
            }
            if (a_pos!=-1 && p_pos!=-1 && c_pos!=-1) {
                del_ops[del_count][0]=a_pos+1;
                del_ops[del_count][1]=p_pos+1;
                del_ops[del_count][2]=c_pos+1;
                del_count++;
                marked[a_pos]=true;
                marked[p_pos]=true;
                marked[c_pos]=true;
                found=true;
            }
        }
        bool is_empty=true;
        for (int i=0;i<n;++i) {
            if (!marked[i]) {
                cout<<S[i];
                is_empty = false;
            }
        }
        if (is_empty){
            cout<<"Perfect"<<endl;
        }else{
            cout<<endl;
        }
        cout<<del_count<<endl;
        for (int i=0;i<del_count;++i) {
            cout<<del_ops[i][0]<<" "<<del_ops[i][1]<<" "<<del_ops[i][2]<<endl;
        }
    }
    return 0;
}

