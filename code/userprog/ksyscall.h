/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls 
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__ 
#define __USERPROG_KSYSCALL_H__ 

#include "kernel.h"

//extern Kernel *kernel;


void SysHalt();

int SysAdd(int op1, int op2);

int SysPrint(char* input, int length);

int SysOSAdd(int op1, int op2);

int SysOSSub(int op1, int op2);

int SysOSDiv(int op1, int op2);

int SysOSMul(int op1, int op2);

#endif /* ! __USERPROG_KSYSCALL_H__ */
