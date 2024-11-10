// You are using GCC
#include<iostream>
using namespace std;
int mm(int n){
    if(n==1||n==2)
    return n;
    int s=mm(n-1)+mm(n-2);
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<mm(n);
}