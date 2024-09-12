#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> numbers;
    cout <<"Size: "  << numbers.size()<< endl;

    if(numbers.empty())
    {
        cout <<"Stack is empty"<< endl;
    }
    numbers.push(8);
    cout <<"Size: "  << numbers.size()<< endl;
    if(!numbers.empty()){
         cout <<"Stack is not empty"<< endl;
    }
  cout <<"top: " << numbers.top();
numbers.push(9);
numbers.push(5);

cout << endl;
cout << "top: "<< numbers.top()<< endl;
cout <<"size " << numbers.size()<< endl;
    return 0;
}
