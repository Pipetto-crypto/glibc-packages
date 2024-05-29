#ifndef _FAKE_SYSCALL
#define _FAKE_SYSCALL

#include <arch-syscall.h>
#include <disabled-syscall.h>
#include <unistd.h>

long int return_zero() {
	return 0;
}

long int return_ENOSYS() {
	return INLINE_SYSCALL_ERROR_RETURN_VALUE(ENOSYS);
}

#endif //_FAKE_SYSCALL
