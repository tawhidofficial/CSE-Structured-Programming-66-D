#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

// if a ig greater and equal to b and c then a is greater
    if (a >= b && a >= c)
    {
        printf("%d is the largest number\n",a);
    }
    // if b ig greater and equal to b and c then b is greater
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number\n",b);
    }
    else
    {
        printf("%d is the largest number\n",c);
    }
    
    return 0;
}
