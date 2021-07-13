/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/



#include <stdio.h>


int main() {
   int no1, no2;

   int minimum(int no1,int no2);
   int maximum(int no1,int no2);
   int multiply(int no1,int no2);
   int no1, no2, max,min, Mul;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   min = minimum(no1,  no2);
   printf("Minimum Number is: %d \n", minimum(no1, no2));

   max = maximum(no1,  no2);
   printf("Maximum Number is: %d \n", maximum(no1, no2));

   Mul=multiply( no1, no2);
   printf("Multiplication of two Numbers are: %d \n", multiply(no1, no2));

   return 0;

}
int minimum(int no1,int no2)
   {
     if( no1<no2){

      return no1;

     }else{

      return no2;
    }

   }

   int maximum(int no1,int no2)
   {
     if( no1>no2){

      return no1;

     }else{

      return no2;
     }

   }

   int multiply(int no1,int no2)
   {
      int mul;
       mul= no1*no2;
       return mul;
   }

