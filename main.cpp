#include <iostream>
#include "date.h"
using namespace std;

int main() {
  Date date(22, 3, 2016);
  date.printDate();
  cout<<"The next 40 days:\n";
  date.increaseDays(40);
  date.printDate();
}