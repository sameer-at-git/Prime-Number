#include<iostream>
using namespace std;

bool isPrime(int n){
bool flag=true;
for(int i=2;i<n;i++){
    if(n%i==0){
        flag=false;
        break;
    } }
return flag;
}
int main(){
    int n;
    cout<<"Enter a value:"<<endl;
    cin>>n;
    if(isPrime(n)==0)
    {
        cout<<"Not Prime"<<endl;
    }
    else{cout<<"Prime"
    <<endl;}


return 0;
}

