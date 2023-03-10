#include<iostream>
using namespace std;
int main()
// fibonacci series
/*{
int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b<<endl;
for(int i=1;i<=n;i++){
int nextnumber=a+b;
    cout<<nextnumber<<endl;
    a=b;
    b=nextnumber;
}
}*/

// check number is prime or not
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout <<"not prime" <<endl;
            break;
        }
        else{
            cout<<"prime number"<<endl;
            break;
        }
    }
}
