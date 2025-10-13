/*Q60: Count positive, negative, and zero elements in an array.


*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int array[n];
    int count_positive=0;
    int count_negative=0;
    int count_zero=0;

    for (int i=0 ; i<n ; i++) {
        scanf("%d",&array[i]);
        if (array[i] > 0) {
            count_positive++;
        } else if (array[i] < 0) {
            count_negative++;
        } else {
            count_zero++;
        }
    } printf("Positive=%d, Negative=%d, Zero=%d",count_positive,count_negative,count_zero);
    return 0;
}