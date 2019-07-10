#ifndef MANTICORE_SYSCALLS_H
#define MANTICORE_SYSCALLS_H

#include <manticore/types.h>

#include <stddef.h>

enum {
	SYS_exit		= 1,
	SYS_wait		= 2,
	SYS_console_print	= 3,
};

void exit(int status) __attribute__ ((noreturn));
void wait(void);
ssize_t console_print(const char *text, size_t count);

long syscall0(long number);
long syscall1(long number, long arg0);
long syscall2(long number, long arg0, long arg1);

#endif
