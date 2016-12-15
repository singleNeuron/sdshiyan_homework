#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#define zf 8844430
using namespace std;
long double s=0.08;
unsigned i = 0;
int main () {
	while (s<zf){
		s *= 2;
		i++;
	}
	cout<<i;
}
