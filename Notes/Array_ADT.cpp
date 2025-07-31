//////////////////////////
// MIX OF C AND C++

#include<stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
};

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

// Insert   //self made 

void Insert(struct Array *arr, int n, int x){              //pending check: if index>0 and index < arr.length
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
    {for (i = arr -> length; i > index; i--)
            arr -> A[i] = arr -> A[i-1];
        arr -> A[index] = x;
        arr -> length++; }
}


// Delete     

int Delete(struct Array *arr. int index) {
    int x = 0;
    if (index >=0 && index <= arr -> length){
        x = arr->A[index];
        for (int i = index; i < (arr -> length) - 1; i++)
            {
                arr -> A[i] = arr -> A[i+1];
            }
        arr -> length --;
        return x;
    }
}
    
//Linear Search


    
for( int i = 0; i < arr -> length ; i++ )
	 	 {
	 	 	 if( key == arr->A[ i ] )
	 	 	 return i;	 	 	 //if search is successful it ends here
	 	 }
	 	 

	 	 return -1;	 	 	 	 // if search unsuccessful returns -1

// Improving Linear Search

//To improve the speed of comparison , you can move a key
//element repeatedly search one step forward this method is called
//transposition

for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[i-1]);
	 	 	 return i-1;
	 	 }
}


//The second method is you can directly swap the key element to
//the first element this process is called move to head . The next
//search for the same element becomes faster.

for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[0]);
	 	 	 return 0;
	 	 }
}


