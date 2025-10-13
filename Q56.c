/*Q56: Read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    } printf("Output:\n");
    for (int j=0 ; j<size ; j++) {
        printf("%d ",array[j]);
    }
    return 0;
}