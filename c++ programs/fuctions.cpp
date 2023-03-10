#include<iostream>
#include<math.h>
using namespace std;
// first method of fuction
/*int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b); // calling a fuction
    cout<<"Answer is "<<answer<<endl;
    return 0;
}*/

// second shortcut to calling fuction if change of name of fuction parameter
/*int power(int num1,int num2){ 
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}

int main(){
     int a,b;
    cin>>a>>b;
    int answer=power(a,b);// calling a fuction
    cout<<"Answer is "<<answer<<endl;
    return 0;
}*/

// 1->even
// 0->odd

// fuction make check number is even or odd
/*bool isEven(int num){
    if(num&1){
        return 0;//odd
    }
    else{
        return 1;//even
    }
}

int main(){
    int num;
    cin>>num;
    bool ans = isEven(num);
    cout<<"Answer is "<<ans<<endl;
}*/


// fuction for Ncr
/*int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

    int nCr(int n,int r){
        int num = factorial(n);
        int denom = factorial(r) * factorial(n-r);
        return num/denom;
    }

int main(){
    int n,r;
    cout<<"Enter the value of n"<<endl;
      cin>>n;
     cout<<"Enter the value of r"<<endl;
       cin>>r;
    int ans=nCr(n,r);
    cout<<"Answer is: "<<ans<<endl;

}*/


//check number is prime or not

int prime(int n){
    int i=2;
    for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Number is not prime "<<endl;
        break;
    }
    else{
        cout<<"Number is prime "<<endl;
        break;
    }
}
}

int main(){
    int n;
    cout<<"Enter is value of n: "<<endl;
    cin>>n;
    prime(n);
}