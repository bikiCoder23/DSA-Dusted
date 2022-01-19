#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Q1. Max. & Min. for user input array
/*int main()
{
    int n, max, min;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }
    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>= max)
            max=arr[i];
        if(arr[i]<= min)
            min=arr[i];
    }

    cout<<"The maximum number is "<<max;
    cout<<"\nThe minimum number is "<<min;
    return 0;
}*/

// Q2. Running sum
/*int main()
{
    int n, sum=0;
    cout<<"Enter the number of elements req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        cout<<sum<<" ";
    }
    return 0;
}*/

// Q3. Kids with candies
/*int main()
{
    int n, extraCandies, max;
    cout<<"Enter the number of kids ";
    cin>>n;
    cout<<"Enter the number of candies you have ";
    cin>>extraCandies;

    int candies[n];
    cout<<"No. of candies with ";
    for(int i=0;i<n;i++)
    {
        cout<<"Kid["<<i+1<<"] = ";
        cin>>candies[i];
        cout<<"\n";
    }

    max=candies[0];
    for(int i=0;i<n;i++)
        if(candies[i]>= max)
            max=candies[i];

    bool result[n];
    for(int i=0;i<n;i++)
    {
        if(candies[i]+extraCandies>=max)
            result[i]=true;
        else
            result[i]=false;
    }

    for(int i=0;i<n;i++)
    {
        cout.setf(ios :: boolalpha);
        cout<<result[i]<<" ";
    }
    return 0;
}*/

// Q4. Linear Search
/*int linearSearch(int[], int, int);

int main()
{
    int n, key;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The element to be searched ";
    cin>>key;
    linearSearch(arr, n, key);
    if(linearSearch(arr, n, key)==-1)
        cout<<"Invalid Choice";
    else
        cout<<"The required index is "<<linearSearch(arr, n, key);
    return 0;
}

int linearSearch(int a[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return(i);
    }
    return(-1);
}*/

// Q5. Binary Search
/*int binarySearch(int[], int, int);

int main()
{
    int n, key;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The element to be searched ";
    cin>>key;
    binarySearch(arr, n, key);
    if(binarySearch(arr, n, key)==-1)
        cout<<"Invalid Choice";
    else
        cout<<"The required index is "<<binarySearch(arr, n, key);
    return 0;
}

int binarySearch(int a[], int n, int key)
{
    int first=0, last=n;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(a[mid]==key)
            return(mid);
        else if(a[mid]>key)
            last=mid-1;
        else
            first=mid+1;
    }
    return(-1);
}*/

// Q6. Selection sort
/*void sSort(int [], int);

int main()
{
    int n;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The unsorted array is ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nThe sorted array is ";
    sSort(arr, n);
    return 0;
}

void sSort(int arr[], int n)
{
    int s;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j])
            {
                s=arr[i];
                arr[i]=arr[j];
                arr[j]=s;
            }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return;
}*/

// Q7. Bubble sort
/*void bSort(int [], int);

int main()
{
    int n;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The unsorted array is ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nThe sorted array is ";
    bSort(arr, n);
    return 0;
}

void bSort(int arr[], int n)
{
    int s;
    for(int i=0;i<n;i++)
    {
        for (int j=0; j<n-i; j++)
            if (arr[j]>arr[j+1])
            {
                s=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=s;
            }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return;
}*/

// Q8. Insertion sort
/*void iSort(int [], int);

int main()
{
    int n;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The unsorted array is ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nThe sorted array is ";
    iSort(arr, n);
    return 0;
}

void iSort(int arr[], int n)
{
    int s;
    for(int i=1;i<n;i++)
    {
        s=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>s)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=s;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return;
}
*/

