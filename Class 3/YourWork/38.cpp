# include <iostream>
using namespace std;

int main () {

char str[50];
int count = 0, i = 0;
cin >> str;

while (str[i] != '\0') {
if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
    
    count++;
    }

    i++;
    }

cout << "Number of vowels = " << count;


    return 0;
}