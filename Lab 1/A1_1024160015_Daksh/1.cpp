#include <iostream>
using namespace std;

int main(){
    int action;
    int size = 0;
    int array[100];
    bool created = false;

    while (true){
        cout<<"------MENU-----"<<endl;
        cout<<"1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n> ";
        cin>>action;
    
        if (action == 1){
            cout<<"Size of array: ";
            cin>>size;
            for(int i = 0; i < size; i++){
                cout<<"Enter element "<< i+1 << ": ";
                cin>>array[i];
            }
            cout<<"Array created successfully!\n";
            created = true;
        }
        else if (action == 2){
            if(!created){
                cout<<"Please create the array first!";
                continue;
            }
            for(int i = 0; i < size; i++){
                cout<<array[i]<<" ";
            }
            cout<<"\n";
        }
        else if (action == 3){
            if(!created){
                cout<<"Please create the array first!";
                continue;
            }
            
            int newIndex, newElement;
            while (true){
                cout<<"Enter the index for the new element: ";
                cin>>newIndex;
                cout<<"Enter the new element: ";
                cin>>newElement;
                if (newIndex < 0 || newIndex > size) {
                    cout << "Invalid index!";
                    continue;
                }
                else {
                    break;
                }
            }
            size++;
            for(int i = size - 1; i > newIndex; i--){
                array[i] = array[i - 1];
            }
            array[newIndex] = newElement;
            cout<<"Element inserted successfully!";      
        }
        else if (action == 4){
            if(!created){
                cout<<"Please create the array first!";
                continue;
            }
            int deleteIndex;
            while (true){
                cout<<"Enter the index for the element to be deleted: ";
                cin>>deleteIndex;
                if (deleteIndex < 0 || deleteIndex >= size) {
                    cout << "Invalid index!";
                    continue;
                }
                else {
                    break;
                }
            }
            for(int i = deleteIndex; i < size - 1; i++){
                array[i] = array[i + 1];
            }
            size--;
            cout<<"Element deleted successfully!"<<endl;      
        }
        else if (action == 5){
            if(!created){
                cout<<"Please create the array first!";
                continue;
            }
            int searchElement;
            cout<<"Enter the element to be searched: ";
            cin>>searchElement;
            bool found = false;
            for(int i = 0; i < size; i++){
                if(array[i] == searchElement){
                    cout<<"Required element found at index "<< i;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout<<"Element not found!";
            }
        }
        else if (action == 6){
            cout<<"Exited successfully.";
            break;
        }
        else{
            cout<<"Invalid Input! Please try again.";
            continue;
        }
    } 

    return 0;
}