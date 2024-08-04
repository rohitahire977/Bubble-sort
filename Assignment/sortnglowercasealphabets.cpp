#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "aljsohdjnxjxk";
    cout<<s;
    cout<<endl;
    for(int i=0;i<s.size()-1;i++){
        bool flag=true;
        for(int j=0;j<s.size()-1-i;j++){
            sort(s.begin(),s.end());
            flag=false;
        }
        if(flag==true) break;
    }
    //reverse(str.begin(),str.end());
    cout<<s;
}