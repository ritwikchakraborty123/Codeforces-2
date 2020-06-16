#include<iostream>
using namespace std;
int main(){
	string s;
	int n,i,cnt=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		if(s=="Tetrahedron"){
			cnt+=4;
		}
		else if(s=="Cube"){
			cnt+=6;
		}
		else if(s=="Octahedron" ){
			cnt+=8;
		}
		else if(s=="Dodecahedron"){
			cnt+=12;
		}
		else if(s=="Icosahedron"){
			cnt+=20;
		}
	}
	cout<<cnt<<endl;
	return 0;
}