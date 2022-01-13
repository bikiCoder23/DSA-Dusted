#include<iostream>
using namespace std;

//Q1.Complete Rectangle
/*int main()
{
    int m, n;
    cout<<"Enter the number of rows & columns respectively ";
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<" * ";
        cout<<"\n";
    }
    return 0;
}*/

//Q2.Hallow rectangle
/*int main()
{
    int m, n;
    cout<<"Enter the number of rows & columns respectively ";
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            if(i==1 || i==m || j==1 || j==n)
                cout<<" * ";
            else
                cout<<"   ";
        cout<<"\n";
    }
    return 0;
}*/

//Q3. Half pyramid
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" * ";
        cout<<"\n";
    }
    return 0;
}*/

//Q4. Inverted half pyramid
/*int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)  //for(j=1;j<=n-i+1;j++)
            cout<<" * ";
        cout<<"\n";
    }
    return 0;
}*/

//Q5. Pyramid in the right side(180 deg rotated)
/*int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)   
    {
        for(int j=1;j<=n;j++)
            if(j<=n-i)
                cout<<"   ";
            else
                cout<<" * ";
        cout<<"\n";    
    }
    return 0;
}*/  

//Q6. Pyramid of number column-wise
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" "<<j<<" ";
        cout<<"\n";
    }
    return 0;
}*/

//Q7. Pyramid of number column-wise(inverted)
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<" "<<j<<" ";
        cout<<"\n";
    }
    return 0;
}*/

//Q8. Pyramid of number row-wise
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" "<<i<<" ";
        cout<<"\n";
    }
    return 0;
}*/

//Q9. Floyd's Triangle
/*int main()
{    
    int n,d=1;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<d<<" ";
            d++;
        }
        cout<<"\n";
    }
    return 0;
}*/

//Q10. Butterfly Pattern
/*int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" * ";
        int gap=2*(n-i);    
        for(int j=1;j<=gap;j++)
            cout<<"   ";
        for(int j=1;j<=i;j++)
            cout<<" * ";
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<" * ";
        int gap=2*(n-i);    
        for(int j=1;j<=gap;j++)
            cout<<"   ";
        for(int j=1;j<=i;j++)
            cout<<" * ";
        cout<<"\n";
    }
    return 0;
}*/

//Q11. Binary(0-1) pattern
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            if((i+j)%2==0)
                cout<<" 1 ";
            else
                cout<<" 0 ";
        cout<<"\n";
    }
    return 0;
}*/

//Q12. Rhombus
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
                cout<<"   ";
        for(int j=1;j<=n;j++)
                cout<<" * ";
        cout<<"\n";
    }
    return 0;
}*/

//Q13. Normal triangle of numbers column-wise
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}*/

//Q14. Palindrome
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        int k=i;
        for(;j<=n;j++)
            cout<<" "<<k--;
        k=2;
        for(;j<=n+i-1;j++)
            cout<<" "<<k++;
        cout<<"\n";
    }
    return 0;
}*/

//Q15. Diamond Pattern
/*int main()
{
    int n;
    cout<<"Enter the number of rows req. ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        for(j=1;j<i;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        for(j=1;j<i;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}*/
        //Another approach
/*int main()
{
    int n;
    cout<<"Enter the number of rows req. ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}*/

//Q16. Zig-Zag Pattern
/*int main()
{
    int n;
    cout<<"Enter the length of the zig-zag ";
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}*/

//17. Hallow Diamond
/*int main()
{
    int n;
    cout<<"Enter the number of rows req. ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}*/

//Q18. Hollow Rhombus
/*int main()
{    
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
                cout<<"   ";
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}*/