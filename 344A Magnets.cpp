#include<iostream>
using namespace std;
int main(){
	int n,i,j,c=1;
	cin>>n;
	int s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<n-1;i++){
		j=i+1;
		if(s[j]!=s[i]){
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}