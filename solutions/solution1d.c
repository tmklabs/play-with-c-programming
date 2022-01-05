//a is the variable to count the number of factors of n
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number you want to check if it's prime of not\n");
    scanf("%d",&n);
    int a=0;
    if (n<0)
    {
        printf("You are entering a negative number \n");
    }
    else if (n==0)
    {
        printf("0 is not prime nor a composite number\n");
    }
    else
    {
        for (int i=2;i<=sqrt(n);i++)
        {
            if (n%i==0)
            {
                a++;
            }
            else
            {
                a=a;
            }
        }
        if (a>0)
        {
            printf("%d is a composite number\n",n);
        }
        else 
        {
            printf("%d is a prime number\n",n);
        }
    }
}