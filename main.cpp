#include <iostream>
#include "Crn.h"
using namespace std;
int main() {
	Crn x;
	x.eva(3,2);
	cout<<x.area()<<endl;
	cout<<x.girth()<<endl;
	return 0;
}
