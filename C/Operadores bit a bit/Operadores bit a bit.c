#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



void calculate_the_maximum(int n, int k) {
   int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
   for (int a = 1; a <= n; a++) {
   for(int b = a + 1; b <= n ; b++ ){
       int result_and = a & b;
       int result_or = a | b;
       int result_xor = a ^ b;

       if(result_and < k &&  result_and > max_and){
            max_and = result_and;
       }
       if (result_or < k && result_or > max_or) {
           max_or = result_or; 
       }
       if(result_xor < k && result_xor > max_xor){
           max_xor = result_xor;
       }
       
        
    };
  }
       printf("%d\n", max_and);
       printf("%d\n", max_or);
       printf("%d\n", max_xor); 
}  

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
