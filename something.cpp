#include <iostream>
#include "something.h"
using namespace std;

Something::Something() : num(-1) { cout << "Something is instantiated\n"; }

int Something::getNum () { return num; }

void Something::setNum (int n) { if (n > 0) num = n; }
