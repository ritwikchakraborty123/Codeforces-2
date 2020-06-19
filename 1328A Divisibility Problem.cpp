#include<iostream>
using namespace std;
int main(){
	int n,a,b,c,ans;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a%b==0){
			cout<<0<<endl;
		}
		else{
			c=a/b;
			ans=((b*(c+1))-a);
			cout<<ans<<endl;
		}
	}
	return 0;
}