/* Binary Search */

#include<bits/stdc++.h>

int bin_search(int A[], int n, int target)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left <= right){
        mid = (left + right) / 2;

        if(A[mid] == target){
            return mid;
        }
        else if(A[mid] < target){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return -1;
}

int main()
{
    int A[] = {1, 4, 6, 7, 10, 19, 22, 23, 30, 35, 39, 46};
    int target = 22;
    int result = bin_search(A, 12, target);
    printf("%d", result);
    return 0;
}
