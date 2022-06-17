#include "BinSearch.h"
#include <stdio.h>
#include <stdlib.h>

#define ARR_MAX 10

int main() {
    int n, r, val;
    printf("***BINARY SEARCH***\n");
    printf("Input number of elements: \n");
    scanf("%d", &n);
    while(n > ARR_MAX) {
        printf("Invalid number of elements, please try again: \n");
        scanf("%d", &n);
    }

    printf("Enter elements you want in the array. \n");
    for(int i = 0; i < n; i++) {
        printf("Enter element %d:\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: \n");
    scanf("%d", &val);

    r = binary_search(arr, n, val);
    if(r == -1) {
        printf("Value not found.\n");
    }
    else {
        printf("%d found at %d.\n", val, r+1);
    }

    return 0;
}

int binary_search(int arr[], int n, int val) {
    int start = 0, end = n - 1, mid;
    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == val) {
            return mid;
        }
        else if(arr[mid] < val) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}