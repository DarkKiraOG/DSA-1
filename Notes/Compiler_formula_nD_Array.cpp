int array[a][b][c][d];         //Or any type

// Row Major Formula:            Address(array[i][j][k][l]) = Address(array) + [i*b*c*d + j*c*d + k*d + l] * sizeoftype

// Column Major Formula:         Address(array[i][j][k][l]) = Address(array) + [l*a*b*c + k*b*c + j*a + i] * sizeoftype
