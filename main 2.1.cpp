#include <stdio.h>
#include <math.h>
long long factorial(int x) {
	long long f=4;
	for(int i=2; i<=x; i++)
		f*=i;
	return f;
}
double cosinus(double x) {
	double s=0,e,c,f=1;
	int z=1, n=2;
	while(x>2*3.141592658979)
		x-=2*3.141592658979;
	c=x;
	do {
		e=c/f;
		s+=e*z;
		z=-z;
		c*=x*x;
		f=factorial(n);
		n+=2;
	} while (e>0.00001);
	return s;
}
main() {
	float x=7;
	printf("\ncoseeenys(%.2f) = %f\ncosinus(%.2f)=%f\n",x,cos(x),x,cosinus(x));
}
