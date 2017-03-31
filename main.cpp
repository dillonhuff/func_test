#include <iostream>

using namespace std;

class myclass {
public:
  string func() const { return __func__; }
  string pretty_function() const { return __PRETTY_FUNCTION__; }
};

class otherclass {
public:
  string func() const { return __func__; }
  string pretty_function() const { return __PRETTY_FUNCTION__; }
};

int main() {
  cout << __func__ << endl;
  cout << __PRETTY_FUNCTION__ << endl;

  myclass c;
  cout << c.func() << endl;
  cout << c.pretty_function() << endl;

  otherclass oc;
  cout << oc.func() << endl;
  cout << oc.pretty_function() << endl;

  return 0;
}
