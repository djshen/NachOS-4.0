//#include "main.h"
#include "ksyscall.h"
#include "synchconsole.h"

void SysHalt()
{
  kernel->interrupt->Halt();
}


int SysAdd(int op1, int op2)
{
  return op1 + op2;
}


int SysPrint(char* input, int length)
{
	char* addr = input;
	int value;
	//char bytes[4];
	bool rt = true;
	/*for(int i = 0; i < length; i+=4) 
	{
		rt = kernel->machine->ReadMem(int(addr)+i, 4, &value);
		if(rt)
		{
			bytes[0] = (value >> 24) & 0xff;
			bytes[1] = (value >> 16) & 0xff;
			bytes[2] = (value >> 8) & 0xff;
			bytes[3] = value & 0xff;
			for(int j = 0; j < 4 && i+j < length; ++j)
			{
				kernel->synchConsoleOut->PutChar(bytes[j]);
			}
		}
		else
		{
			break;
		}
	}*/
	for(int i = 0; i < length; ++i) 
	{
		rt = kernel->machine->ReadMem(int(addr++), 1, &value);
		if(rt)
		{
			char c = value & 0xff;
			kernel->synchConsoleOut->PutChar(c);
		}
		else
		{
			break;
		}
	}
	return (rt? length: -1);
}

int SysOSAdd(int op1, int op2)
{
	return op1 + op2;
}

int SysOSSub(int op1, int op2)
{
	return op1 - op2;
}

int SysOSDiv(int op1, int op2)
{
	return op1 / op2;
}

int SysOSMul(int op1, int op2)
{
	return op1 * op2;
}
