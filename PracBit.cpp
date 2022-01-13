#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Basics

// 1. Getbit
/*bool getBit(int num, int pos)
{
    return (num & (1 << pos));
}

int main()
{
    int num, pos;
    cout << "Enter the number and position to check for bit ";
    cin >> num >> pos;
    cout << "Is bit present at the given position? ->";
    if (getBit(num, pos))
        cout << std::boolalpha << getBit(num, pos);
    else
        cout << std::boolalpha << getBit(num, pos);
    return 0;
}*/

// 2. Setbit
/*int setBit(int num, int pos)
{
    return (num | (1 << pos));
}

int main()
{
    int num, pos;
    cout << "Enter the number and position to set bit ";
    cin >> num >> pos;
    cout << "The value after setting bit is " << setBit(num, pos);
    return 0;
}*/

// 3. Clearbit
/*int clearBit(int num, int pos)
{
    return (num & ~(1 << pos));
}

int main()
{
    int num, pos;
    cout << "Enter the number and position to clear bit ";
    cin >> num >> pos;
    cout << "The value after clearing bit is " << clearBit(num, pos);
    return 0;
}*/

// 4. Updatebit
/*int updateBit(int num, int pos, int value)
{
    num = num & ~(1 << pos);
    return (num | (value << pos));
}
int main()
{
    int num, pos, value;
    cout << "Enter the number and position to update bit ";
    cin >> num >> pos;
    cout << "Value to be updated with(0/1) ";
    cin >> value;
    cout << "The value after clearing bit is " << updateBit(num, pos, value);
    return 0;
}*/

// Q1. Given number is power of two
/*bool check(int num)
{
    if (num > 0)
        return !(num & num - 1);
    else
        return num;
}
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    cout << "Is the number is power of two? ->";
    if (check(num))
        cout << std::boolalpha << check(num);
    else
        cout << std::boolalpha << check(num);
    return 0;
}*/

// Q2. Count the number of ones in the binary represation of the given number
/*int countOne(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n & (n - 1);
    }
    return (count);
}

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    cout << "The number of ones in the binary represation of " << num << " are " << countOne(num);
    return 0;
}*/

// Q3. All possible subset of a set
/*void subSet(string set)
{
    for (int i = 0; i < (1 << set.length()); i++)
    {
        cout << "{";
        for (int j = 0; j < set.length(); j++)
            if (i & (1 << j))
                cout << set[j];
        cout << "}\n";
    }
    return;
}
int main()
{
    string set;
    cout << "Enter the elements of the set(continuously) ";
    cin >> set;
    cout << "All the possible subset of the input set are\n";
    subSet(set);
    return 0;
}*/

// Q5. Unique number in an array
/*int unique(int arr[], int n)
{
    int Xor = 0;
    for (int i = 0; i < n; i++)
        Xor ^= arr[i];
    return Xor;
}

int main()
{
    int n;
    cout << "Enter the number of elements req. ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }
    cout << "The unique element from the given array is " << unique(arr, n);
    return 0;
}*/

// Q6. Two Unique number in an array
/*bool getBit(int num, int pos)
{
    return (num & (1 << pos));
}

void twoUnique(int arr[], int n)
{
    int Xor = 0;
    for (int i = 0; i < n; i++)
        Xor ^= arr[i];

    int curXor = Xor, getbit = 0, pos = 0;
    while (getbit != 1)
    {
        getbit = Xor & 1;
        pos++;
        Xor >>= 1;
    }

    int newXor = 0;
    for (int i = 0; i < n; i++)
        if (getBit(arr[i], pos - 1))
            newXor = newXor ^ arr[i];

    cout << "The 2-unique element from the given array is " << newXor << " & " << (curXor ^ newXor);
    return;
}

int main()
{
    int n;
    cout << "Enter the number of elements req. ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }
    twoUnique(arr, n);
    return 0;
}*/

// Q7. Unique element in an array where all the other elements are present thrice
/*bool getBit(int num, int pos)
{
    return (num & (1 << pos));
}

int setBit(int num, int pos)
{
    return (num | (1 << pos));
}

int unique_inThree(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (getBit(arr[j], i))
                count++;
        if (count % 3 != 0)
            result = setBit(result, i);
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the number of elements req. ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }
    cout << "The unique element in the array where all the other elements are present thrice is " << unique_inThree(arr, n);
    return 0;
}*/