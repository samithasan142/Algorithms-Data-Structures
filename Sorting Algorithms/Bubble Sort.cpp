#include<bits/stdc++.h>

void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i=0; i < n; i++){
        for(j=0; j < n-i-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }

            printf("Step %d: ", i+1);
            for(int j=0; j<n; j++){
                printf("%d ",A[j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int A[] = {8, 2, 4, 1, 5};
    int n = 5;

    printf("Before Bubble Sort: ");
    for(int j=0; j<n; j++){
        printf("%d ",A[j]);
    }
    printf("\n\n");

    bubble_sort(A, n);

    printf("\nAfter Bubble Sort: ");
    for(int j=0; j<n; j++){
        printf("%d ",A[j]);
    }

}

