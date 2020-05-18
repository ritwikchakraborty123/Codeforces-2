#include<iostream>
using namespace std;
int main(){
	int s[7],i,j=0;
	for(i=1;i<=7;i+2){
		s[j]=i;
		j++;
	}
	//for(i=2;i<=7;i+2){
	//	s[j]=i;
	//	j++;
	//}
	for(i=1;i<=7;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}