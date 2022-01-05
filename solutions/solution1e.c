//a is the variable to count the number of factors of n
//j is the variable to count the digits in number n
#include <stdio.h>
#include <math.h>
int main()
{
    int n,alt_n,j;
    /*alt_n is the alternative for n to count the digits in number n cuz we can't
    use n cuz it will get changed while counting*/ 
    j=0;
    printf("Enter the number you want to check if it's prime of not\n");
    scanf("%d",&n);
    alt_n=n;
    int b=n;
    int c=0;
    //here we are counting the number of digits in n
    int d =n%10;
    /* d variable is to check is the ones place of the number is 5 then 
    it is a composite number */
    while (alt_n!=0)
    {
        c+=alt_n%10;
        alt_n/=10;
        j++;
    }

    if (n<0)
    {
        printf("You are entering a negative number \n");
    }
    else if (n==0)
    {
        printf("0 is not prime nor a composite number\n");
    }
    else if (n%2==0)
    {
        printf("%d is a composite number",n);
    }
    else if (c%3==0)
    {
        printf("%d is a composite number",n);
    }
    else
    {
        
        int a=0;
        if (j==1)
        {
            for (int i=2;i<=n-1;i++)
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
        }
        else 
        {
            if (d==5)
            {
                printf("%d is a composite number \n",n);
            }
            else 
            {
                for (int i=2;i<=sqrt(b);i++)
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