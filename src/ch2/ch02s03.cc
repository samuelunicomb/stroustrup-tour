#include "stroustrup.h"

#include <iostream>

using namespace std;

static class Vector
{
  public:
    Vector (int s) : elem {new double[s]}, sz{s} // constructor 
    {
      // nothing
    }
    
    double& operator[] (int i) // element access, subscripting
    {
      return elem[i];
    }

    int size ()
    {
      return sz;
    }

  private:
    double *elem; // pointer to the elements

    int sz; // the number of elements
};

void stroustrup::ch02s03 () // classes
{
  class Vector 
  { 
    public:
      Vector (int s) :elem {new double[s]}, sz{s} {} 
      double& operator[](int i) { return elem[i]; } 
      int size() { return sz; }

    private:
      double *elem; 
      int sz;
  };

  Vector v (6);
}
