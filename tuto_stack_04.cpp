#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string str;
        cin >> str;
        string Stack;
        for (char c : str)
        {
            if (!Stack.empty() && Stack.back() == c)
            {
                Stack.pop_back();
            }
            else
            {
                Stack.push_back(c);
            }
        }

        cout << (Stack.empty() ? "Null" : Stack) << endl;
    }

    return 0;
}
