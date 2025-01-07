#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverseString(string thisString)
{
  stack<char> stringStack;
  string stringReversed;

  size_t size_thisString = thisString.size();

  for (int i = 0; i < size_thisString; i++)
  {
    char element = thisString[i];
    stringStack.push(element);
  }

  for (int i = 0; i < size_thisString; i++)
  {
    stringReversed += stringStack.top();
    stringStack.pop();
  }

  return stringReversed;
}

int main()
{
  string inputString;
  cout << "Please input a string: " << flush;
  getline(cin, inputString);
  cout << "This is the string reversed: " << flush;
  cout << reverseString(inputString) << endl;

  return 0;
}