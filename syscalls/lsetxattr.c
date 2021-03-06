/*
 * SYSCALL_DEFINE5(lsetxattr, const char __user *, pathname,
	 const char __user *, name, const void __user *, value,
	 size_t, size, int, flags)
 */

#include <linux/xattr.h>
#include "sanitise.h"

static unsigned long lsetxattr_flags[] = {
	XATTR_CREATE, XATTR_REPLACE,
};

struct syscallentry syscall_lsetxattr = {
	.name = "lsetxattr",
	.num_args = 5,
	.arg1name = "pathname",
	.arg1type = ARG_PATHNAME,
	.arg2name = "name",
	.arg2type = ARG_ADDRESS,
	.arg3name = "value",
	.arg3type = ARG_ADDRESS,
	.arg4name = "size",
	.arg4type = ARG_LEN,
	.arg5name = "flags",
	.arg5type = ARG_LIST,
	.arg5list = ARGLIST(lsetxattr_flags),
	.group = GROUP_VFS,
};
