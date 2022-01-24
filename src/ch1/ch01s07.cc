#include "stroustrup.h"

#include <iostream>
#include <vector>

using namespace std;

void stroustrup::ch01s07 () // pointers, arrays and references
{
  vector<int> a {1, 2, 5};
  //cout << &a << endl;
  //cout << &a[0] << endl;
  //cout << &a[1] << endl;
  //cout << &a[2] << endl;

  int b[] {6, 2, 5, 1};

  cout << "  " << &b << endl; // wowwww &b and &b[0] are the same... makes sense!
  cout << b[0] << " " << &b[0] << endl;
  cout << b[1] << " " << &b[1] << endl;
  cout << b[2] << " " << &b[2] << endl;
  cout << b[3] << " " << &b[3] << endl;

  //int *p = &b[0];                           // ok
  //int *p = &b;                              // not ok... why can we get &b, which is the same as &b[0], but not this?
  int *p[] = {&b[0], &b[1], &b[2], &b[3]};  // ok

  cout << "p version" << endl;
  cout << p[0] << " " << &p[0] << " " << *p[0] << endl;
  cout << p[1] << " " << &p[1] << " " << *p[1] << endl;
  cout << p[2] << " " << &p[2] << " " << *p[2] << endl;
  cout << p[3] << " " << &p[3] << " " << *p[3] << endl;

  int v[3];
  cout << "uninitialised v" << endl;
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;

  int u[3] = {9, 8, 5};
  auto w = u;
  
  cout << "for-range, auto1\n";
  for (auto x : u) cout << x << '\n';

  cout << "for-range, auto2\n";
  for (auto x : {-3, 2, 5, 9}) cout << x << '\n';

  cout << "for-range, auto3\n";
  for (auto &x : u) ++x;
  
  cout << "for-range, auto4\n";
  for (auto x : u) cout << x << '\n';
}
