#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
        while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
    }

    void printArray(int arr[],int n){
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int num[10];
    for(int i=0;i<=n;i++){
        cin>>num[i];
    }
cout<<"Reverse array is: "<<endl;
     reverse(num,n);
     
    printArray(num,n);
    return 0;
}