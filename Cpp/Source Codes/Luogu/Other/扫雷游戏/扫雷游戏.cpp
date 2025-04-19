#include<bits/stdc++.h> 
using namespace std;
bool minefield[105][105];
int main(){
	memset(minefield,0,sizeof(minefield));
    int n,m;
    char tmp;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) 
        {
            cin>>tmp;
            if(tmp=='*'){
            	minefield[i][j]=1;
			}
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(minefield[i][j]==1){
            	printf("*");
			}else{
                printf("%d",minefield[i+1][j+1]+minefield[i+1][j-1]+minefield[i+1][j]+minefield[i][j+1]+minefield[i][j-1]+minefield[i-1][j+1]+minefield[i-1][j]+minefield[i-1][j-1]);
            }
        }
        printf("\n");
    }
	return 0;
}


