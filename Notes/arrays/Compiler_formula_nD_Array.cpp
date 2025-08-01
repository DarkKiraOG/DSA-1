int array[a][b][c][d];         //Or any type

/*

Row Major Formula:            Address(array[i][j][k][l]) = Address(array) + [i*b*c*d + j*c*d + k*d + l] * sizeoftype

-> Time Complexity of Operations: O(n^2)
We can make it more efficient by reversing the terms in the bracket and taking out common factors: (Horner's Rule)

-> Address(array) + [l + d*[k + c*[j + b*[i]]]] * sizeoftype
Now: Time Complexity of Operations: O(n)

Column Major Formula:         Address(array[i][j][k][l]) = Address(array) + [l*a*b*c + k*b*c + j*a + i] * sizeoftype

*/
