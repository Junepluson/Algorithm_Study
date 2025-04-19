
// Online IDE - Code Editor, Compiler, Interpreter

#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string &input, string delimiter)
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);

    while (end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main()
{
    string fruit = "apple, melon, sky, blue";
    vector<string> fruits = split(fruit, ", ");
    for (const string& i : fruits)
    {
        cout << i << "\n";
    }

    return 0;
}
