#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Size of array: ";
    cin >> size;
    int array[size], reverse[size];

    for(int i = 0; i < size; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Array created successfully!\n";

    for(int i = 0; i < size; i++){
        reverse[i] = array[size - i - 1];
    }

    cout<<"Reversed array: ";
    for(int i = 0; i < size; i++){
        cout << reverse[i] << " ";
    }

    return 0;
}