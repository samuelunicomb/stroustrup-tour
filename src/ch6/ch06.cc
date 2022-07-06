#include "stroustrup.h"

#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Vector {
  private:
    T* elem;

    int sz;

  public:
    explicit Vector (int s);
    
    ~Vector () {delete[] elem;}

    T& operator[] (int i);
    
    const T& operator[] (int i) const;
    
    int size () const {return sz;}

    
};

template<typename T>
Vector<T>::Vector(int s)
{
  //if (s<0) throw Negative_size{};

  elem = new T[s];
  sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
  if (i < 0 || size() <= i)
  {
    throw out_of_range{"Vector::operator[]"};
  }
  return elem[i];
}

template<typename T>
T* begin (Vector<T>& x) 
{
  return x.size() ? &x[0] : nullptr;
}

template<typename T>
T* end (Vector<T>& x) 
{
  return x.size() ? &x[0]+x.size() : nullptr;
}

void stroustrup::ch06 ()
{
  Vector<int> a (5);

  a[0] = 0;
  a[1] = 1;
  a[2] = 4;
  a[3] = 9;
  a[4] = 16;

  //for (auto& i : a)
  //{
  //  cout << i << endl;
  //}
}
