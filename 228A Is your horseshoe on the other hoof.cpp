#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[4],i,cnt=0,res;
	for(i=0;i<4;i++){
		cin>>arr[i];
	}
	sort(arr,arr+4);
	for(i=0;i<4;i++){
		if(arr[i]!=arr[i+1]){
			cnt++;
		}
	}
	res=4-cnt;
	cout<<res<<endl;
	return 0;
}