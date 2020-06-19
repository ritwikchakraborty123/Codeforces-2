#include<bits/stdc++.h>
using namespace std;
int main(){
	int len,cnt=0,i;
	char s[1001];
	gets(s);
	len=strlen(s);
	sort(s,s+len);
	for(i=0;i<len-1;i++){
		if(s[i]>=97 && s[i]<=122){
			cnt++;
			if(s[i]==s[i+1]){
				cnt--;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}