#include<stdio.h>
#include<conio.h>
#include<math.h>

void zero() 
{
    int num;
    int result;
    printf("Enter a Digit: ");
    result = scanf("%d", &num);
    
    if (result == 0)  
    {
        printf("This is not a Digit\n");
        while (getchar() != '\n');  
    }
    else if (num == 0)
    {
        printf("This value is equal to Zero\n");
    }
    else if (num < 0)
    {
        printf("The value is Negative\n");
    }
    else if (num > 0)
    {
        printf("The value is Positive\n");
    }
}

void pointer()
{

int *a,*b;
b=5;

a=&b;
b=&a;
printf("%d  %d",a,*b);

}
switch_case(){
    int ch,sum,a=2,b=5;
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
      printf(a+b);
        break;
    
    default:
        break;
    }
}

int main()
{
    switch_case();
    //pointer();
   // zero();
    return 0;
}
