#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
  {
     int decision;
     printf(" Welcome to the WORD OF CALCULATOR \n");
     printf(" Enter 1 for Calculator \n");
     printf(" Enter 2 Unit convertor \n");
     scanf("%i", &decision);

   switch(decision) 
     {
         
       case 1:
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
                      printf("\nAnswer for Addition: %f", result);
                      break;

                     case 2:
                     printf("Enter first integer value : ");
                     scanf("%f", &A);
                     printf("\nEnter Second integer value : ");
                     scanf("%f", &B);
                     result = A - B;
                     printf("\nAnswer for Subtraction : %f", result);
                     break;

                     case 3:
                     printf("Enter first integer value : ");
                     scanf("%f", &A);
                     printf("\nEnter Second integer value : ");
                     scanf("%f", &B);
                     result = A * B;
                     printf("\nAnswer for Multiplication : %f", result);
                     break;
 
                     case 4:
                     printf("Enter first integer value : ");
                     scanf("%f", &A);
                     printf("\nEnter Second integer value : ");
                     scanf("%f", &B);
                     result = A / B;
                     printf("\nAnswer for Division : %f", result);
                     break;

                     case 5:
                     printf("Enter integer value : ");
                     scanf("%f", &A);
                     result = sqrt(A);
                     printf("\nAnswer for Square root : %f", result);

                     case 6:
                     printf("Enter first integer value : ");
                     scanf("%f", &A);
                     printf("\nEnter Second integer value : ");
                     scanf("%f", &B);
                     result = pow(A, B);
                     printf("\nAnswer for A ^ B : %f", result);
                     break;

                     case 7:
                     printf("Enter integer value : ");
                     scanf("%f", &A);
                     result = pow(A, 2);
                     printf("\nAnswer for A ^ 2 : %f", result);
                     break;

                    case 8:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = pow(A, 3);
                    printf("\nAnswer for A ^ 3 : %f", result);
                    break;

                    case 9:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = pow(A, -1);
                    printf("\nAnswer for 1 / A : %f", result);
                    break;

                    case 10:
                    printf("Enter first integer value : ");
                    scanf("%f", &A);
                    printf("\nEnter Second integer value : ");
                    scanf("%f", &B);
                    result = pow(A, (1/B));
                    printf("\nAnswer for A ^ (1 / B) : %f", result);
                    break;

                    case 11:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    B = 3;
                    result = pow(A, (1/B));
                    printf("\nAnswer for A ^ (1 / 3) : %f", result);
                    break;

                    case 12:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = pow(10, A);
                    printf("\nAnswer for 10 ^ A : %f", result);
                    break;

                    case 13:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = 1;
                    for(i = 1; i <= A; i++) 
                    {
                     result = result * i;
                      }
                     printf("\nAnswer for A Factorial : %2f", result);
                     break;

                     case 14:
                     printf("Enter first integer value : ");
                     scanf("%f", &A);
                     printf("\nEnter Second integer value : ");
                     scanf("%f", &B);
                     result = (A * B) / 100;
                     printf("\nAnswer for Remainder : %2f", result);
                     break;

                     case 15:
                     printf("Enter integer value : ");
                     scanf("%f", &A);
                     result = log10(A);
                     printf("\nAnswer for log10(x) : %2f", result);
                     break;

                     case 16:
                     printf("Enter integer value : ");
                     scanf("%f", &A);
                     result = sin(A * 3.14159 / 180);
                     printf("\nAnswer for Sin(A) : %2f", result);
                     break;

                    case 17:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = cos(A * 3.14159 / 180);
                    printf("\nResultAnswer for Cos(A) : %2f", result);

                    case 18:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = tan(A * 3.14159 / 180);
                    printf("\nAnswer for Tan(A) : %2f", result);
                    break;

                    case 19:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = 1 / (sin(A * 3.14159 / 180));
                    printf("\nAnswer for Cosec(A) : %2f", result);
                    break;

                    case 20:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = 1 / (tan(A * 3.14159 / 180));
                    printf("\nAnswer for Cot(A) : %2f", result);
                    break;

                    case 21:
                    printf("Enter integer value : ");
                    scanf("%f", &A);
                    result = 1 / (cos(A * 3.14159 / 180));
                    printf("\nAnswer for Sec(A) : %2f", result);
                    break;

                    default:
                    printf("\n Bad Selection!");
                   }
          }   
        }           break;
         
    case 2:
              {
                int option;

                   float Celcius,Farenheit;
                   float Meter,Feet;
                   float Killometer,M, CM, MM;
                   printf(" Enter 1 for Farenhait to Celcius \n");
                   printf(" Enter 2 for Celcius to Farenhait \n");
                   printf(" Enter 3 for converting Meter to Feet \n");
                   printf(" Enter 4 for calculating area of Circle, Rectanglee, Triangle, Square \n");
                   printf(" Enter 5 for converting Km to Meter,centimeter,milimeter \n");
                  scanf("%i", &option);

                  switch (option) 
                        {
                           case 1:
                                 {
                              printf("Enter the temperature in Celcius: \n");
                               scanf("%f",&Celcius);
                              Farenheit = Celcius * 9/5 + 32;
                              printf("Temperature in Farenheit: %f",Farenheit);
                                  }
                                break;
      
      
                               case 2:
                                   {
                                printf("Enter the temperature in Farenheit : \n");
                                scanf("%f",&Farenheit);
                                Celcius = (Farenheit - 32) * 5/9;
                                printf("Celcius: %f",Celcius); 
                                    }
                                   break;
      
      
                              case 3:
                                  {
                               printf("Enter distance in Meter : ");
                                scanf("%f",&Meter);
                                Feet = 3.2808399 * Meter;
                                printf("The distaance in Feet is : %f",Feet);
                                   }
                                 break;
   
                                 case 4:
                                   {
                                 int choice;
                                 float side, base, length, breadth, height, area, radius;
                                 printf(" Enter 1 for area of Circle \n");
                                 printf(" Enter 2 for area of Rectangle \n");
                                 printf(" Enter 3 for area of Triangle \n");
                                 printf(" Enter 4 for area of Square \n");
                                 scanf("%d", &choice);
                                      switch(choice)
                                             {
                                           case 1:
                                            printf("Enter the radius for circle \n");
                                            scanf("%f", &radius);
                                             area = 3.142 * radius * radius;
                                             printf("Area of a circle = %f\n", area);
                                             break;
                                           case 2:
                                           printf("Enter the breadth and length for Rectangle\n");
                                           scanf("%f %f", &breadth, &length);
                                           area = breadth * length;
                                           printf("Area of a Reactangle = %f\n", area);
                                           break;
                                           case 3:
                                           printf("Enter the base and height for Triangle \n");
                                            scanf("%f %f", &base, &height);
                                            area = 0.5 * base * height;
                                            printf("Area of a Triangle = %f\n", area);
                                            break;
                                           case 4:
                                           printf("Enter the side for Squaare\n");
                                           scanf("%f", &side);
                                           area = side * side;
                                           printf("Area of a Square=%f\n", area);
                                           break;
                                           default:
                                           printf("Error in figure code\n");
                                           break;
                                            }
                                          }
                                          break;
   
                               case 5:
                                  {
                               printf("Enter the distance in Killometer. : ");
                               scanf("%f",&Killometer);
                               M  = Killometer *1000;
                               CM = Killometer *100000;
                               MM = Killometer *1000000;
                               printf("The distance in Killometer to Meter : %.2f \n",M); 
                               printf("The distance in Killometer to Centimeter : %.2f \n",CM); 
                               printf("The distance in Killometer to Millimeter : %.2f \n", MM); 
                                  }
                                   break;
    
                                default:
                                       {
                                      printf("There is no such option above");
                                      }
                         }
  
                        }
       break;
    default:
              printf("\n Invalid Choice Please enter correct number!");
    } 
    return 0;
  }  






