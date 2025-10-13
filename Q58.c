/*Q58: Find the maximum and minimum element in an array.

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int array[size];
    printf("Enter elements: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
    }
    
    int Max=array[0],Min=array[0];
    for (int j=0 ; j<size ; j++) {
        if (array[j] > Max) {
            Max=array[j];
        } if (array[j] < Min) {
            Min=array[j];
        }
    } 
    printf("Max=%d, Min=%d",Max,Min);
    return 0;
}