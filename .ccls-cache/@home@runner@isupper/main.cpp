#include <cctype>
#include <iostream>
using namespace std;

int main() 
{
  char ch;
  cout << "enter letter" << endl;
  cin >> ch;
  
  if (isupper(ch))
    cout << "character is uppercase";
  else
    cout << "character is lowercase";
  
  return 0;
}