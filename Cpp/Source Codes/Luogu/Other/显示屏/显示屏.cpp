#include<bits/stdc++.h> 
using namespace std;
#define int long long
int tubes[10][8]={
{6,0,1,2,4,5,6},
{2,2,5},
{5,0,2,3,4,6},
{5,0,2,3,5,6},
{4,1,2,3,5},
{5,0,1,3,5,6},
{6,0,1,3,4,5,6},
{3,0,2,5},
{7,0,1,2,3,4,5,6},
{6,0,1,2,3,5,6}
};
int dot[7][3][2]={
{{0,0},{0,1},{0,2}},
{{0,0},{1,0},{2,0}},
{{0,2},{1,2},{2,2}},
{{2,0},{2,1},{2,2}},
{{2,0},{3,0},{4,0}},
{{2,2},{3,2},{4,2}},
{{4,0},{4,1},{4,2}}
};
char num[110],out[5][500];
int n;
int baseX,baseY,digit,tubeNum;
signed main(){
	scanf("%lld",&n);
	scanf("%s",num);
	memset(out,'.',sizeof(out));
	for (int i=0;i<n;i++){
		baseX=0;
		baseY=i*4;
		digit=num[i]-'0';
		for (int j=1;j<=tubes[digit][0];j++){
			tubeNum=tubes[digit][j];
			out[baseX+dot[tubeNum][0][0]][baseY+dot[tubeNum][0][1]]='X';
			out[baseX+dot[tubeNum][1][0]][baseY+dot[tubeNum][1][1]]='X';
			out[baseX+dot[tubeNum][2][0]][baseY+dot[tubeNum][2][1]]='X';
		}
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<4*n-1;j++){
			printf("%c",out[i][j]);
		}
		printf("\n");
	}
	return 0;
}	

