#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(void) 
{
int choice, i, a, b;
float A, B, result;
clrscr();
do {
printf("\n Select your operation (0 to exit):\n");
printf("1. Addition\n");
printf("2 Subtraction\n3");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Square root\n");
printf("6. A ^ B\n");
printf("7. A ^ 2\n");
printf("8. A ^ 3\n");
printf(“9. 1 / A\n");
printf("10. A ^ (1 / B)\n");
printf("11. A ^ (1 / 3)\n");
printf("12. 10 ^ A\n");
printf("13. A Factorial\n");
printf("14. Remainder \n");
printf("15. log10(x)\n");
printf("16. Modulus\n");
printf("17. Sin(A)\n");
printf("18. Cos(A)\n");
printf("19. Tan(A)\n");
printf("20. Cosec(A)\n");
printf("21. Cot(A)\n");
printf("22. Sec(A)\n");

scanf("%i", &choice);
if(choice == 0) exit(0);
switch(choice) 
{
case 1:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = A + B;
printf("\nResult: %f", result);
break;

case 2:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = A - B;
printf("\nResult: %f", result);
break;

case 3:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = A * B;
printf("\nResult: %f", result);
break;

case 4:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = A / B;
printf("\nResult: %f", result);
break;

case 5:
printf("Enter A: ");
scanf("%f", &A);
result = sqrt(A);
printf("\nResult: %f", result);
break;

case 6:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = pow(A, B);
printf("\nResult: %f", result);
break;

case 7:
printf("Enter A: ");
scanf("%f", &A);
result = pow(A, 2);
printf("\nResult: %f", result);
break;

case 8:
printf("Enter A: ");
scanf("%f", &A);
result = pow(A, 3);
printf("\nResult: %f", result);
break;

case 9:
printf("Enter A: ");
scanf("%f", &A);
result = pow(A, -1);
printf("\nResult: %f", result);
break;

case 10:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = pow(A, (1/B));
printf("\nResult: %f", result);
break;

case 11:
printf("Enter A: ");
scanf("%f", &A);
B = 3;
result = pow(A, (1/B));
printf("\nResult: %f", result);
break;

case 12:
printf("Enter A: ");
scanf("%f", &A);
result = pow(10, A);
printf("\nResult: %f", result);
break;

case 13:
printf("Enter A: ");
scanf("%f", &A);
result = 1;
for(i = 1; i <= A; i++) 
{
result = result * i;
}
printf("\nResult: %2f", result);
break;

case 14:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = (A * B) / 100;
printf("\nResult: %2f", result);
break;

case 15:
printf("Enter A: ");
scanf("%f", &A);
result = log10(A);
printf("\nResult: %2f", result);
break;

case 16:
printf("Enter A: ");
scanf("%f", &A);
printf("\nEnter B: ");
scanf("%f", &B);
result = A % B;
printf("\nResult: %2f", result);
break;

case 17:
printf("Enter A: ");
scanf("%f", &A);
result = sin(A * 3.14159 / 180);
printf("\nResult: %2f", result);
break;

case 18:
printf("Enter A: ");
scanf("%f", &A);
result = cos(A * 3.14159 / 180);
printf("\nResult: %2f", result);
break;

case 19:
printf("Enter A: ");
scanf("%f", &A);
result = tan(A * 3.14159 / 180);
printf("\nResult: %2f", result);
break;

case 20:
printf("Enter A: ");
scanf("%f", &A);
result = 1 / (sin(A * 3.14159 / 180));
printf("\nResult: %2f", result);
break;

case 21:
printf("Enter A: ");
scanf("%f", &A);
result = 1 / (tan(A * 3.14159 / 180));
printf("\nResult: %2f", result);
break;

case 22:
printf("Enter A: ");
scanf("%f", &A);
result = 1 / (cos(A * 3.14159 / 180));
printf("\nResult: %2f", result);
break;

default:
printf(“\nInvalid Choice!”);
}
} while(choice);
getch();
return 0;
}









