// You are using GCC
#include<iostream>
using namespace std;
int count(int n){
    if(n==0)
    return 0;
    else{
        return 1+count(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"The number of digits in "<<n<<" is "<<count(n);
}223