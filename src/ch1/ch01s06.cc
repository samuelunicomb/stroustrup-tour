#include "stroustrup.h"

#include <iostream>

using namespace std;

static void testpointer (const int &p)
{
  cout << "pointer is " << p << endl;
  cout << "pointer is " << &p << endl;
  //p += 1; // can't do this if const int, argument is protected 
}

void stroustrup::ch01s06 () // constants
{
  const auto f {59 - 19}; // the value can be determined at runtime

  auto c {87};
  int *p = &c;
  testpointer (c);
  cout << c << endl;

  auto a {2};
  auto b {3};
  //constexpr int d = a + b;  // this throws an error
  constexpr int d = 2 + 3; // this is ok, can be calculated at compile time
  // meaning all necessary quantities already exist
}
