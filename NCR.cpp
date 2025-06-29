#include <iostream>

//Utilizing Pascal's Triangle

int C(int n, int r){
    
    if(n==r || r==0){
        return 1;
    }
    
    return C(n-1, r-1) + C(n-1, r);
    
}

int main()
{
    int a = C(4, 2);
    std::cout<<a;

    return 0;
}
