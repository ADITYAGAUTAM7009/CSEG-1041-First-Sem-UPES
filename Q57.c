/*Q57: Find the sum of array elements.
*/

#include <stdio.h>

int main() {
     int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int array[size];
    int Sum=0;
    printf("Enter elements: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
        Sum = Sum + array[i];
    }
    printf("Sum = %d",Sum);
    return 0;
}