#include <iostream>
using namespace std;

int main(){
    int r1, c1;
    char ch;

        cout<<"Enter the size of matrix (m x n): ";
        cin>>r1>>ch>>c1;
    
        int matrix[r1][c1];
    
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
            cout << endl;

            int current_row_sum = 0, current_column_sum = 0;
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    current_row_sum += matrix[i][j];
                }
                cout<<"Row "<< i + 1 << " sum = " << current_row_sum << endl;
                current_row_sum = 0;
            }

            cout<<endl;

            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    current_column_sum += matrix[j][i];
                }
                cout<<"Column "<< i + 1 << " sum = " << current_column_sum << endl;
                current_column_sum = 0;
            }

    return 0;
}