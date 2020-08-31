#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[101],s2[101],s3[101];
    int len1,len2,i,cnt=0;
    cin>>s1>>s2>>s3;
    strcat(s1,s2);
    len1=strlen(s1);
    len2=strlen(s3);
    sort(s1,s1+len1);
    sort(s3,s3+len2);
    if(len1!=len2){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(i=0;i<len1;i++){
            if(s1[i]==s3[i]){
                cnt++;
            }
        }
    }
    if(cnt==len1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
