//============================================================================
// Name        : cuadernillo1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "tcomplejo.h"
using namespace std;

int main() {
	TComplejo a(1,1),b(2,2),c(3,3);
	a=b;
	a=b*2+c*3;

	cout << a;
}
