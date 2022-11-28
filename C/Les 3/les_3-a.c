#include <stdio.h>

void maxArrays(float *ptr_array_1, float *ptr_array_2, float *ptr_array_3) {
    int x;
    for (x = 0; x <= 3; x++) {
        if (ptr_array_1[x] > ptr_array_2[x]) {
            ptr_array_3[x] = ptr_array_1[x];
        }
        else {
            ptr_array_3[x] = ptr_array_2[x];
        }
     
}}

int main(void) {
    float array_1[4] = {0.7, 3.3, 0.5, 10.3};
    float array_2[4] = {4.1, 1.5, 0.5, 2.3};
    float array_3[4];
    int loop;
    printf("Array 1: \n");
    for(loop = 0; loop < 4; loop++) {
        printf("%f ", array_1[loop]);
    }
    printf("\nArray 2: ");    
    printf("\n");
    for(loop = 0; loop < 4; loop++) {
        printf("%f ", array_2[loop]);
    }

    maxArrays(array_1, array_2, array_3);
    printf("\nDe hoogste waardes zijn: \n");
    for(loop = 0; loop < 4; loop++) {
        printf("%f ", array_3[loop]);
    }
    return 0;
}

