//Kumbham Nuthan Manideep
//2012103

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int n, int a[]) {
  int key, j;
  for (int i = 1; i < n; i++)
  {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key)
    {
        a[j + 1] = a[j];
        j = j - 1;
    }
    a[j + 1] = key;
  }
}

int main() {

  int N;
  printf("Enter size of array: ");
  scanf("%d", &N);

   int arr[N];
    for(int i = 0; i<N; i++){
      arr[i] = i;
    }
    clock_t start, end;
    start = clock();
    insertionSort(N, arr);
    end = clock();
    printf("Total time taken by insertion sort for Best Case is : %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);

    for (int i = 0; i < N; i++) {
             int x = rand() % N + 1;
            arr[i] = x;
    }
     start = clock();
     insertionSort(N, arr);
     end = clock();
    printf("Total time taken by insertion sort for Average Case is : %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
    for(int i = 0; i<N; i++){
      arr[i] = N-i-1;

    }
     start = clock();
    insertionSort(n, arr);
     end = clock();
    printf("Total time taken by insertion sort for Worst Case is : %f\n\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
  return 0;
}
