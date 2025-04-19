#include<bits/stdc++.h> 
#include<windows.h>
using namespace std;
// part:define function
long long enterNum(){
	long long s;
	cout<<"Enter your number:";
	cin>>s;
	return s;
}
int enterHex(){
	int s;
	cout<<"Enter you number:";
	cin>>hex>>s;
	return s;
}
void showMenu(){
	cout<<"Please enter 1,2,3,4"<<endl;
	cout<<"1) Dec to Bin     2) Dec to OCT"<<endl;
	cout<<"3) Oct to Dec     4) Oct to Hex"<<endl;
	cout<<"5) Hex to Oct     6) Exit"<<endl;
}
void DB(long long num,int a[]){ //Dec to Bin
	int length=0;
	while (num/2){
		a[length]=num%2;
		length++;
		num=num/2;
	}
	a[length]=num;
	length++;
	for (int i=length-1;i>=0;i--){
		cout<<a[i];
	}
}
void DO(long long num,int a[]){ //Dec to Oct
	int length=0;
	while (num/8){
		a[length]=num%8;
		length++;
		num=num/8;
	}
	a[length]=num;
	length++;
	for (int i=length-1;i>=0;i--){
		cout<<a[i];
	}
}
void OD(long long num,int a[]){ //Oct to Dec
	int res=0,i=0;
	while (num!=0){
		a[i]=num%10;
		num-=a[i++];
		num=num/10;
	}
	for (int j=0;j<i;j++){
		res+=a[j]*pow(8,j);
	} 
	cout<<res;
}
int OH(long long num){ //Oct to Hex
	string hexTable="0123456789ABCDEF",res;
	int temp=num,i=0;
	while (num!=0){
		res[i++]=hexTable[num%16];
		num/=16;
	}
	for (int j=i-1;j>=0;j--){
		cout<<res[j];
	}
}
void HO(int num,int decArr[]){ //Hex to Oct
	long long dec=0;
	int temp=0,count=0,j=0;
	while (num!=0){
		temp=num;
		num/=16;
		temp=temp%16;
		decArr[count++]=temp;
	}
	for (int i=0;i<count;i++){
		if (i<1){
			dec+=decArr[i];
		}else{
			dec+=decArr[i]*(16<<j);
			j+=4;
		}
	}
	cout<<dec;
}
int main(){
	// part:define variable
	int x[100];
	long long number;
	int track;
	// part:init system
	cout<<"System initializing......"<<endl;
	Sleep(3000);
	showMenu();
	cout<<"Enter your case code:";
	cin>>track;
	// part:check track value
	while (track!=6){
		switch (track){
			case 1:{
				number=enterNum();
				DB(number,x);
				cout<<endl<<endl;
				break;
			}
			case 2:{
				number=enterNum();
				DO(number,x);
				cout<<endl<<endl;
				break;
			}
			case 3:{
				number=enterNum();
				OD(number,x);
				cout<<endl<<endl;
				break;
			}
			case 4:{
				number=enterNum();
				OH(number);
				cout<<endl<<endl;
				break;
			}
			case 5:{
				number=enterHex();
				HO(number,x);
				cout<<endl<<endl;
				break;
			}
			default:{
				cout<<endl<<"Code Error!"<<endl;
				cout<<"Please check your code and enter again."<<endl<<endl;
				break;
			}
		}
		showMenu();
		cout<<"Enter your case code:";
		cin>>track;
	}
	// part:output final texts 
	cout<<endl<<"Bye!"<<endl;
	cout<<"System exiting......"<<endl;
	Sleep(3000);
	system("pause");
	return 0;
}

