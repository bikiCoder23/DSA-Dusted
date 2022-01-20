#include <iostream>
#include <cmath>
using namespace std;

// Q1. Prime or not
/*int main()
{
    int n, i; bool flag=0;
    cout<<"Enter a number ";
    cin>>n;
    if(n==1)
        cout<<"Invalid Choice";
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            cout<<"The number is composite";
            flag=1;
            break;
        }
    if(flag==0 && n!=1)
            cout<<"The number is prime";
    return 0;
}*/

// Q2. Digit reverse
/*int main()
{
    int n, revdigi=0;
    cout<<"Enter a number ";
    cin>>n;
    while(n>0)
    {
        int r=n%10;
        revdigi=revdigi*10+r;
        n=n/10;
    }
    cout<<"The reverse of the digit is "<<revdigi;
    return 0;
}*/

// Q3. Amstrong Number
/*int main()
{
    int n, ams=0;
    cout<<"Enter a number ";
    cin>>n;
    int q=n;
    while(q>0)
    {
        int r=q%10;
        ams= ams+(r*r*r);
        q/=10;
    }
    if(ams==n)
        cout<<"Amstrong Number";
    else
        cout<<"Not an Amstrong Number";
    return 0;
}*/

// Q4. Factors of a numnber
/*int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(n==1)
        cout<<"Invalid Choice";
    else
    {
        cout<<"The factors of "<<n<<" are ";
        for(int i=2;i<=n;i++)
            if(n%i==0)
                cout<<i<<" ";
    }
    return 0;
}*/

// Q5. Factoral of a number
/*int main()
{
    int n, fact=1;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is ";
    for(int i=n;i>=1;i--)
        fact*=i;
    cout<<fact;
    return 0;
}*/