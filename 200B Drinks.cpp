#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	float res;
	cin>>n;
	int x[n];
	for(i=0;i<n;i++){
		cin>>x[i];
		sum+=x[i];
	}
	res=(float)sum/n;
	cout<<res<<endl;
	return 0;
}