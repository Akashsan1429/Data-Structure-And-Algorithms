// You are using GCC
#include<iostream>
using namespace std;
int gcd(int n,int m){
    if(m==0)
    return n;
    else
    return gcd(m,n%m);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<"G.C.D of "<<n<<" and "<<m<<" is "<<gcd(n,m);
}39