{Assignment=10} (I NEURON JOB READY BOOT CAMP)
Question =1
/*
#include<stdio.h>
int main()
{
int s,x;
printf("enter the value of x");
scanf("%d",&a);
s = area(x);
printf("area is %d",&s);

return 0;
}
double area (intr)
{
int d;
d=3.14*r*r
return d;
}
*\
Question = 2
/*
/*
#include<stdio.h>
double simple_interest(int,int,int);
int main()
{
int s,x,y,z;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of y");
scanf("%d",&y);
printf("enter the value of z");
scanf("%d",&z);
s = simple_interest(x,y,z);
printf("simple_interest is %d",s);
return 0;
}
double simple_interest(intp,intr, intt)
{
int d;
d=(p*r*t)/100;
return d;
}
*\
*\
Question = 3
/*
int num(int a)
{
    int b;
    if(a%2==0)
    {
        printf("the number is even");
        return 1;
    }
    else
    {
     printf("the number is odd");
        return 0;
   }
}
#include<stdio.h>
int num(int);
int main()
{
    int s,a;
    printf("enter the value of a");
    scanf("%d",&a);
    s = num(a);
}
*\
Question =4
/*
/*
#include<stdio.h>
void natural_number(int)
int main()
{
natural_number(0);

}
void natural number (int i)
{
int n;
for(i;i<=n;i++);
printf("the value of i is %d",i);
}
*\
*\
Question =5
/*

#include<stdio.h>
void natural_number(int );
int main()
{
    natural_number(0);

}

void natural_number(int i)
{
    int n;
    for(i; i<=n; i++)

    printf("the value of i is %d\n",2*i-1);
printf("\n");

}
*\

Question =6
/*
#include<stdio.h>
int  factorial(int );
int main()
{
 int s, x;
printf("enter the value of x");
scanf("%d",&x);
s = factorial(x);
printf("the value of factorial_number is %d ",s);

}
int factorial(int n)
{
int i;
if(n
/ == 0 || n == 1)
{
return 1;
}
else
{
 i = n*factorial(n-1);
    return i;
}
}

Question =7
/*
/*
 using system;
class srs
{
static int factorial(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
        fact = fact * i;

    return fact;
}

// Function to calculate p(n, r)
static int npr(int n, int r)
{
    int pnr = factorial(n) /
              factorial(n - r);

    return pnr;
}

static int countPermutations(int n,
                             int r, int k)
{
    return factorial(k) * (r - k + 1) *
                    npr(n - k, r - k);
}

// Driver code
static void Main()
{
    int n = 8;
    int r = 5;
    int k = 2;

    Console.WriteLine(countPermutations(n, r, k));
}
}
*\
*\
Question = 8
/*
/*
using System;

class srs
{

// Function to find factorial
// of a number
static int factorial(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
        fact = fact * i;

    return fact;
}

// Function to calculate p(n, r)
static int npr(int n, int r)
{
    int pnr = factorial(n) /
              factorial(n - r);

    return pnr;
}
static int countPermutations(int n,
                             int r, int k)
{
return factorial(k) * (r - k + 1) *
    npr(n - k, r - k);
}
static void Main()
{
    int n = 8;
    int r = 5;
    int k = 2;

    Console.WriteLine(countPermutations(n, r, k));
}
}
 *\
 *\
Question =9
/*
/*
using System;

class srs {

    static bool isDigitPresent(int x, int d)
    {

        // Break loop if d is present as digit
        while (x > 0)
        {
            if (x % 10 == d)
                break;

            x = x / 10;
        }

        // If loop broke
        return (x > 0);
    }

    // function to display the values
    static void printNumbers(int n, int d)
    {

        // Check all numbers one by one
        for (int i = 0; i <= n; i++)

            // checking for digit
            if (i == d || isDigitPresent(i, d))
                Console.Write(i + " ");
    }
    public static void Main()
    {
        int n = 47, d = 7;

        printNumbers(n, d);
    }
}
*\
*\
