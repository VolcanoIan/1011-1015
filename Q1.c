#include <stdio.h>
#include <float.h>

int main(void) {
    float num[10], Max, Min;
    int i = 1;
    Max = num[0];
    Min = num[0];

    for( ;i <= 10; i++) {
        scanf("%f", &num[i]);
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