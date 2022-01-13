#include <iostream>
#include <algorithm>
using namespace std;

// Q1. Sum till n
/*int sum(int n)
{
    if (n == 0)
        return 0;
    int Sum = n + sum(n - 1);
    return Sum;
}

int main()
{
    int n;
    cout << "Enter the number till which sum is req. ";
    cin >> n;
    cout << "The sum till " << n << " is " << sum(n);
    return 0;
}*/

// Q2.Calculate n raise to the power p
/*int pow(int n, int p)
{
    if (p == 0)
        return 1;
    return n * pow(n, p - 1);
}

int main()
{
    int n, p;
    cout << "Enter the base number ";
    cin >> n;
    cout << "Enter the power raised ";
    cin >> p;
    cout << "The value of " << n << " raised to the power " << p << " is " << pow(n, p);
    return 0;
}*/

// Q3.  Factorial of n
/*int Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "The factorial of " << n << " is " << Factorial(n);
    return 0;
}*/

// Q4. Fibonacci
/*int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "The " << n << "th term is " << fibonacci(n);
    return 0;
}*/

// Q5. Check if the array is sorted or not
/*bool Check(int arr[], int n)
{
    if (n == 1)
        return true;
    return arr[0] < arr[1] && Check(arr + 1, n - 1);
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

    if (Check(arr, n))
        cout << "The input array is sorted";
    else
        cout << "The input array isnt sorted";
    return 0;
}*/

// Q6. Print the numbers  till n in decreasing order
/*void decP(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    decP(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number till which the series is req. ";
    cin >> n;
    cout << "The numbers in decreasing order till " << n << " is\n";
    decP(n);
    return 0;
}*/

// Q7. Print the numbers  till n in increasing order
/*void incP(int n)
{
    if (n == 0)
        return;
    incP(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter the number till which the series is req. ";
    cin >> n;
    cout << "The numbers in decreasing order till " << n << " is\n";
    incP(n);
    return 0;
}*/

// Q8. First and last occurance of an element in an array
/*int firstOccur(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return firstOccur(arr, n, i + 1, key);
}

int lastOccur(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (lastOccur(arr, n, i + 1, key) != -1)
        return lastOccur(arr, n, i + 1, key);
    if (arr[i] == key)
        return i;
    return -1;
}

void occur(int arr[], int n, int key)
{
    int i = 0;
    if (firstOccur(arr, n, i, key) == -1)
        cout << "Element is not present";
    else
        cout << "The first occurance of the element in the array is  " << firstOccur(arr, n, i, key) << endl;
    if (lastOccur(arr, n, i, key) == -1)
        cout << "Element occurs only once";
    else
        cout << "The last occurance of the element in the array is  " << lastOccur(arr, n, i, key) << endl;
    return;
}

int main()
{
    int n, key;
    cout << "Enter the number of elements req. ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        cout << "\n";
    }
    cout << "Enter the number to be searched ";
    cin >> key;
    occur(arr, n, key);
    return 0;
}*/

// Q9 Reverse a string using recursion
/*void reverse(string str)
{
    if (str.length() == 0)
        return;
    reverse(str.substr(1));
    cout << str[0];
}

int main()
{
    string str;
    cout << "Enter the string to be reversed ";
    getline(cin, str);
    cout<<"The reverse of the string is\n";
    reverse(str);
    return 0;
}*/

// Q9. Replace Pi in the string with 3.14
/*void PiConverter(string str)
{
    if (str.length() == 0)
        return;
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        PiConverter(str.substr(2));
    }
    else
    {
        cout << str[0];
        PiConverter(str.substr(1));
    }
}

int main()
{
    string str;
    cout << "Enter the string ";
    getline(cin, str);
    cout << "The Pi converted string is\n";
    PiConverter(str);
    return 0;
}*/

// Q10. Tower of Hanoi
/*void Hanoi(int n, char src, char helper, char dest)
{
    if (n == 0)
        return;
    Hanoi(n - 1, src, dest, helper);
    cout << "Move from " << src << " to " << dest << endl;
    Hanoi(n - 1, helper, src, dest);
}

int main()
{
    int n;
    cout << "Enter the number of elements present ";
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}*/

