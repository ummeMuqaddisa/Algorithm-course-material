
#include<iostream>
#include <cmath>
using namespace std;
string cut(string m,int s,int e){
string r="";
for(int i=s;i<e;i++){
    r=r+m[i];
}
return r;
}

int hashValue(string h){
int r=0;
for(int i=0;i<h.length();i++){
    r=r+((h[i]-26)*pow(26,i));
}
return (r%13);
}
int main(){
string s="The quick brown fox jumps over the lazy dog";
string p="fox";

int hp=hashValue(p);
for(int i=0;i<s.length();i++){
    string temp=cut(s,i,i+p.length());
    if(hashValue(temp)==hp && temp==p){
        cout<<"found at: "<<i<<endl;
    }
}


}
