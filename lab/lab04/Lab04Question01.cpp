
#include<iostream>
using namespace std;

int main(){
string s="The quick brown fox jumps over the lazy dog ";
string p="fox";

for(int i=0;i<s.length();i++){
    int a=0;
    for(int j=0;j<p.length();j++){
        if(s[i+j]==p[j]){
           a++;
        }


    }
    if(a==p.length()){
        cout<<"pattern found in: "<<i<<endl;
    }
}
}

