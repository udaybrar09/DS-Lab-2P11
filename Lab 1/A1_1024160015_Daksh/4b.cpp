#include <iostream>
using namespace std;

int main(){
    int r1, c1, r2, c2;
    char ch;

    while (true){
        cout<<"Enter the size of matrix 1 (m x n): ";
        cin>>r1>>ch>>c1;
        cout<<"Enter the size of matrix 2 (m x n): ";
        cin>>r2>>ch>>c2;
    
        int matrix1[r1][c1], matrix2[r2][c2];
    
        if (c1 == r2){
            cout<<"--MATRIX 1---"<<endl;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    cout << "Enter element at index [" << i << ", " << j << "]: ";
                    cin >> matrix1[i][j];
                }
            }
            cout<<"--MATRIX 2---"<<endl;
            for(int i = 0; i < r2; i++){
                for(int j = 0; j < c2; j++){
                    cout << "Enter element at index [" << i << ", " << j << "]: ";
                    cin >> matrix2[i][j];
                }
            }
        
            cout<<"--MATRIX 1---"<<endl;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    cout << matrix1[i][j] << " ";
                }
                cout << "\n";
            }
        
            cout<<"--MATRIX 2---"<<endl;
            for(int i = 0; i < r2; i++){
                for(int j = 0; j < c2; j++){
                    cout << matrix2[i][j] << " ";
                }
                cout << "\n";
            }

            int product[r1][c2];
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    product[i][j] = 0;
                }
            }
            
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c2; j++){
                    for(int k = 0; k < r2; k++){
                        product[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            cout<<"---PRODUCT MATRIX---"<<endl;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c2; j++){
                    cout<<product[i][j]<<" ";
                }
                cout << endl;
            }
            break;
        }
        else {
            cout<<"Matrices with the given dimensions cannot be multiplied.";
        }
    }
    
    return 0;
}