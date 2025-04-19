#include<bits/stdc++.h> 
using namespace std;
struct stu{
	int totalAchievement;
	int chineseAchievement;
	int mathAchievement;
	int englishAchievement;
	int studentID;
}; 
int cmp(stu a,stu b){
	if (a.totalAchievement!=b.totalAchievement){
		return a.totalAchievement>b.totalAchievement;
	}else if (a.chineseAchievement!=b.chineseAchievement){
		return a.chineseAchievement>b.chineseAchievement;
	}else{
		return a.studentID<b.studentID;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	stu students[n+1];
	for (int i=0;i<n;i++){
		scanf("%d",&students[i].chineseAchievement);
		scanf("%d",&students[i].mathAchievement);
		scanf("%d",&students[i].englishAchievement);
		students[i].totalAchievement=students[i].chineseAchievement+students[i].mathAchievement+students[i].englishAchievement;
		students[i].studentID=i+1;
	}
	sort(students,students+n,cmp);
	for (int i=0;i<5;i++){
		printf("%d %d\n",students[i].studentID,students[i].totalAchievement);
	}
	return 0;
}


