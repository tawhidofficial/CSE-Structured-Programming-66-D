# include <iostream>
using namespace std;

int main () {

int n, arr[100], target, found = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            cout << "Found at index " << i << '\n';
            break;
        }
    }

    if (found == 0) {
        cout << "Not found" << '\n';
    }
    return 0;
}