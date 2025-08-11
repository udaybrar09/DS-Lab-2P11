#include<iostream>
using namespace std;

const int MAX = 100;

void create(int arr[], int n);
void display(int arr[], int n);
void insert(int arr[], int &n);
void delete_arr(int arr[], int &n);
bool linear_search(int arr[], int n);

int main(){
  
  cout << "INITIALIZATION: " << endl;
  cout << "Number of elements: ";
  int n;
  cin >> n;
  int arr[MAX];

  while(1){
  cout << "MENU\n1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT" << endl;
  cout << "Enter Choice: ";
  int choice;
  cin >> choice;
  
  switch(choice){
    case 1:
    create(arr, n);
    break;
    case 2:
    display(arr, n);
    break;
    case 3:
    insert(arr, n);
    break;
    case 4:
    delete_arr(arr, n);
    break;
    case 5:
    linear_search(arr,n);
    break;
    case 6:
    exit(0);
    default:
    cout << "ENTER A VALID ARGUMENT" << endl;
    }
  } 

}

void create(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << "Element " << i+1 << "= ";
    cin >> arr[i];
  }
}

void display(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << endl;
  }
}

void insert(int arr[], int &n){
  n++;
  int element;
  int position;

  cout << "Element: ";
  cin >> element;
  cout << "Position: ";
  cin >> position;
  
  for(int i = n; i > position-1; i--) {
    arr[i] = arr[i-1];
}

  arr[position - 1] = element;
}

void delete_arr(int arr[], int &n){
  int position;
  cout << "Position: ";
  cin >> position;

  for(int i = position-1 ; i < n ; i++){
    arr[i] = arr[i+1];
  }
  n--;

}

bool linear_search(int arr[], int n){
  int x;
  cout << "Number: ";
  cin >> x;
  for(int i = 0 ; i < n ; i++){
    if(arr[i] == x) return true;
  }
  return false;
}

