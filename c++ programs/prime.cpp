#include<iostream>
using namespace std;
int main(){
int n;
cout<< "check number is prime or not" << endl;
cin>>n;
int i=2;
while(i<n){
    if(n%2==0){
        cout<< "number is not prime"  <<endl;
    }
    else{
        cout<< " number is prime " <<endl;
    }
    i=i+1;
}
}