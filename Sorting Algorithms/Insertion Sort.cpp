#include<bits/stdc++.h>

void insertion_sort(int A[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++){
        item = A[i];

        j = i-1;

        while(j >= 0 && A[j] > item){
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = item;


        printf("Step %d: ", i);
        for(int j=0; j<n; j++){
            printf("%d ",A[j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[] = {5, 2, 3, 1, 4};
    int n = 5;

    printf("Before Insertion Sort: ");
    for(int j=0; j<n; j++){
        printf("%d ",A[j]);
    }
    printf("\n\n");

    insertion_sort(A, n);

    printf("\nAfter Insertion Sort: ");
    for(int j=0; j<n; j++){
        printf("%d ",A[j]);
    }

}


