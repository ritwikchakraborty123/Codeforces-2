#include<iostream>
using namespace std;
int main(){
	int n,i,count=0,j,max=0;
	cin>>n;
	int s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<n-1;i++){
		j=i+1;
		if(s[j]>=s[i]){
			count++;
			if(count>=max){
				max=count;
			}
		}
		else if(s[j]<s[i]){
			count=0;
		}
	}
	max=max+1;
	cout<<max<<endl;
	return 0;
}