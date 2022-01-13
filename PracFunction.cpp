#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

//Q1. Prime number series betwen to numbers
/*bool prime_series(int);

int main()
{
    int a, b, i;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"\nThe series of prime number between "<<a<<" & "<<b<<" are ";
    for(i=a+1;i<b;i++)
        if(prime_series(i))
            cout<<i<<" ";
    return 0;
}

bool prime_series(int n)
{
    int i;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}*/

//Q2. Fibonacci
/*void fibo(int);

int main()
{
    int n;
    cout<<"Enter the term till which series req. ";
    cin>>n;
    fibo(n);
}

void fibo(int n)
{
    int first=0, second=1, nxt;
    for(int i=1;i<=n;i++)
    {
        cout<<first<<" ";
        nxt=first+second;
        first=second;
        second=nxt;
    }
    return;
}*/

//Q3. Factorial of a number
/*int factorial(int);

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}

int factorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
        fact*=i;
    return(fact);
}*/

//Q4. Combination nCr
/*int factorial(int);
int combination(int, int);

int main()
{
    int n, r;
    cout<<"Enter the n & r respectively ";
    cin>>n>>r;
    cout<<"The value of nCr "<<combination(n,r);
    return 0;
}

int combination(int a, int b)
{
    int nCr=factorial(a)/(factorial(a-b)*factorial(b));
    return(nCr);
}

int factorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
        fact*=i;
    return(fact);
}*/

//Q5. Pascal's Triangle
/*int factorial(int);
void pascal(int);
int combination(int, int);

int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    pascal(n);
    return 0;
}

void pascal(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<combination(i,j)<<" ";
        cout<<"\n";
    }
}

int combination(int a, int b)
{
    int nCr=factorial(a)/(factorial(a-b)*factorial(b));
    return(nCr);
}

int factorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
        fact*=i;
    return(fact);
}*/

//Q6. Check odd-even
/*bool oddeven(int);

int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(oddeven(n))
        cout<<"The number "<<n<<" is even";
    else
        cout<<"The number "<<n<<" is odd";
    return 0;
}

bool  oddeven(int a)
{
    if(a%2==0)
        return(true);
    else
        return(false);
}*/

//Q7. Check Alphabet
/*bool alpha(int);

int main()
{
    char a;
    cout<<"Enter any character ";
    cin>>a;
    if(alpha(int(a)))    
        cout<<"The character "<<a<<" is an alphabet";
    else
        cout<<"The character "<<a<<" is not an alphabet";
    return 0;
}

bool alpha(int x)
{
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
        return(true);
    else
        return(false);
}*/

//Q8. Max-Min
/*void max(int,int,int);
void min(int,int,int);

int main()
{
    int a, b, c;
    cout<<"Enter 3-numbers ";
    cin>>a>>b>>c;
    max(a,b,c);
    min(a,b,c);
    return 0;
}

void max(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            cout<<"MAX "<<a;
        else
            cout<<"MAX "<<c;
    }
    else
    {
        if(b>c)
            cout<<"MAX "<<b;
        else
            cout<<"MAX "<<c;  
    }
    return;
}

void min(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
            cout<<" MIN "<<a;
        else
            cout<<" MIN "<<c;
    }
    else
    {
        if(b<c)
            cout<<" MIN "<<b;
        else
            cout<<" MIN "<<c;  
    }
    return;
}*/

//Q9. Swap value of variables
/*void swap(int,int);

int main()
{
    int num1, num2;
    cout<<"Enter the value for num1 & num2 respectively ";
    cin>>num1>>num2;
    cout<<"\nThe value of num1 is "<<num1<<" & the value of num2 is "<<num2;
    swap(num1, num2);
    return 0;
}

void swap(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    cout<<"\nThe value of num1 is "<<a<<" & the value of num2 is "<<b;
    return;
}*/

//Q10. Sum of n natural numbers
/*int sum(int);

int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers are "<<sum(n);
    return 0;
}

int sum(int a)
{
    int sum=(a*(a+1))/2;
    return(sum);
}*/

//Q11. Pythagorean Triplet
/*bool pytha(int, int, int);

int main()
{
    int a, b, c;
    cout<<"Enter the 3-numbers for triplet ";
    cin>>a>>b>>c;
    if(pytha(a,b,c))
        cout<<"The numbers "<<a<<" "<<b<<" "<<c<<" form a Pythagorean Triplet";
    else
        cout<<"The numbers "<<a<<" "<<b<<" "<<c<<" does not form a Pythagorean Triplet";
    return 0;
}

/*bool pytha(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a==sqrt((b*b)+(c*c)))
                return true;
            else
                return false;
        }
        else
        {
            if(c==sqrt((a*a)+(b*b)))
                return true;
            else
                return false;
        }      
    }
    else
    {
        if(b>c)
        {
            if(b==sqrt((a*a)+(c*c)))
                return true;
            else
                return false;
        }
        else
        {
            if(c==sqrt((a*a)+(b*b)))
                return true;
            else
                return false;
        }      
    }
}*/

