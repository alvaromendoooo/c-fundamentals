#include <stdio.h>

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
    char input[100];

    scanf("%s", input);
    
    int iterator = 0;
    int length = 0;

    while (input[iterator] != '\0') {
        iterator ++;
        length ++;
    }
    
    printf("%d", length);

    return 0;
}
