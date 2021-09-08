#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void main() 
{
int choice, i, a, b;
float A, B, result;
{
printf("\n Welcome to the world oof calculator enter between 1 to 21 \n");
printf("Enter 1 for Addition\n");
printf("Enter 2 for Subtraction\n");
printf("Enter 3 for Multiplication\n");
printf("Enter 4 for Division\n");
printf("Enter 5 for  Square root\n");
printf("Enter 6 for  A ^ B\n");
printf("Enter 7 for A ^ 2\n");
printf("Enter 8 for A ^ 3\n");
printf("Enter 9 for 1 / A\n");
printf("Enter 10 for A ^ (1 / B)\n");
printf("Enter 11 for A ^ (1 / 3)\n");
printf("Enter 12 for 10 ^ A\n");
printf("Enter 13 for A Factorial\n");
printf("Enter 14.for Remainder \n");
printf("Enter 15 for log10(x)\n");
printf("Enter 16 for Sin(A)\n");
printf("Enter 17 for Cos(A)\n");
printf("Enter 18 for Tan(A)\n");
printf("Enter 19 for Cosec(A)\n");
printf("Enter 20 for Cot(A)\n");
printf("Enter 21 for Sec(A)\n");

scanf("%i", &choice);

switch(choice) 
{
    case 1:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = A + B;
     printf("\nResult: %f", result);
     break;

    case 2:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = A - B;
     printf("\nResult: %f", result);
     break;

    case 3:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = A * B;
     printf("\nResult: %f", result);
     break;
 
    case 4:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = A / B;
     printf("\nResult: %f", result);
     break;

    case 5:
     printf("Enter integer value : ");
     scanf("%f", &A);
     result = sqrt(A);
     printf("\nResult: %f", result);
     break;

    case 6:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = pow(A, B);
     printf("\nResult: %f", result);
     break;

    case 7:
     printf("Enter integer value : ");
     scanf("%f", &A);
     result = pow(A, 2);
     printf("\nResult: %f", result);
     break;

    case 8:
     printf("Enter integer value : ");
     scanf("%f", &A);
     result = pow(A, 3);
     printf("\nResult: %f", result);
     break;

    case 9:
     printf("Enter integer value : ");
     scanf("%f", &A);
     result = pow(A, -1);
     printf("\nResult: %f", result);
     break;

    case 10:
     printf("Enter first integer value : ");
     scanf("%f", &A);
     printf("\nEnter Second integer value : ");
     scanf("%f", &B);
     result = pow(A, (1/B));
     printf("\nResult: %f", result);
     break;

     case 11:
       printf("Enter integer value : ");
       scanf("%f", &A);
       B = 3;
       result = pow(A, (1/B));
       printf("\nResult: %f", result);
       break;

       case 12:
       printf("Enter integer value : ");
       scanf("%f", &A);
       result = pow(10, A);
       printf("\nResult: %f", result);
       break;

       case 13:
       printf("Enter integer value : ");
       scanf("%f", &A);
       result = 1;
       for(i = 1; i <= A; i++) 
       {
       result = result * i;
       }
       printf("\nResult: %2f", result);
       break;

       case 14:
       printf("Enter first integer value : ");
       scanf("%f", &A);
       printf("\nEnter Second integer value : ");
       scanf("%f", &B);
       result = (A * B) / 100;
       printf("\nResult: %2f", result);
       break;

       case 15:
        printf("Enter integer value : ");
         scanf("%f", &A);
         result = log10(A);
         printf("\nResult: %2f", result);
         break;


        case 17:
         printf("Enter integer value : ");
         scanf("%f", &A);
         result = sin(A * 3.14159 / 180);
         printf("\nResult: %2f", result);
         break;

         case 18:
         printf("Enter integer value : ");
         scanf("%f", &A);
         result = cos(A * 3.14159 / 180);
         printf("\nResult: %2f", result);
         break;

         case 19:
         printf("Enter integer value : ");
         scanf("%f", &A);
         result = tan(A * 3.14159 / 180);
         printf("\nResult: %2f", result);
         break;

         case 20:
         printf("Enter integer value : ");
         scanf("%f", &A);
         result = 1 / (sin(A * 3.14159 / 180));
         printf("\nResult: %2f", result);
         break;

        case 21:
        printf("Enter integer value : ");
        scanf("%f", &A);
        result = 1 / (tan(A * 3.14159 / 180));
        printf("\nResult: %2f", result);
        break;

        case 22:
        printf("Enter integer value : ");
        scanf("%f", &A);
        result = 1 / (cos(A * 3.14159 / 180));
        printf("\nResult: %2f", result);
        break;

       default:
       printf("\n Invalid Choice!");
}
} 

}

