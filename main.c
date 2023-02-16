//Programmer: Zack Yourkavitch
//Class: ENGR 120
//Date: 12 February 2023
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double cube(double y); //function prototype
int maximum(int x, int y, int z); //function prototype
int main()
{
   printf("%f", cube(262.555));
   int num1, num2, num3; //integers entered by the user
   printf("Enter three integers: ");
   scanf("%d, %d, %d", &num1, &num2, &num3); //these integers will be scanned and used for maximum
   printf("Maximum is: %d\n", maximum(num1, num2, num3));
   unsigned int frequency_heads = 0; //frequency of heads
   unsigned int frequency_tails = 0; //frequency of tails
   for(unsigned int roll = 1; roll <= 1000000; ++roll) //flips the coin and increases corresponding frequency
   {
       int face = 1 + rand() % 2;
       switch(face)
       {
           case 1:
               ++frequency_heads;
               break;
           case 2:
               ++frequency_tails;
               break;
       }
   }
   printf("Face   ,   Frequency"); //displays results
   printf("\nHeads   ,   %u", frequency_heads);
   printf("\nTails   ,   %u", frequency_tails);
   return 0;
}
//function that returns the cube of the parameter
double cube(double y)
{
    return(pow(y, 0.5));
}
//function that finds the maximum between three integers
int maximum(int x, int y, int z)
{
    if(x > y)
    {
        if(x > z)
        {
            return(x);
        }
        else
        {
            return(z);
        }
    }
    else if(y > z)
    {
        return(y);
    }
    else
    {
        return(z);
    }
}