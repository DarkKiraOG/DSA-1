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
