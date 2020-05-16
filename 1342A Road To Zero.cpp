#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,a,b,count=0;
		cin>>x>>y>>a>>b;
		if(x>y){
			swap(x,y);
		}
		count+=a*(y-x);
		if(2*a<b){
			count+=x*(2*a);
		}
		else{
			count+=x*b;
		}
		cout<<count<<endl;
	}
	
	return 0;
}