//Another approach
/*bool pytha(int x, int y, int z)
{
    int a=max(x, max(y, z)), b, c;
    if(a==x)
    {
        b=y; c=z;
    }
    else if(a==y)
    {
        b=x; c=z;
    }
    else
    {
        b=x; c=y;
    }

    if(a*a==b*b+c*c)
        return true;
    else
        return false;
}*/

//Q12. Binary to Decimal
/*int binary2decimal(int);

int main()
{
    int n;
    cout<<"Enter a binary value ";
    cin>>n;
    cout<<"The decimal value of "<<n<<" is "<<binary2decimal(n);
    return 0;
}

int binary2decimal(int a)
{
    int r, sum=0, x=1;
    while(a>0)
    {
        r=a%10;
        sum+=r*x;
        x*=2;
        a/=10;
    }
    return(sum);
}*/

//Q13. Octal to Decimal
/*int octal2decimal(int);

int main()
{
    int n;
    cout<<"Enter a octal value ";
    cin>>n;
    cout<<"The decimal value of "<<n<<" is "<<octal2decimal(n);
    return 0;
}

int octal2decimal(int a)
{
    int r, x=1, sum=0;
    while(a>0)
    {
        r=a%10;
        sum+=r*x;
        x*=8;
        a/=10;
    }
    return(sum);
}*/

//Q14. Hexadecimal to Decimal
/*int hexa2decimal(string);

int main()
{
    string n;
    cout<<"Enter a hexadecimal value ";
    cin>>n;
    cout<<"The decimal value of "<<n<<" is "<<hexa2decimal(n);
    return 0;
}

int hexa2decimal(string a)
{
    int sum=0, x=1;
    int n= a.size();

    for(int i=n-1;i>=0;i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
            sum+=x*(a[i]-'0');
        else if(a[i]>= 'A' && a[i]<= 'F')        
            sum+=x*(a[i]-'A'+10);
        x*=16;
    }
    return(sum);
}*/

//Q15. Decimal to Binary
/*int decimal2binary(int);

int main()
{
    int n;
    cout<<"Enter a decimal value ";
    cin>>n;
    cout<<"The binary value of "<<n<<" is "<<decimal2binary(n);
    return 0;
}

int decimal2binary(int a)
{
    int sum=0, x=1;
    while(x<=a)
        x*=2;
    x/=2;
    
    while(x>0)
    {
        int last=a/x;
        a-=last*x;
        x/=2;
        sum=sum*10+last;
    }
    return(sum);
}*/

//Q16. Decimal to Octal
/*int decimal2octal(int);

int main()
{
    int n;
    cout<<"Enter a decimal value ";
    cin>>n;
    cout<<"The octal value of "<<n<<" is "<<decimal2octal(n);
    return 0;
}

int decimal2octal(int a)
{
    int sum=0, x=1;
    while(x<=a)
        x*=8;
    x/=8;

    while(x>0)
    {
        int last=a/x;
        a-=x*last;
        sum=sum*10+last;
        x/=8;
    }
    return(sum);
}*/

//Q17. Decimal to Hexadecimal
/*string decimal2hexa(int);

int main()
{
    int n;
    cout<<"Enter a decimal value ";
    cin>>n;
    cout<<"The Hexadecimal value of "<<n<<" is "<<decimal2hexa(n);
    return 0;
}

string decimal2hexa(int a)
{
    int x=1;
    string sum="";
    while(x<=a)
        x*=16;
    x/=16;

    while(x>0)
    {
        int last=a/x;
        a-=last*x;
        x/=16;
        if(last<= 9 )
            sum=sum+ to_string(last);
        else
        {
            char c= 'A' + last - 10;
            sum.push_back(c);
        }
    }
    return(sum);
}*/

//Q18. Addition of Binary numbers
/*int addbinary(int,int);
int rev(int);

int main()
{
    int a, b;
    cout<<"Enter two binary number ";
    cin>>a>>b;
    cout<<"The sum of "<<a<<" & "<<b<<" is "<<addbinary(a,b);
    return 0;
}

int addbinary(int a, int b)
{
    int sum=0, prevCarry=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            sum=sum*10+prevCarry;
            prevCarry=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if(prevCarry==1)
            {
                sum=sum*10+0;
                prevCarry=1;
            }
            else
            {
                sum=sum*10+1;
                prevCarry=0;
            }
        }
        else
        {
            sum=sum*10+prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }

    while(a>0)
    {
        if(prevCarry==1)
        {
            if(a%2==1)
            {
                sum=sum*10+0;
                prevCarry=1;
            }
            else
            {
                sum=sum*10+1;
                prevCarry=0;
            }
        }
        else
            sum=sum*10+(a%2);
        a/=10;
    }

    while(b>0)
    {
        if(prevCarry==1)
        {
            if(b%2==1)
            {
                sum=sum*10+0;
                prevCarry=1;
            }
            else
            {
                sum=sum*10+1;
                prevCarry=0;
            }
        }
        else
            sum=sum*10+(b%2);
        b/=10;
    }

    if(prevCarry==1)
        sum=sum*10+1;
    sum=rev(sum);
    return(sum);
}

int rev(int a)
{
    int ans=0, r;
    while(a>0)
    {
        r=a%10;
        ans=ans*10+r;
        a/=10;
    }
    return(ans);
}*/