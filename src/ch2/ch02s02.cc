#include "stroustrup.h"

#include <iostream>

using namespace std;

static struct Vector 
{
  int sz;       // number of elements
  double *elem; // pointer to elements
};

static void vector_init (Vector& v, int s) 
{
  v.elem = new double[s]; // allocate an array of s doubles
  v.sz = s;
}

void stroustrup::ch02s02 () // structures
{
  int s = 3;

  Vector v;
  vector_init (v, s);

  for (int i = 0; i != s; ++i) cin >> v.elem[i];

  double sum = 0;

  for (int i = 0; i != s; ++i) sum += v.elem[i];

  cout << "sum is " << sum << '\n';
  
  Vector *p = &v;

  cout << p->sz << '\n';
}
