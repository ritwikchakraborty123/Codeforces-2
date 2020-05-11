#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	
			string s,t;
	cin>>s>>t;
	reverse(s.begin(), s.end());
	if(t==s){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}