#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 1000


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int arr[MAX_SIZE];
    int i, n, sum=0;

    /* Input size of the array */
    //printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input elements in array */
   // printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {   // printf("", n);
        scanf("%d", &arr[i]);
    }

    /*
     * Add each array element to sum
     */
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("%d", sum);


    return 0;
}