#include <iostream>
#include <vector>

using namespace std;

class Vector
{
  public:
    Vector ()
    {
      std::cout << "hi\n";

      c = 2;
    }

    Vector (int a)
    {
      c = a;

      if (a < 0)
      {
        throw std::length_error{"Vector constructor: negative size"};
      }
    }

    int c;
};

int sum (const vector<int> &v)
{
  int s = 0;
  for (const int i : v) s += i;
  return s;
}

int main ()
{
  Vector v {6};

  std::cout << v.c << '\n';

  vector<int> fib = {1, 2, 3, 5, 8, 13, 21};

  std::cout << sum (fib) << '\n';
}