// Q11. Remove duplicates from a string
/*string remove(string str)
{
    if (str.length() == 0)
        return "";
    string str1 = remove(str.substr(1));
    if (str[0] == str1[0])
        return str1;
    return str[0] + str1;
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;
    sort(str.begin(), str.end());
    cout << "The duplicate free string is " << remove(str);
    return 0;
}*/

// Q12. Move all the 'x' in the input string to the end of string
/*string moveX(string str)
{
    if (str.length() == 0)
        return "";
    if (str[0] == 'x')
        return moveX(str.substr(1)) + str[0];
    return str[0] + moveX(str.substr(1));
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;
    cout << "The string with all the input 'x' moved to the end of string is " << moveX(str);
    return 0;
}*/

// Q13. Generate all the substrings in the input string
/*void allSubstr(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    allSubstr(str.substr(1), ans);
    allSubstr(str.substr(1), ans + str[0]);
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;
    allSubstr(str, "");
    return 0;
}*/

// Q14. Generate all the substrings along with its ASCII code in the input string
/*void asciiSubstr(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    int ascii = str[0];
    asciiSubstr(str.substr(1), ans);
    asciiSubstr(str.substr(1), ans + str[0]);
    asciiSubstr(str.substr(1), ans + to_string(ascii));
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;
    asciiSubstr(str, "");
    return 0;
}*/

// Q15. All possible word from phone digits
/*string Keypad[] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < Keypad[str[0] - '0'].length(); i++)
        keypad(str.substr(1), ans + Keypad[str[0] - '0'][i]);
}

int main()
{
    string str, ans = "";
    cout << "Enter the numbers in keypad ";
    cin >> str;
    keypad(str, "");
    return 0;
}*/

// Q16. Generate all possible permutations of the input string
/*void permute(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < str.length(); i++)
        permute(str.substr(0, i) + str.substr(i + 1), ans + str[i]);
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;
    permute(str, "");
    return 0;
}*/

// Q17. Number of possible paths to reach a ending point in Gameboard
/*int Gameboard(int start, int end)
{
    if (start == end)
        return 1;
    if (start > end)
        return 0;
    int count = 0;
    for (int i = 1; i <= 6; i++)
        count += Gameboard(start + i, end);
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the starting and ending points respectively ";
    cin >> a >> b;
    cout << "The number of possible ways to reach the end point is " << Gameboard(a, b);
    return 0;
}*/

// Q18. Number of possible paths to complete the Maze from an input starting point
/*int Maze(int size, int i, int j)
{
    if (i == size - 1 && j == size - 1)
        return 1;
    if (i > size - 1 || j > size - 1)
        return 0;
    return Maze(size, i + 1, j) + Maze(size, i, j + 1);
}

int main()
{
    int x, y, n;
    cout << "Enter the size of the Maze ";
    cin >> n;
    cout << "Enter the coordinates of the starting point ";
    cin >> x >> y;
    cout << "The number of possible ways to reach the end point is " << Maze(n, x, y);
    return 0;
}*/

// Q19. Number of possible ways to fill a larger tile with a smaller unit tile.
/*int Tilling(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return Tilling(n - 1) + Tilling(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of columns ";
    cin >> n;
    cout << "The number of possible ways to fill the larger tile with a smaller unit tile is " << Tilling(n);
    return 0;
}*/

// Q20. Friends pairing problem
/*int friends(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;
    return friends(n - 1) + friends(n - 2) * (n - 1);
}

int main()
{
    int n;
    cout << "Enter the total number of friends present ";
    cin >> n;
    cout << "The total of possible ways of pairing the friends are " << friends(n);
    return 0;
}*/

