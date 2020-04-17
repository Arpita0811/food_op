#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Food Item-Noodles\n");
               printf("Price-100");
               break;
        case 2:printf("Food Item-Burger\n");
               printf("Price-90");
               break;
        case 3:printf("Food Item-Shawarma\n");
               printf("Price-99");
               break;
        case 4:printf("Food Item-Chicken crispy\n");
               printf("Price-120");
               break;   
        case 5:printf("Food Item-Garlic Bread\n");
               printf("Price-110");
               break;
               
        default:printf("User input does not match with the available items");
      }
    }
