#include<iostream>
using namespace std;
int main(){
	int n,i,j,min,max,cnt=0,min_index=0,max_index=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	min=101;
	max=0;
	for(i=0;i<n;i++){
		if(arr[i]<=min){
			min=arr[i];
			min_index=i;
			
		}
	}
	for(j=min_index	;j<n-1;j++){
		swap(arr[j],arr[j+1]);
		cnt++;
	}
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			max_index=i;
		}
	}
	for(j=max_index;j>0;j--){
		swap(arr[j],arr[j-1]);
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}