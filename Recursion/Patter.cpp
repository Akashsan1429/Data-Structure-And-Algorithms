// You are using GCC
#include<iostream>
using namespace std;
void mm(int n,int c){
    if(n==c)
    return;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<'*';
        }
        cout<<endl;
    }
        c++;
    cout<<endl;
    mm(n,c);
    
}
int main(){
    int n;
    cin>>n;
    mm(n,0);
}