// Q9. DNF sort/0-1-2 sort
/*void Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnfSort(int arr[], int low, int mid, int high)
{
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            Swap(arr, low, mid);
            low++;
            mid++;
        }
        if (arr[mid] == 1)
            mid++;
        if (arr[mid] == 2)
        {
            Swap(arr, mid, high);
            high--;
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the number of (0/1/2) req. ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }

    dnfSort(arr, 0, 0, n - 1);
    cout << "The sorted array is\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/

// Q10. Wave sort
/*void Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
            Swap(arr, i, i - 1);
        if ((arr[i] > arr[i + 1]) && (i < n - 1))
            Swap(arr, i, i + 1);
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the number of req. ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }

    waveSort(arr, n);
    cout << "The wavely sorted array is\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/

// Q11. Max till i
/*void  maxTill_i(int [], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Enter value for 'i' ";
    cin>>i;
    if(i<=n)
    {
        cout<<"The input array is ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\nThe max till 'i' is ";
        maxTill_i(arr, i);
    }
    else
        cout<<"Invalid input";
    return 0;
}

void maxTill_i(int arr[], int i)
{
    int mx=arr[0];
    for(int j=0;j<i;j++)
    {
        mx=max(mx,arr[j]);
        cout<<mx<<" ";
    }
    return;
}*/

// Q12. Sum of all the sub arrays
/*void sum_subarrays(int [], int );

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The sum of all the sub arrays are\n";
    sum_subarrays(arr, n);
    return 0;
}

void sum_subarrays(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i+1<<"] ";
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
    return;
}*/

// Q13. Longest arithmatic subarray
/*int LASA(int [], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The longest arithmatic subarray is "<<LASA(arr, n);
    return 0;
}

int LASA(int arr[], int n)
{
    int d=arr[1]-arr[0], leng=2, count=2 , i;
    for(i=2;i<ni++)
    {
        if(d==arr[i]-arr[i-1])
            leng++;
        else
        {
            d=arr[i]-arr[i-1];
            leng=2;
        }
        count=max(count,leng);
    }
    return(count);
}*/

// Q14. Record breakers
/*int RBD(int [], int);

int main()
{
    int n, i;
    cout<<"Enter the number of days observed ";
    cin>>n;

    int arr[n+1];
    arr[n]=-1;
    for(i=0;i<n;i++)
    {
        cout<<"Visitors in day["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    if(n==1)
    {
        cout<<"1";
        return 0;
    }

    cout<<"The no. Record breaking day is "<<RBD(arr, n);
    return 0;
}

int RBD(int arr[],int n)
{
    int mx=arr[0], rbd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
            rbd++;
        mx=max(mx, arr[i]);
    }
    return(rbd);
}*/

// Q15. First repeating element's index
/*int index(int [], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"The index of the first repeating element is "<<index(arr, n);
    return 0;
}

int index(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j])
                return(i+1);
    }
}*/

// Q16. Subarray with given sum
/*void subsum(int [], int, int);

int main()
{
    int n, i, s;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i+1<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }
    cout<<"Enter the sum req.";
    cin>>s;
    subsum(arr, n, s);
    return 0;
}

void subsum(int a[], int n, int s)
{
    int sum, i, j;
    for(i=0; i<n; i++)
    {
       sum=0;
       while(sum<s)
           for(int j=i;j<n;j++)
           {
                sum+=a[j];
                if(sum==s)
                {
                    cout<<"The starting and ending index of the req. sub-array are "<<i+1<<" & "<<j+1;
                    return;
                }
           }
    }
    cout<<"No such Sub-array was found!";
    return;
}*/

// Q17. Smallest positive missing number
/*int missing(int[], int);

int main()
{
    int n, i;
    cout << "Enter the number of element req. ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }

    cout << "The smallest positive missing number is " << missing(arr, n);
    return 0;
}

int missing(int arr[], int n)
{
    int miss = -99;
    bool found[n];
    for (int i = 0; i < n; i++)
        found[i] = false;
    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            found[arr[i]] = true;
    for (int i = 1; i < n; i++)
        if (found[i] == false)
        {
            miss = i;
            break;
        }
    return miss;
}*/

// Q18. Printing all possible sub array
/*void allpossiblesubarr(int[],int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"All possible sub-array are\n";
    allpossiblesubarr(arr,n);
    return 0;
}

void allpossiblesubarr(int a[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
                cout<<a[k]<<" ";
            cout<<"\n";
        }
    return;
}*/

