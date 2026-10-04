# include <iostream>
using namespace std;

int main () {
int n, arr1[100], arr2[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Array 2: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << '\n';

    return 0;
}