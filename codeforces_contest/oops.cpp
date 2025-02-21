#include <iostream>
using namespace std;

class Parent
{
public:
  virtual void show() { cout << "Parent "; }
};

class Child : public Parent
{
public:
  void show() override { cout << "Child "; }
};

int main()
{
  Parent *p = new Parent();
  p->show();

  Child *c = new Child();
  c->show();

  p = c;
  p->show();

  return 0;
}
