#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
void merge(int a[], int low, int mid, int high)
    {

    int i = low, j = mid + 1, k = low;
    int b[MAX];
    while (i <= mid && j <= high)
        {
        if (a[i] < a[j])
            {
            b[k] = a[i];
            i++;
            k++;
            }
        else
            {
            b[k] = a[j];
            j++;
            k++;
            }
        }
    while (i <= mid)
        {
        b[k] = a[i];
        i++;
        k++;
        }
    while (j <= high)
        {
        b[k] = a[j];
        j++;
        k++;
        }
    for (i = low;i <= high;i++)
        {
        a[i] = b[i];
        }
    }
void merge_sort(int a[], int low, int high)
    {
    int mid;
    if (low < high)
        {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
        }
    }
int main()
    {
    int a[MAX], n, i;
    clock_t start, end;
    double total;
    printf("Enter the number of elements");
    scanf("%d", &n);

    printf("Enter the elements`n");
    for (i = 0;i < n;i++)
        {
        scanf("%d", &a[i]);
        }
    start = clock();
    merge_sort(a, 0, n - 1);
    end = clock();
    total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sorted array is");
    for (i = 0;i < n;i++) {
        printf("%d ", a[i]);
        }
    printf("");
    printf("Time taken is %f", total);
    return 0;
    }
