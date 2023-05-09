#include<bits/stdc++.h>
void mergee(int A[], int left, int mid, int right);

void merge_sort(int A[], int left, int right)
{
    if(left >= right){
        /// left = right means array contain one element.
        /// left > right means array contain zero element.
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort(A, left, mid);
    merge_sort(A, mid+1, right);

    mergee(A, left, mid, right);
}

void mergee(int A[], int left, int mid, int right)
{
    int i;
    int index_a, index_l, index_r;
    int size_left, size_right;

    size_left = mid - left + 1;
    size_right = right - mid;

    int L[size_left], R[size_right];

    /// copy the element from A[left] to A[mid] into array L
    for(i=0; i<size_left; i++){
        L[i] = A[left + i];
    }

    /// copy the element from A[mid+1] to A[right] into array R
    for(i=0; i<size_right; i++){
        R[i] = A[mid + 1 + i];
    }

    index_l = 0;
    index_r = 0;

    for(index_a = left; index_l < size_left && index_r < size_right; index_a++){

        if(L[index_l] < R[index_r]){
            A[index_a] = L[index_l];
            index_l += 1;

        }else{
            A[index_a] = R[index_r];
            index_r += 1;
        }
    }

    /// copied the remaining element of array L into array A
    while(index_l < size_left){
        A[index_a] = L[index_l];
        index_l += 1;
        index_a += 1;
    }

    /// copied the remaining element of array R into array A
    while(index_r < size_right){
        A[index_a] = R[index_r];
        index_r += 1;
        index_a += 1;
    }
}

int main()
{
    int i, n = 8;
    int A[] = {1, 5, 6, 3, 5, 8, 7, 2, 9};

    printf("Before Merge Sort: ");
    for(i=0; i<=n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    merge_sort(A, 0, n);

    printf("After Merge Sort: ");
    for(i=0; i<=n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
