#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);

    //odd or even
    int sum = a + b;
    if (sum % 2 == 0)
        printf("sum is even\n");
    else
        printf("sum is odd\n");
//sub is positive,zero or negetive
    if (a - b > 0)
        printf("Sub is positive\n");
    else if (a - b == 0)
        printf("sub is zero\n");
    else
        printf("sub is negetive\n");
// compare
    if (a < b)
        printf("First is less than second\n");
    else if (a == b)
        printf("First is equal to second\n");
    else
        printf("First is greater than second\n");

    return 0;
}
