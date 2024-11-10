// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void swap(char &a,char &b){
    int temp=a;
    a=b;
    b=temp;
}
void mm(string & str,int l,int r){
    if(l==r)
    cout<<str<<endl;
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        mm(str,l+1,r);
        swap(str[l],str[i]);
    }
}
int main(){
    string n;
    cin>>n;
    int a=n.length();
    mm(n,0,a-1);
}