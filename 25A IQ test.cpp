#include<iostream>
using namespace std;
int main(){
	int n,i,arr[101],even=0,odd=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	if(even<odd){
		for(i=0;i<n;i++){
			if(arr[i]%2==0){
				cout<<i+1<<" ";
			}
		}
		
	}
	else{
		for(i=0;i<n;i++){
			if(arr[i]%2!=0){
				cout<<i+1<<" ";
			}
		}
	}
	cout<<endl;
	return 0;
}