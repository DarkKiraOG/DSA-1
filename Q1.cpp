/*
PROBLEM DESCRIPTION

Given an array of n elements and an integer x,find the 
index where x is present in the array. If there are multiple 
occurrences, find the leftmost one. If x is not present, return -1.
*/

int fun(int arr[n], int x){
  for(int i = 0; i<n; i++){
  if(x == arr[i]) return i;
  }
  return -1;
}
