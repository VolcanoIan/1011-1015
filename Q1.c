#include <stdio.h>
#include <float.h>

int main(void) {
    float num[10];

    for(int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }
    float Max = num[0], Min = num[0];
    
    for(int i = 1; i < 10; i++) {
        if(num[i] > Max) {
            Max = num[i];
        }
        else if(num[i] < Min) {
            Min = num[i];
        }
    }
    printf("%s%.2f\n", "max: ", Max);
    printf("%s%.2f\n", "min: ", Min);

    return 0;        
}