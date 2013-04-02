#include "syscall.h"
int main()
{
	int j, k, r, s;
	j = OSAdd(15, 10);
	k = OSSub(j, 15);
	r = OSDiv(140, k);
	s = OSMul(112, r);
	Print("Hello, we are b99901012 & b99901089.\n", 37);
	Halt();
}
