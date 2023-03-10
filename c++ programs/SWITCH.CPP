#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of case:"<<endl;
    cin>>num;
    switch (num){
        case 1:cout<<"first"<<endl;
               break;

        case 2:cout<<"second"<<endl;  
            break;

        case 3:cout<<"Thrid"<<endl;  
            break;

        case 4:cout<<"fourth"<<endl;  
            break;       

        default :cout<<"invalid data"<<endl;       
    }
    
}