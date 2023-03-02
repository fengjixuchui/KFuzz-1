// Copyright 2022 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

// File autogenerated by genseccomp.py from Android U - edit at your peril!!

const struct sock_filter x86_64_app_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 0, 0, 114),
BPF_JUMP(BPF_JMP|BPF_JEQ|BPF_K, 202, 112, 0), //futex
BPF_JUMP(BPF_JMP|BPF_JEQ|BPF_K, 16, 111, 0), //ioctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 166, 55, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 27, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 44, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 32, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 17, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 8, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 6, 105, 104), //read|write|open|close|stat|fstat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 16, 104, 103), //lseek|mmap|mprotect|munmap|brk|rt_sigaction|rt_sigprocmask|rt_sigreturn
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 24, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 21, 102, 101), //pread64|pwrite64|readv|writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 29, 101, 100), //sched_yield|mremap|msync|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 38, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 35, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 33, 98, 97), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 37, 97, 96), //nanosleep|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 96, 95), //setitimer|getpid|sendfile|socket|connect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 91, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 72, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 57, 92, 91), //sendto|recvfrom|sendmsg|recvmsg|shutdown|bind|listen|getsockname|getpeername|socketpair|setsockopt|getsockopt|clone
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 64, 91, 90), //vfork|execve|exit|wait4|kill|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 89, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 82, 89, 88), //fcntl|flock|fsync|fdatasync|truncate|ftruncate|getdents|getcwd|chdir|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 90, 88, 87), //readlink
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 95, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 93, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 92, 85, 84), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 94, 84, 83), //fchown
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 103, 83, 82), //umask|gettimeofday|getrlimit|getrusage|sysinfo|times|ptrace|getuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 135, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 112, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 107, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 105, 78, 77), //getgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 111, 77, 76), //geteuid|getegid|setpgid|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 115, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 113, 75, 74), //setsid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 116, 74, 73), //getgroups
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 124, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 120, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 119, 71, 70), //setresuid|getresuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 122, 70, 69), //getresgid|getpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 132, 69, 68), //getsid|capget|capset|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|sigaltstack
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 157, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 140, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 137, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 136, 65, 64), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 139, 64, 63), //statfs|fstatfs
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 155, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 153, 62, 61), //getpriority|setpriority|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|mlock|munlock|mlockall|munlockall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 156, 61, 60), //pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 162, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 160, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 159, 58, 57), //prctl|arch_prctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 161, 57, 56), //setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 163, 56, 55), //sync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 275, 27, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 228, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 206, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 186, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 179, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 167, 50, 49), //umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 180, 49, 48), //quotactl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 201, 47, 46), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 205, 46, 45), //sched_setaffinity|sched_getaffinity
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 221, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 211, 43, 42), //io_setup|io_destroy|io_getevents|io_submit|io_cancel
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 220, 42, 41), //getdents64|set_tid_address|restart_syscall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 227, 41, 40), //fadvise64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 254, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 247, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 233, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 232, 37, 36), //clock_gettime|clock_getres|clock_nanosleep|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 235, 36, 35), //epoll_ctl|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 251, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 248, 34, 33), //waitid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 253, 33, 32), //ioprio_set|ioprio_get
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 257, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 256, 30, 29), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 261, 29, 28), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 274, 28, 27), //newfstatat|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|set_robust_list
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 321, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 302, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 283, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 279, 23, 22), //splice|tee|sync_file_range|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 282, 22, 21), //utimensat|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 285, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 284, 20, 19), //timerfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 300, 19, 18), //fallocate|timerfd_settime|timerfd_gettime|accept4|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 314, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 306, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 303, 16, 15), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 312, 15, 14), //syncfs|sendmmsg|setns|getcpu|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 320, 14, 13), //sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 436, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 424, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 332, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 329, 10, 9), //bpf|execveat|userfaultfd|membarrier|mlock2|copy_file_range|preadv2|pwritev2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 333, 9, 8), //statx
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 434, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 425, 7, 6), //pidfd_send_signal
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 435, 6, 5), //pidfd_open
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 440, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 438, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 437, 3, 2), //close_range
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 439, 2, 1), //pidfd_getfd
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 441, 1, 0), //process_madvise
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

#define x86_64_app_filter_size (sizeof(x86_64_app_filter) / sizeof(struct sock_filter))
