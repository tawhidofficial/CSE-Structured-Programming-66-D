# include <iostream>
using namespace std;

int main () {

int arr[100],n,max;

cin >> n;

for (int i= 0;i<n;i++)
{
    cin >> arr[i];

    max = arr[0];

    for (int i=1;i<n;i++){

        if (arr[i] > max){
            max = arr[i];
        }
    }
    
}
cout << "maximum = " << max;
    return 0;
}