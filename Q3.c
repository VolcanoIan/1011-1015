/* Reverse Triangle */

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n - 1; i++) {
        for(int j = 1; j <= n - i - 1; j++) {
            printf("%s", " "); 
        }
        for(int k = 0; k <= i ; k++) {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    
    return 0;
}