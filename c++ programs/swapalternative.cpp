#include<iostream>
using namespace std;
void swapAlternative(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
         swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[],int n){
    for(int i =0;i<=n;i++){
        cout<<arr[i];
    }
}


int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[100];
    for(int i=0;i<=n;i++){
    cin>>arr[i];
    }
cout<<"swapAlternative array is "<<endl;
     swapAlternative(arr,n);
    printarray(arr,n);
}