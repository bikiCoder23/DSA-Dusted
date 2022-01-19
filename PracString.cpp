#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Q1. Conversion to upper/lower case alphabet.
/*string upperCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 'a' + 'A';
    }
    return str;

    // Another approach
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;

    //In built function
    //transform(str.begin(), str.end(), str.begin(), ::toupper)
}

string lowerCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] - 'A' + 'a';
    }
    return str;

    // Another approach
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;

    // In built function
    //transform(str.begin(), str.end(), str.begin(), ::tolower)
}

int main()
{
    string str;
    cout << "Enter a string ";
    getline(cin, str);
    // cout << "The string converted to upper case is " << upperCase(str);
    cout << "The string converted to lower case is " << lowerCase(str);
    return 0;
}*/

// Q2. Greatest number from a numeric string
/*string bigNum(string str)
{
    string ans(str.length(), ' ');
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
        ans[i] = str[str.length() - 1 - i];
    return ans;
}

int main()
{
    string str;
    cout << "Enter a numeric string ";
    cin >> str;
    // Another approach
    // sort(str.begin(), str.end(), greater<int>());
    // cout << "The greatest number formed from the input numeric string is " << str;
    cout << "The greatest number formed from the input numeric string is " << bigNum(str);
    return 0;
}*/

// Q3. Character with greatest frequency of occurance
/*void cNF(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (int i = 0; i < str.length(); i++)
        freq[str[i] - 'a']++;

    int mx = 0;
    char ch;
    for (int i = 0; i < 26; i++)
        if (freq[i] > mx)
        {
            mx = freq[i];
            ch = 'a' + i;
        }
    cout << "The character " << ch << " has the greatest frequency of " << mx;
    return;
}

int main()
{
    string str;
    cout << "Enter a string ";
    cin >> str;
    cNF(str);
    return 0;
}*/

// Q4. String pallindrome
/*bool pallindrome(string str)
{
    int first = 0, last = str.length() - 1;
    while (first < last)
    {
        if (str[first] == str[last])
        {
            first++;
            last--;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the string ";
    cin >> str;

    pallindrome(str);
    cout << "Is the word pallindrome? -> ";
    if (pallindrome(str))
        cout << std::boolalpha << pallindrome(str);
    else
        cout << std::boolalpha << pallindrome(str);
    return 0;
}*/

// Q5. Largest word in a sentence
/*void bigWord(string str)
{
    int leng = 0, maxL = 0, idx = 0, maxIdx = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (leng > maxL)
            {
                maxL = leng;
                maxIdx = idx;
            }
            leng = 0;
            idx = i + 1;
        }
        else
            leng++;
    }
    cout << "The largest word in the sentence is ";
    for (int i = 0; i < maxL; i++)
        cout << str[i + maxIdx];
    cout << " and its length is " << maxL;
    return;
}

int main()
{
    string str;
    cout << "Enter a string ";
    getline(cin, str);
    bigWord(str);
    return 0;
}*/