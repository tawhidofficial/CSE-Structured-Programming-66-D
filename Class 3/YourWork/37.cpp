# include <iostream>
using namespace std;

int main () {

char str[50];
cin >> str;

int length =0;

while (str[length] != '\0'){
    length++;
}
cout << "String Length = " << length << '\n';

    return 0;
}