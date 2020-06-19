#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,cnt=0;
	char s[101];
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=97+s[i]-65;
		}
	}
	sort(s,s+n);
	for(i=0;i<n;i++){
		if(s[i]!=s[i+1]){
			cnt++;
		}
	}
	if(cnt==26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}