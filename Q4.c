#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf("%s", " "); 
        }
        for(int k = 0; k <= (i - 1) * 2 ; k++) {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    
    return 0;
}