// Q19. Max sub-array sum -> O(n^3)
/*int maxsumsubarr(int[], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Maximum sum of a sub-array is "<<maxsumsubarr(arr,n);
    return 0;
}

int maxsumsubarr(int arr[], int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
                sum+=arr[k];
            mx=max(mx,sum);
        }
    return(mx);
}*/

// Optimised to O(n^2)
/*int maxsumsubarr(int[], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Maximum sum of a sub-array is "<<maxsumsubarr(arr,n);
    return 0;
}

int maxsumsubarr(int arr[], int n)
{
    int mx=INT_MIN, sum=0;

    int cumSum[n];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        cumSum[i]=sum;
    }

    for(int i=0;i<n;i++)
    {
        int sum1=0;
        for(int j=i;j<n;j++)
        {
            sum1=cumSum[j]-cumSum[i];
            mx=max(mx,sum1);
        }
    }

    return(mx);
}*/

// Optimised to O(n) -> Kadane's algo
/*int maxsumsubarr(int[], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Maximum sum of a sub-array is "<<maxsumsubarr(arr,n);
    return 0;
}

int maxsumsubarr(int arr[], int n)
{
    int mx=INT_MIN, sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
            sum=0;
        mx=max(mx,curSum);
    }

    return(mx);
}*/

// Q20. Max circular sub-array sum
/*int maxcsumsubarr(int[], int);

int main()
{
    int n, i;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Maximum sum of a sub-array is "<<maxcsumsubarr(arr,n);
    return 0;
}

int maxcsumsubarr(int arr[], int n)
{
    int mx=INT_MIN, sum=0, curSum=0, rev[n];

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        rev[i]=-arr[i];

        curSum+=rev[i];
        if(curSum<0)
            curSum=0;
        mx=max(mx,curSum);
    }

    int wrapSum=sum+mx;
    return max(mx,wrapSum);
}*/

// Q21. Pair sum
/*bool pairSum(int[], int, int);

int main()
{
    int n, i, s;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    cout<<"Enter the req. sum ";
    cin>>s;

    if(pairSum(arr, n, s)==1)
        cout<<"The array contains pair sum for the given number";
    else
        cout<<"The array doesn't contains pair sum for the given number";

    return 0;
}

bool pairSum(int arr[], int n, int s)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]+arr[j]==s)
            {
                cout<<"Indices are "<<i<<" "<<j<<"\n";
                return true;
            }
    return false;
}*/

// Optimised to O(n)
/*int *iSort(int arr[], int n)
{
    int s;
    for(int i=1;i<n;i++)
    {
        s=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>s)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=s;
    }

    return(arr);
}

bool pairSum(int arr[], int n, int s)
{
    int first=0, last=n-1;
    while(first<last)
    {
        if(arr[first]+arr[last]<s)
            first++;
        else if(arr[first]+arr[last]>s)
            last--;
        else if(arr[first]+arr[last]==s)
            return true;
    }
    return false;
}

int main()
{
    int n, i, s;
    cout<<"Enter the number of element req. ";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        cout<<"\n";
    }

    int *a=iSort(arr, n);

    cout<<"Enter the req. sum ";
    cin>>s;

    if(pairSum(a, n, s)==1)
        cout<<"The array contains pair sum for the given number";
    else
        cout<<"The array doesn't contains pair sum for the given number";

    return 0;
}*/

// Q22. Linear Search in 2-D array(matrix)
/*bool Search(int arr[][5], int m, int n, int key)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(arr[i][j]==key)
                return true;
    return false;
}

int main()
{
    int m, n, key;
    cout<<"Enter the number of ,ms ";
    cin>>m;
    cout<<"Enter the number of columns ";
    cin>>n;

    int arr[m][5];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"arr["<<i<<j<<"] = ";
            cin>>arr[i][j];
        }
        cout<<"\n";
    }

    cout<<"Enter the number to be searched ";
    cin>>key;

    if(Search(arr, m, n, key))
        cout<<"Is the number present? -> "<<std::boolalpha<<Search(arr, m, n, key);
    else
        cout<<"Invalid Choice";
    return 0;
}*/

