#include <iostream>
using namespace std;

int main(){
    int r1, c1;
    char ch;

        cout<<"Enter the size of matrix (m x n): ";
        cin>>r1>>ch>>c1;
    
        int matrix[r1][c1], transpose[c1][r1];
    
            cout<<"--INPUT MATRIX---"<<endl;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    cout << "Enter element at index [" << i << ", " << j << "]: ";
                    cin >> matrix[i][j];
                }
            }

            cout<<"\n--MATRIX---"<<endl;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }

            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    transpose[j][i] = matrix[i][j];
                }
            }
            cout<<"\n--TRANSPOSED MATRIX---"<<endl;
            for(int i = 0; i < c1; i++){
                for(int j = 0; j < r1; j++){
                    cout<< transpose[i][j] << " ";
                }
                cout << endl;
            }

    return 0;
}