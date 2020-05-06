#include<iostream>
using namespace std;
int main(){

		string s;
		int i,n;
	cin>>s;
	n=s.length();
	for(i=0;i<n;i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			break;
			}
	}
	if(i<n){
		cout<<"YES"<<endl;
	}
	else if(i>=n){
		cout<<"NO"<<endl;
	}
	
	return 0;
}