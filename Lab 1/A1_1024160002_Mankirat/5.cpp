#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3, COLS = 3;
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum:" << endl;
    for (int i = 0; i < ROWS; i++){
        int rowSum = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    cout << "\nSum of each column:" << endl;
    for (int j = 0; j < COLS; j++){
        int colSum = 0;
        for (int i = 0; i < ROWS; i++){
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
