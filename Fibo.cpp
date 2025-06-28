
#include <iostream>

int fibo(int n)
    {
        static int *arr = (int *)malloc((n + 1) * sizeof(int));
  
        arr[0] = 0;
        
        if(n<=1){
            return 1;
        }
        
        arr[n-1] = fibo(n-1);

        return arr[n-1] + arr[n-2];
    }

int main()
{
    int a = fibo(8);
    std::cout<<a;
    
    return 0;
}







