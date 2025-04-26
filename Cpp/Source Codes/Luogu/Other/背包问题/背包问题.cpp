#include<bits/stdc++.h> 
using namespace std;
struct Node{
	float weight,value,preWeightValue;
	bool mark;
	char charMark;
}; 
int main(){
	float w[7]={ 35,30,60,50,40,10,25 };
	float v[7]={ 10,40,30,50,35,40,30 };
	Node nodes[7];
	for (int i=0;i<7;i++){
		nodes[i].value=v[i];
		nodes[i].weight=w[i];
		nodes[i].charMark=65+i;
		nodes[i].mark=false;
		nodes[i].preWeightValue=v[i]/w[i];
	}
	for (int i=0;i<7;i++){
		printf("%f%c",nodes[i].preWeightValue,' ');
	}
	printf("%c",'\n');
	float allWeight=0.0;
	float allValue=0.0;
	float max=0.0;
	char charArray[7];
	int flag,n=0;
	while (allWeight<=150){
		for (int index=0;index<7;index++){
			if (nodes[index].preWeightValue>max && nodes[index].mark==false){
				max=nodes[index].preWeightValue;
				flag=index;
			}
		}
		charArray[n++]=nodes[flag].charMark;
		nodes[flag].mark=true;
		allWeight+=nodes[flag].weight;
		allValue+=nodes[flag].value;
		max=0.0; 
	}
	allWeight-=nodes[n-1].weight;
	for (int i=0;i<7;i++){
		if (allWeight+nodes[i].weight<=150 && nodes[i].mark==false){
			nodes[i].mark=true;
			allWeight+=nodes[i].weight;
			allValue+=nodes[i].value;
		}
	}
	for (int i=0;i<n-1;i++){
		printf("%c%c",charArray[i],' ');
	}	
	printf("%c",'\n');
	printf("%s%f%c","allWeight:",allWeight,'\n');
	printf("%s%f%c","allValue:",allValue,'\n');
	return 0;
}


