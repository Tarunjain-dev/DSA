#include<iostream>
using namespace std;

int main(){
  int arr[] = {10,20,30,40,50};
  int key = 30;
  int size = sizeof(arr)/sizeof(arr[0]);
  bool found = false;
  
  for(int i=0; i<size; i++){
    if(arr[i] == key){
      found = true;     
      break;
    }
  }
  
  found ? cout<< "Target Found."<<endl : cout<< "Not Found" << endl;
  return 0;
}
