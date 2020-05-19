#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int s,p,f[1000],least,i;
	cin>>s>>p;
	for(i=0;i<p;i++){
		cin>>f[i];
	}
	sort(f,f+p);
	 least=f[s-1]-f[0];
	for(i=1;i<=p-s;i++){
		if(f[i+s-1]-f[i]<least){
			least=f[i+s-1]-f[i];
		}
	}
	cout<<least<<endl;
	return 0;
}