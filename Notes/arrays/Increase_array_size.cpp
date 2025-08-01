#include<stdio.h>
#include<iostream.h>

void main(){

  int *p = new int[5]; // Increasing array size is ony possible with Dynamic Memory Allocation.
  int *q = new int[10];

  for (int i = 0; i < 5; i++){
    q[i] = p[i];
  }

  delete p;
  p = q;
  q = NULL; //Don't need two pointers.
  
}
