// You are using GCC
#include<iostream>
using namespace std;
int check(int n,int m){
    if(n==1 || m==1)
    return 1;
    
        int down=(check(n-1,m));
        int right=(check(n,m-1));
        return down+right;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<check(n,m);
}