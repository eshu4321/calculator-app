#include<iostream>
using namespace std;
void Printarray(int arr[],int size){
cout<<"Printing the array"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
cout<<"Printing Done"<<endl;
}
int main(){
    int arr[15];  // Declared of array
    //cout<<"value at 5 index:"<<arr[5]<<endl;  // acessing of array
   // cout<<"value  at 20 index:"<<arr[20]<<endl; // never access more the size of array

   // int second[5]={4,5,6,8,1};
   // cout<<"value at  1 index: "<<second[1]<<endl;


   // int third[10]={2,7};
   // Printarray(third,10); // calling the fuction


   // int fourth[10]={0};
   //  Printarray(fourth,10);

     
   // int fifth[15]={1};
   //  Printarray(fifth,15);


   // character array
   char ch[5]={'a','r','s','t','k'};
   int n=5;
   cout<<"Printing the character array"<<endl;
for(int i=0;i<n;i++){
    cout<<ch[i]<<endl;

}
}