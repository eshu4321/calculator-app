 #include<iostream>
using namespace std;
int main(){
    int num,add,sub,mul,div,mod;
    int num1,num2;
    cout<<"Enter the number of case:"<<endl;
    cin>>num;
    cout<<"Enter the value of first number:"<<endl;
    cin>>num1;
    cout<<"Enter the value of second number:"<<endl;
    cin>>num2;
    switch(num){
        
        case 1: add =num1+num2;
               cout<<"Addtiton of two number is "<<add<<endl;
               break;

        case 2: sub =num1-num2;
               cout<<"subtract of two number is "<<sub<<endl;
               break;

        case 3: mul =num1*num2;
               cout<<"Multiply of two number is "<<mul<<endl;
               break; 

        case 4: div =num1/num2;
               cout<<"Divide of two number is "<<div<<endl;
               break;  

        case 5: mod =num1%num2;
               cout<<"module of two number is "<<mod<<endl;
               break; 


        default :cout<<"Invalid case"<<endl;                                        
    }
}