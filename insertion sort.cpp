#include<iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}

int main(){
    int arr[6]={2,10,7,3,8,11};
    int n=6;
    insertion(arr,6);
    cout<<"the sorted array is "<<endl;
    printarray(arr,6);
    //cout<<" ";
    return 0;
}