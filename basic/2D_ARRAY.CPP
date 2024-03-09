#include <iostream>
using namespace std;

int main() {
    int myarr[][3] = { {1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9} };

    int rows = sizeof(myarr) / sizeof(myarr[0]);
    int columns = sizeof(myarr[0]) / sizeof(myarr[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << myarr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
