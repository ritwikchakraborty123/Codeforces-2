#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[250],i,x,y,n,cnt=0;
	cin>>n>>x;
	for(i=0;i<x;i++){
		cin>>arr[i];
	}
	cin>>y;
	for(i=x;i<x+y;i++){
		cin>>arr[i];
	}
	sort(arr,arr+(x+y));
	for(i=0;i<x+y;i++){
		if(arr[i]!=arr[i+1]){
			cnt++;
		}
	}
	if(n==(cnt)){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}