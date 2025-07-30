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

void Insert(struct Array *arr, int n, int x){                                                               //self made         //pending check: if index>0 and index < arr.length
    if (arr -> length < arr -> size)
        int holder;
        for (int i = n; i < A -> size; i++)
            holder = arr -> A[i];
            arr -> A[i] = x;
            x = holder
}


// Insert 
void Insert(struct Array *arr, int index, int x){          
    int i;
    if (index >=0 && index <= arr -> length && arr -> length < arr -> size)
        for (i = arr -> length; i > index; i--)
            arr -> A[i] = arr -> A[i-1];
        arr -> A[index] = x;
        arr -> length++; 
}

