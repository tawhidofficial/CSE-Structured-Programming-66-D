# include <iostream>
using namespace std;

int main () {

int n, arr[100];
    int max = 0, secondMax = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


     for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    cout << "Second Largest = " << secondMax;


    return 0;
}