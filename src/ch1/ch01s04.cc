#include "stroustrup.h"

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void stroustrup::ch01s04 () // types, variables and arithmetic
{
  cout << sizeof (42) << endl;

  cout << 0b1010 << endl;

  cout << +1 << endl;

  cout << "binary" << endl;
  cout << 0b0000 << endl;
  cout << 0b0001 << endl;
  cout << 0b0010 << endl;
  cout << 0b0011 << endl;
  cout << 0b0100 << endl;
  cout << 0b0101 << endl;
  cout << 0b0110 << endl;
  cout << 0b0111 << endl;

  cout << "bitwise operations" << endl;
  cout << (0b0101 & 0b1101) << endl;
  cout << (0b0101 | 0b1101) << endl;
  cout << (0b0101 ^ 0b1101) << endl;
  cout << ~0b0101 << endl;

  cout << "initialising" << endl;
  {double d {3.1};
  cout << d << endl;
  cout << double {3.1} << endl;}

  vector<int> a {-1,0,2,4,6};

  //int b {3.7}; // can't do this, so use braces for safety

  {
    auto b = true;
    auto c = 'x';
    auto i = 123;
    auto z = sqrt (3.4);
    auto B {true};
  }

  {
    auto c {1}; 

    cout << c << endl;
  }
}
