#include "core.h"

char l_move(char letter, int n) {
  for (int i = 0; i < n; ++i) {
    ++letter;
  }
  return letter;
}