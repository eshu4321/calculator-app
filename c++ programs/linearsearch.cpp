#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
   int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
     cout<<"Enter the element to be Search: "<<endl;
     int key;
     cin>>key;

     bool found=linearSearch(arr,n,key);

     if(found){
        cout<<"Key is present"<<endl;
     }
     else{
        cout<<"key is not Present"<<endl;
     }
}