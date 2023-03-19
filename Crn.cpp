#include "Crn.h"
int Crn::area(){
	return w*h;
}
int Crn::girth(){
	return 2*(w+h);
}
Crn::eva (int w1,int h1){
	w=w1;
	h=h1;
}
