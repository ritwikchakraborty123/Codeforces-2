#include<iostream>
using namespace std;
int main(){
	int n,f;
	cin>>n>>f;
	int h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	int w=0;
	for(int i=0;i<n;i++){
		if(h[i]<=f){
			w+=1;
		}
		else if(h[i]>f){
			w+=2;
		}
	}
	cout<<w<<endl;
	return 0;
}