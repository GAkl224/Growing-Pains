#include <iostream>

using namespace std;

int main()
{
  int my_var;
  int *my_ptr;
  int **my_ptr_ptr;

  my_var = 3000;

  my_ptr = &my_var;
  my_ptr_ptr = &my_ptr;

  cout << "Value of my_var: " << my_var << endl;
  cout << "Value of &my_var: " << &my_var << endl;

  cout << endl;

  cout << "Value of my_ptr: " << my_ptr << endl;
  cout << "Value of &my_ptr: " << &my_ptr << endl;
  cout << "Value of *my_ptr: " << *my_ptr << endl;

  cout << endl;

  cout << "Value of my_ptr_ptr: " << my_ptr_ptr << endl;
  cout << "Value of &my_ptr_ptr: " << &my_ptr_ptr << endl;
  cout << "Value of *my_ptr_ptr: " << *my_ptr_ptr << endl;
  cout << "Value of **my_ptr_ptr: " << **my_ptr_ptr << endl;

  return 0;
}
