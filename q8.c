/* 
You are given an array A of size N and an element X.
Your task is to find whether the array A contains the element X or not.
*/

#include <stdio.h>

int main() {
    int A[50], N, X, i, found = 0;

    printf("Enter size: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("Enter X: ");
    scanf("%d", &X);

    for(i = 0; i < N; i++)
        if(A[i] == X) { found = 1; break; }

    if(found) printf("Element Found\n");
    else printf("Element Not Found\n");

    return 0;
}
