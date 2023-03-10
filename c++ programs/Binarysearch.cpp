#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int mid=start +(end-start)/2;
  while(start<=end){
    if(arr[mid]==key);{
    return mid;
  }
  if(key>arr[mid]){
    start=mid+1;
  }
  else{
    end=mid-1;
  } 
 int mid = start+ (end-start)/2;
}
return -1;
}

int main(){

   int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int key;
        cout<<"Enter element to be search: "<<endl;
        cin>>key;

        int index = binarySearch(arr,n,key);
        cout<<"index of element is: "<< index <<endl;
        
}
