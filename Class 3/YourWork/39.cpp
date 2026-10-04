# include <iostream>
using namespace std;

int main () {

char str[50];
int length = 0, isPalindrome = 1;
cin >> str;

while (str[length] != '\0') {
    length++;
}

for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - 1 - i]) {
        isPalindrome = 0;
        break;
     }
}

if (isPalindrome == 1) {
    cout << "Palindrome" << '\n';
} else {
    cout << "Not a Palindrome" << '\n';
}


return 0;
}