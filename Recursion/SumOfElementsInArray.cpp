// You are using GCC
#include<iostream>
using namespace std;
int sum(int a[],int n){
    if(n==0)
    return 0;
    return a[n-1]+sum(a,n-1);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"The sum of the elements in the array is "<<sum(a,n);
}4