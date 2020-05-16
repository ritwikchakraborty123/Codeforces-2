#include<iostream>
using namespace std;
int main(){
	int u=0,l=0,i,n;
	string s;
	cin>>s;
	n=s.length();
	for(i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z'){
			u++;
		}
		else if(s[i]>='a' && s[i]<='z'){
			l++;
		}
	}
	if(l>=u){
		for(i=0;i<n;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=32;
			}
		}
	}
	else if(l<u){
		for(i=0;i<n;i++){
			if(s[i]>='a'&&s[i]<='z'){
				s[i]-=32;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}