#include "stroustrup.h"

#include <iostream>
#include <iomanip>
#include <string>

#include <vector>

using namespace std;

static string cat (string_view sv1, string_view sv2)
{
  //string res (sv1.length () + sv2.length ());
  string res;

  return res;
}

void stroustrup::ch08 ()
{
  {
    cout << "hello\n";

    vector<int> a (100, 0);

    cout << &a[0] << endl;
    cout << &a << endl;
  }

  //{
  //  int a = 0;
  //  cin >> a;

  //  const int b = a; // b is determined at run time, is constant thereafter
  //  cout << "a is " << a << endl;
  //  cout << "b is " << b << endl;

  //  constexpr int c = 2;
  //}

  //a += 4;
  //{
  //  string s;
  //  assert (s.empty () && (s.length () == 0) && (s.size () == 0));
  //  cout << s.capacity () << endl;
  //}
  //{
  //  string s (4, '=');
  //  cout << quoted (s) << endl;
  //}

  //string s (5);
  //{
  //  string name {"Ambre Mercier"};

  //  string s = name.substr (6,10);
  //  
  //  name.replace (6, 10, "Unicomb");
  //  name[0] = tolower (name[0]);
  //  name[6] = tolower (name[6]);
  //  cout << name << endl;
  //  //cout << s << endl;
  //}
}
