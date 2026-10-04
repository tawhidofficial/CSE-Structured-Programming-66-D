# include <iostream>
using namespace std;

int main () {

int size, matrix[10][10], sum = 0;
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    cout << "Diagonal sum = " << sum << '\n';

    return 0;
}