// Q20. 0-1 Knapsack
/*int knapsack(int value[], int weight[], int n, int Weight)
{
    if (n == 0 || Weight == 0)
        return 0;
    if (weight[n - 1] > Weight)
        return knapsack(value, weight, n - 1, Weight);
    return max((knapsack(value, weight, n - 1, Weight - weight[n - 1]) + value[n - 1]), +knapsack(value, weight, n - 1, Weight));
}

int main()
{
    int n, Weight;
    cout << "Enter the total number of items present in the list ";
    cin >> n;
    int value[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value[" << i << "] & weight[" << i << "] ";
        cin >> value[i] >> weight[i];
        cout << endl;
    }

    cout << "The maximum weight the knapsack can hold ";
    cin >> Weight;
    cout << "The maximum value of the items that can be added to the knapsack is " << knapsack(value, weight, n, Weight);
    return 0;
}*/

// Q21. Rat in a Maze using Backtracking
/*bool check(int **arr, int x, int y, int size)
{
    if (x < size && y < size && arr[x][y] == 1)
        return true;
    return false;
}

bool ratINmaze(int **arr, int x, int y, int size, int **soln)
{
    if ((x == (size - 1)) && (y == (size - 1)))
    {
        soln[x][y] = 1;
        return true;
    }
    if (check(arr, x, y, size))
    {
        soln[x][y] = 1;
        if (ratINmaze(arr, x + 1, y, size, soln))
            return true;
        if (ratINmaze(arr, x, y + 1, size, soln))
            return true;
        soln[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter the size of the maze(square) ";
    cin >> size;
    int **arr = new int *[size];
    for (int i = 0; i < size; i++)
        arr[i] = new int[size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "maze[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    int **soln = new int *[size];
    for (int i = 0; i < size; i++)
    {
        soln[i] = new int[size];
        for (int j = 0; j < size; j++)
            soln[i][j] = 0;
    }

    cout << "The required path in the maze is\n";
    if (ratINmaze(arr, 0, 0, size, soln))
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                cout << soln[i][j] << " ";
            cout << endl;
        }

    return 0;
}*/

// Q22. N-Queen using Backtracking
/*bool check(int **arr, int x, int y, int size)
{
    for (int i = 0; i < x; i++)
        if (arr[i][y] == 1)
            return false;

    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == 1)
            return false;
        i--;
        j--;
    }

    i = x, j = y;
    while (i >= 0 && j < size)
    {
        if (arr[i][j] == 1)
            return false;
        i--;
        j++;
    }
    return true;
}

bool nQueen(int **arr, int x, int size)
{
    if (x >= size)
        return true;

    for (int j = 0; j < size; j++)
        if (check(arr, x, j, size))
        {
            arr[x][j] = 1;
            if (nQueen(arr, x + 1, size))
                return true;
            arr[x][j] = 0;
        }
    return false;
}

int main()
{
    int size;
    cout << "Enter the size of the board(square) ";
    cin >> size;
    int **arr = new int *[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++)
            arr[i][j] = 0;
    }
    if (nQueen(arr, 0, size))
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    return 0;
}*/

// Q23. Permutations for given n and r
/*int permute(int n, int r)
{
    if (r == 0)
        return 1;
    if (n >= r && r > 0)
        return n * permute(n - 1, r - 1);
}

int main()
{
    int n, r;
    cout << "Enter the value for n ";
    cin >> n;
    cout << "Enter the value for r ";
    cin >> r;
    cout << "The value for nPr is " << permute(n, r);
    return 0;
}*/

// Q24. Combination for given n and r
/*int combination(int n, int r)
{
    if (n == r)
        return (1);
    if (r == 0)
        return (1);
    if (n > r && r > 0)
        return (combination(n - 1, r) + combination(n - 1, r - 1));
}

int main()
{
    int n, r;
    cout << "Enter the value for n ";
    cin >> n;
    cout << "Enter the value for r ";
    cin >> r;
    cout << "The value for nCr is " << combination(n, r);
    return 0;
}*/

// Q25. Generate all the possible permutations of an input array
void arrPermute(string arr, int I, int n)
{
    if (I == n - 1)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for (int i = I; i < n; i++)
    {
        swap(arr[i], arr[I]);
        arrPermute(arr, I + 1, n);
        swap(arr[i], arr[I]);
    }

    return;
}

int main()
{
    string arr;
    cout << "Enter the input string ";
    getline(cin, arr);
    int n = arr.size();
    cout << "The number of permutations of the input array is\n";
    arrPermute(arr, 0, n);
    return 0;
}