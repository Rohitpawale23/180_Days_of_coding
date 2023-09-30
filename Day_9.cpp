#include <iostream>
using namespace std;

int main()
{

  // Pattern printing part 2

  // pattern 1
  int n;
  cout << "Input a number:";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  // pattern 2
  int n1;
  cout << "Input a number:";
  cin >> n1;

  for (int i = 1; i <= n1; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }

    cout << endl;
  }

  // pattern 3
  int n2;
  cout << "Input a number:";
  cin >> n2;

  for (int i = 1; i <= n2; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }

    cout << endl;
  }

  // pattern 4
  int n3;
  cout << "Input a number:";
  cin >> n3;

  for (int i = 1; i <= n3; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }

    cout << endl;
  }

  // pattern 5
  int num;
  cout << "Input a number:";
  cin >> num;

  for (int i = 0; i < num; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      char ans = 'a' + i;
      cout << ans << " ";
    }
    cout << endl;
  }

  // pattern 6
  int num1;
  cout << "Input a number:";
  cin >> num1;

  for (int i = num1; i >= 1; i--)
  {

    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // patter 7
  int num2;
  cout << "Input a number:";
  cin >> num2;

  for (int i = num2; i >= 1; i--)
  {

    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  // pattern 8
  int no;
  cout << "Input a number:";
  cin >> no;

  for (int i = no; i >= 1; i--)
  {

    for (int j = no; j >= i; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
