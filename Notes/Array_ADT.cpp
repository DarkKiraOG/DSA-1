#include<stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
}

int main()
{
  struct Array arr;
  int n,i;
  cout<< "Enter the size of array";
  cin>> &arr.size;
  arr.A = new int[size];
  arr.length = 0;

  cout<< "Enter all elements\n";
  for(i=0; i<n; i++)
  {
  cin>> &arr.A[i];
  }
  arr.length = n;
}

// Append

void Append(struct Array *arr, int x){
    if (arr -> length < arr -> size)
        arr -> A[arr -> length++] = x;
}

// Insert 

void Insert(struct Array *arr, int n, int x){
    if (arr -> length < arr -> size)
        int holder;
        for (int i = n; i < A -> size; i++)
            holder = arr -> A[i];
            arr -> A[i] = x;
            x = holder
}
