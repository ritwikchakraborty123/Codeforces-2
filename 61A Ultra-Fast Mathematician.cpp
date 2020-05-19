#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]==t[i]){
			s[i]='0';
		}
		else{
			s[i]='1';
		}
	}
	cout<<s<<endl;
	return 0;
}