#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,c[100],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c,c+n);
	for(i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
}