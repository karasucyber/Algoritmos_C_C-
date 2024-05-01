#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int int1, int2;
float float1, float2;
float resultFloat;
float resultFloat1;
int resultInt;
int resultInt1; 

   scanf("%d %d", &int1, &int2);
   scanf("%f %f", &float1, &float2);
   
   resultInt = int1 + int2;
    resultInt1 = int1 - int2;
   
   resultFloat = float1 + float2;
   resultFloat1 = float1 - float2;
      
   printf("%d %d\n",  resultInt, resultInt1);
   printf("%.1f %.1f\n", resultFloat, resultFloat1);
    return 0;
}
