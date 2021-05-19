#include <stdio.h>
#include <stdlib.h>

void isPrime(int n)
{
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0){
                printf("number is not prime");
            } else {
        printf("number is prime");
    }
        break;
        }
    }
}

int main()
 {
    int n;

    printf("Input a number: ");
    scanf("%d", &n);
    isPrime(n);

     return 0;
}
