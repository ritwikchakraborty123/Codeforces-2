#include<iostream>
using namespace std;
int main(){
	int n,i,c=0;
	cin>>n;
	int s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
		if(s[i]==1){
			c++;
		}
	}
	if(c>0){
		cout<<"Hard"<<endl;
	}
	else{
		cout<<"Easy"<<endl;
	}
	return 0;
}