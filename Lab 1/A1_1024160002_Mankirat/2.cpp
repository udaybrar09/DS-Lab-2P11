#include<iostream>
using namespace std;

void duplicate(int arr[], int& size);
void del_element(int arr[], int index, int& size);

int main(){
  int arr[] = {1,4,5,3,5,3,5,2,1,5,6,6,3,2,1,5,6,3,1,5,7,6,2,1,2};
  int size = sizeof(arr)/sizeof(1);
  duplicate(arr, size);
  for(int i = 0 ; i < size ; i++){
    cout << arr[i] << endl;
  }
}

void del_element(int arr[], int index, int& size){ 
  for(int i = index ; i < size ; i++){
    arr[i] = arr[i+1];
  }
  size--;
}
void duplicate(int arr[], int& size){
  for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
      if(arr[i] == arr[j]){
        del_element(arr, j, size);
      }
    }
  }
}