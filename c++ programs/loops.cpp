#include<iostream>
using namespace std;
/*  print 1 to N numbers by while loop
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;
int i=1;
while(i<=n){
    cout<< i <<endl;
    i++;
}
*/

int main(){
int n;
cout << " Enter the value of n:"<<endl;
cin>>n;
int sum=0;
int i=1;
while(i<=n){
    sum = sum+i;
     i=i+1;
}
    cout<< "value of sum is:"<< sum <<endl;
}





