#include<iostream>
#include<math.h>
using namespace std;
// Decimal to Binary
/*int main(){
int n;
cin >> n;
int ans=0;
int i=0;
while(n!=0){
    int bit =n & 1; 
    ans=(bit * pow(10,i) )+ans;
    n=n>>1;
    i++;
}
cout<<" Answer is "<< ans <<endl;
}*/

// Binary to Decimal
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=(digit*pow(2,i))+ans;
    n=n/10;
    i++;
    }
cout<<"answer is "<<ans<<endl;
}
