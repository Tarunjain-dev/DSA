#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    reverse(arr, start, end);
    
    cout<<"Reversed array:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}