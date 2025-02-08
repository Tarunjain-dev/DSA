#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Origional Array : "<<endl;
    printArray(arr, size);
    cout<<"Reversed Array : "<<endl;
    reverse(arr, size);
    printArray(arr, size);
    
    return 0;
}
