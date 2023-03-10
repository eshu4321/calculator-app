#include<iostream>
using namespace std;

// Arimetic progession 
/*int arithmeticprogression(int n){
    int ans=3*n+7;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
   int answer = arithmeticprogression(n);
    cout<<"the Nth term of ap: "<<answer<<endl;
    
}*/

// find the total number of bits in a&b

/*int bitConverter(int n){
    int i = 0;
    int ans = 0;
    while(n!=0){
        int bit = n&1;
        ans =ans +bit*pow(10,i) ;
        n = n>>1;
        i = i+1;
    }
    return ans ;
}

int BitCounter(int n){
    int num = bitConverter(n);
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        if(digit==1){
            ans = ans + digit;
            
        }
        num=num/10;
    }
    return ans;
    
  
    return num;
}

int main(){
    int a,b;
    cout<<"Enter the Value of A and B"<<endl;
    cin>>a;
    cin>>b;
    

    int answer = BitCounter(a) + BitCounter(b);
    cout<<answer;
}*/


// fibonnaci series

void fibonnaciSeries(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int next_number = a + b;
        cout<<next_number<<" ";

        a = b;
        b = next_number; 

    }
    return;
    
}
int main(){
    int n ;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;

    fibonnaciSeries(n);
    
}

