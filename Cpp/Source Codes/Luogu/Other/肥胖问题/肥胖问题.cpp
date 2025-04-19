#include<bits/stdc++.h> 
using namespace std;
int main(){
	double m,h,bmi;
	scanf("%lf",&m);
	scanf("%lf",&h);
	bmi=m/(pow(h,2));
	if (bmi<18.5){
		printf("%s","Underweight");
	}else if (bmi>=18.5 && bmi<24){
		printf("%s","Normal");
	}else{
		cout<<bmi<<endl;
		printf("%s","Overweight");
	}
	return 0;
}