// Optimised to O(n) for a sorted matrix
/*bool search(int **arr, int m, int n, int key)
{
    int i = 0, j = n - 1;
    while (i < m && j >= 0)
    {
        if (arr[i][j] == key)
            return true;
        if (arr[i][j] > key)
            j--;
        else
            i++;
    }
    return false;
}

int **sort(int **arr, int m, int n)
{
    int i, j, temp;

    for (i = 0; i < m * n - 1; ++i)
        for (j = 0; j < m * n - 1 - i; ++j)
            if (arr[j / n][j % n] > arr[(j + 1) / n][(j + 1) % n])
            {

                temp = arr[(j + 1) / n][(j + 1) % n];
                arr[(j + 1) / n][(j + 1) % n] = arr[j / n][j % n];
                arr[j / n][j % n] = temp;
            }
    return arr;
}

int main()
{
    int m, n;
    cout << "Enter the number of rows ";
    cin >> m;
    cout << "Enter the number of columns ";
    cin >> n;
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    arr = sort(arr, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "  ";
        cout << endl;
    }

    int key;
    cout << "Enter the number to be searched ";
    cin >> key;

    if (search(arr, m, n, key))
        cout << "Is the number present? -> " << std::boolalpha << search(arr, m, n, key);
    else
        cout << "Invalid Choice";
    return 0;
}*/

// Q23. Spiral Order matrix traversal
/*void spiral(int arr[][10], int m, int n)
{
    int rs=0, re=m-1, cs=0, ce=n-1;
    while(rs<=re && cs<=ce)
    {
        for(int i=cs; i<=ce; i++)
            cout<<arr[rs][i]<<" ";
        rs++;
        for(int i=rs; i<=re; i++)
            cout<<arr[i][ce]<<" ";
        ce--;
        for(int i=ce; i>=cs; i--)
            cout<<arr[re][i]<<" ";
        re--;
        for(int i=re; i>=rs; i--)
            cout<<arr[i][cs]<<" ";
        cs++;
    }
    return;
}

int main()
{
    int m, n;
    cout<<"Enter the number of ,ms ";
    cin>>m;
    cout<<"Enter the number of columns ";
    cin>>n;

    int arr[m][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"arr["<<i<<j<<"] = ";
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
            cout<<"arr["<<i<<j<<"] = "<<arr[i][j];
        cout<<"\n";
    }
    cout<<"The spiral traversal is ";
    spiral(arr, m, n);
    return 0;
}*/

// Q24. Transpose of a matrix
/*void transpose(int arr[][10], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=arr[j][i];
            cout<<" arr["<<i<<j<<"] = "<<arr[j][i];
        }
        cout<<"\n";
    }
    return;
}

int main()
{
    int m, n;
    cout<<"Enter the number of ,ms ";
    cin>>m;
    cout<<"Enter the number of columns ";
    cin>>n;

    int arr[m][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"arr["<<i<<j<<"] = ";
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
            cout<<" arr["<<i<<j<<"] = "<<arr[i][j];
        cout<<"\n";
    }
    cout<<"The transpose is \n";
    transpose(arr, m, n);
    return 0;
}*/

// Q25. Multiplication of matrices
/*void multiply(int a[][10], int b[][10], int m, int n, int o)
{
    int c[m][o];
    for(int i=0;i<n;i++)
        for(int j=0;j<o;j++)
            c[i][j]=0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<o; j++)
        {
            for(int k=0; k<n; k++)
                c[i][j]+=a[i][k]*b[k][j];
            cout<<" c["<<i<<j<<"] = "<<c[i][j];
        }
        cout<<"\n";
    }
    return;
}

int main()
{
    int m, n, o;
    cout<<"Enter the number of rows ";
    cin>>m;
    cout<<"Enter the number of columns(matrix 1) ";
    cin>>n;
    cout<<"Enter the number of columns(matrix 2) ";
    cin>>o;

    int a[m][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"a["<<i<<j<<"] = ";
            cin>>a[i][j];
        }
        cout<<"\n";
    }

    int b[n][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<o;j++)
        {
            cout<<"b["<<i<<j<<"] = ";
            cin>>b[i][j];
        }
        cout<<"\n";
    }
    cout<<"The multiplied matrix is \n";
    multiply(a, b, m, n, o);
    return 0;
}*/