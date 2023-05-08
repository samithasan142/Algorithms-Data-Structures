#include<bits/stdc++.h>

void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;

    for(i=0; i < n-1; i++){
        index_min = i;

        for(j=i+1; j<n; j++){
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }

        if(index_min != i){
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }

        printf("Step %d: ", i+1);
        for(int i=0; i<n; i++){
            printf("%d ",A[i]);
        }
        printf("\n");
    }
}

int main()
{
    int A[] = {10, 5, 2, 8, 7};
    int n = 5;

    printf("Before Selection Sort: ");
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n\n");

    selection_sort(A, n);

    printf("\nAfter Selection Sort: ");
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }

}
