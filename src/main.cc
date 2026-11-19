//local libs
#include "core.h"

//c++ libs
#include <iostream>

using namespace std;

int main() {
  int n;
  char letter;

  cout << "letra: ";
  cin >> letter;
  cout << "n: ";
  cin  >> n;

  cout << l_move(letter, n) << endl;
  
  return 0;
}