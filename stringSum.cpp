#include<iostream>
using namespace std;
int main(){
    string s="PRA12GA782d45601$3";
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=49 && s[i]<=58){
            sum+=s[i]-'0';
        }
    }
    cout<<sum<<endl;
}