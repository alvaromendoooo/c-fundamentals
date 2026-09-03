#include <stdio.h>

int square(int n);

int main(void) {
    // Test 01
    //printf("Hello, C!\n");
    
    // Test 02
    /*int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);*/
    
    // Test 03
    /*int w, h;
    
    scanf("%d %d", &w, &h);
    printf("%d\n", w * h);*/

    // Test 04
    /*int n = 5;
    printft arr[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int best = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > best) {
            best = arr[i];
        }
    }

    printf("%d", best);*/

    // Test 05
    /*char input[100];

    fgets(input, sizeof(input), stdin);
    int iterator = 0;
    int length = 0;

    while (input[iterator] != '\0') {
        // Use case - \n included in string
        if (input[iterator] == '\n') {
            input[iterator] = '\0';
            continue; // Check the while cond before it keeps iterating
        }
        iterator ++;
        length ++;
    }
    
    printf("%d", length);*/

    // Test 06
    /*int number;
    
    scanf("%d", &number);

    if (number % 15 == 0) {
        printf("FizzBuzz");
    } else if (number % 3 == 0) {
        printf("Fizz");
    } else if (number % 5 == 0) {
        printf("Buzz");
    } else {
        printf("%d\n", number);
    }*/

    // Test 07
    /*int n;

    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%d\n", sum);*/

    // Test 08

    int n;
    scanf("%d", &n);

    printf("%d\n", square(n));

    return 0;
}

int square(int n) {
    return n * n;
}
