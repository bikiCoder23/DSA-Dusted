//Q1.
/*#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%2==0)
        cout<<"Even\n";
    else
        cout<<"Odd\n";
    return 0;
}*/

//Q2.
/*#include<iostream>
using namespace std;


int main()
{
    int a, b;
    cout<<"Enter two number ";
    cin>>a>>b;

    if(a>b)
        cout<<"Max: "<<a<<"\nMin: "<<b;
    else
        cout<<"Max: "<<b<<"\nMin: "<<a;
        
    return 0;
}*/

//Q3.
/*#include<iostream>
using namespace std;


int main()
{
    int a, b, c;
    cout<<"Enter three integers ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<"Max: "<<a;
        else
            cout<<"Max: "<<c;
    }
    if(a<b)
    {
        if(b>c)
            cout<<"Max: "<<b;
        else
            cout<<"Max: "<<c;
    }
    return 0;
}*/

//Q4.
/*#include<iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cout<<"Enter the length of the 3 sides of the triangle ";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s1==s3)
        cout<<"Equilateral";
    else if(s1==s2 || s1==s3 || s2==s3)
        cout<<"Isosceles";
    else
        cout<<"Scalane";
    return 0;
}*/


//Q5.
/*#include<iostream>
using namespace std;

int main()
{
    char n;
    cout<<"Enter the character ";
    cin>>n;
    if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U' || n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
        cout<<"Vowel";
    else
        cout<<"Consonent";
    return 0;
}*/

//Q6.
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the integer";
    cin>>n;
    if(n%2==0 && n%3==0)
        cout<<"The integer "<<n<<" is divisible by both 2 & 3";
    else if(n%2==0) 
        cout<<"The integer "<<n<<" is divisible by 2";
    else if(n%3==0)
        cout<<"The integer "<<n<<" is divisible by 3";
    else
        cout<<"The integer "<<n<<" is non-divisible by both 2 & 3";
    return 0;
}*/