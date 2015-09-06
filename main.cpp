#include <iostream>
#include <vector>
#include "something.h"
using namespace std;

int main () {
    vector<int> a {1, 2, 3};
    for (int i = 4; i < 11; i++) a.push_back(i);
    for (int some : a) cout << some << endl;

    Something one;
    cout << one.getNum() << endl;
    one.setNum(5);
    cout << one.getNum() << endl;
    one.setNum(-1);
    cout << one.getNum() << endl;
}
