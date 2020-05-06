#include<iostream.h>
using namespace std;
int main(){
	int n,sum=0,temp=0,i,count=0;
	cin>>n;
	int str[n];
	for(i=0;i<n;i++){
		cin>>str[i];
		sum+=str[i];
	}
	sum=sum/2;
	
	sort(str,str+n);
	for(i=n-1;i>=0;i--){
		temp+=str[i];
		count++;
		if(temp>sum)
		break;
	}
	cout<<count<<endl;
	return 0;
}