#include<iostream>
using namespace std;

void swap(int& a,int& b);
void reverse(int arr[], int& size);
void multiply(int arrResult[3][3], int arr1[3][3], int arr2[3][3]);
void transpose(int arr[3][3]);

int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(1);
  reverse(arr, size);
  for(int i = 0 ; i < size ; i++){
    cout << arr[i] << endl;
  }
}

void swap(int& a,int& b){
  int temp = b;
  b = a;
  a = temp;
}

void reverse(int arr[], int& size){
  for(int i = 0 ; i < size/2 ; i++){
    swap(arr[i], arr[size-i-1]);
  }
}

void transpose(int arr[3][3]){
  for(int i = 0 ; i < 3 ; i++){
    for(int j = i+1 ; j < 3 ; j++){
      swap(arr[i][j], arr[j][i]);
    }
  }
}

void multiply(int arrResult[3][3], int arr1[3][3], int arr2[3][3]){

for (int i = 0; i < 3; i++){
  for (int j = 0; j < 3; j++){
    arrResult[i][j] = 0;
    for (int k = 0; k < 3; k++){
       arrResult[i][j] += arr1[i][k] * arr2[k][j];
    }
  }
}


}