//Defining 2D arrays:

//Method 1 (Stack) -> ArrayOfArrays

int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

//Method 2 (Half Stack, Half Heap) -> ArrayOfPointers

int *B[3];             //each element points to an array => 3 Arrays => 3 Rows
B[0] = new int[4];
B[1] = new int[4];
B[2] = new int[4];

//Method 3 (Heap) -> DoublePointers

int **C;
C = new int*[3];     //ArrayOfPointers (Inside Heap)

C[0] = new int[4];
C[1] = new int[4];
C[2] = new int[4];
