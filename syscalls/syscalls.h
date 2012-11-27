extern struct syscall syscall_accept4;
extern struct syscall syscall_accept;
extern struct syscall syscall_access;
extern struct syscall syscall_acct;
extern struct syscall syscall_add_key;
extern struct syscall syscall_adjtimex;
extern struct syscall syscall_alarm;
extern struct syscall syscall_arch_prctl;
extern struct syscall syscall_bdflush;
extern struct syscall syscall_bind;
extern struct syscall syscall_brk;
extern struct syscall syscall_capget;
extern struct syscall syscall_capset;
extern struct syscall syscall_chdir;
extern struct syscall syscall_chmod;
extern struct syscall syscall_chown16;
extern struct syscall syscall_chown;
extern struct syscall syscall_chroot;
extern struct syscall syscall_clock_adjtime;
extern struct syscall syscall_clock_getres;
extern struct syscall syscall_clock_gettime;
extern struct syscall syscall_clock_nanosleep;
extern struct syscall syscall_clock_settime;
extern struct syscall syscall_clone2;
extern struct syscall syscall_clone;
extern struct syscall syscall_close;
extern struct syscall syscall_connect;
extern struct syscall syscall_creat;
extern struct syscall syscall_delete_module;
extern struct syscall syscall_dup2;
extern struct syscall syscall_dup3;
extern struct syscall syscall_dup;
extern struct syscall syscall_epoll_create1;
extern struct syscall syscall_epoll_create;
extern struct syscall syscall_epoll_ctl;
extern struct syscall syscall_epoll_pwait;
extern struct syscall syscall_epoll_wait;
extern struct syscall syscall_eventfd2;
extern struct syscall syscall_eventfd;
extern struct syscall syscall_execve;
extern struct syscall syscall_exit;
extern struct syscall syscall_exit_group;
extern struct syscall syscall_faccessat;
extern struct syscall syscall_fadvise64_64;
extern struct syscall syscall_fadvise64;
extern struct syscall syscall_fallocate;
extern struct syscall syscall_fanotify_init;
extern struct syscall syscall_fanotify_mark;
extern struct syscall syscall_fchdir;
extern struct syscall syscall_fchmodat;
extern struct syscall syscall_fchmod;
extern struct syscall syscall_fchown16;
extern struct syscall syscall_fchownat;
extern struct syscall syscall_fchown;
extern struct syscall syscall_fcntl;
extern struct syscall syscall_fdatasync;
extern struct syscall syscall_fgetxattr;
extern struct syscall syscall_flistxattr;
extern struct syscall syscall_flock;
extern struct syscall syscall_fork;
extern struct syscall syscall_fremovexattr;
extern struct syscall syscall_fsetxattr;
extern struct syscall syscall_fstat64;
extern struct syscall syscall_fstatat64;
extern struct syscall syscall_fstatfs64;
extern struct syscall syscall_fstatfs;
extern struct syscall syscall_fsync;
extern struct syscall syscall_ftruncate64;
extern struct syscall syscall_ftruncate;
extern struct syscall syscall_futex;
extern struct syscall syscall_futimesat;
extern struct syscall syscall_getcpu;
extern struct syscall syscall_getcwd;
extern struct syscall syscall_getdents64;
extern struct syscall syscall_getdents;
extern struct syscall syscall_getegid16;
extern struct syscall syscall_getegid;
extern struct syscall syscall_geteuid16;
extern struct syscall syscall_geteuid;
extern struct syscall syscall_getgid16;
extern struct syscall syscall_getgid;
extern struct syscall syscall_getgroups16;
extern struct syscall syscall_getgroups;
extern struct syscall syscall_getitimer;
extern struct syscall syscall_get_mempolicy;
extern struct syscall syscall_getpagesize;
extern struct syscall syscall_getpeername;
extern struct syscall syscall_getpgid;
extern struct syscall syscall_getpgrp;
extern struct syscall syscall_getpid;
extern struct syscall syscall_getppid;
extern struct syscall syscall_getpriority;
extern struct syscall syscall_getresgid16;
extern struct syscall syscall_getresgid;
extern struct syscall syscall_getresuid16;
extern struct syscall syscall_getresuid;
extern struct syscall syscall_getrlimit;
extern struct syscall syscall_get_robust_list;
extern struct syscall syscall_getrusage;
extern struct syscall syscall_getsid;
extern struct syscall syscall_getsockname;
extern struct syscall syscall_getsockopt;
extern struct syscall syscall_gettid;
extern struct syscall syscall_gettimeofday;
extern struct syscall syscall_getuid16;
extern struct syscall syscall_getuid;
extern struct syscall syscall_getunwind;
extern struct syscall syscall_getxattr;
extern struct syscall syscall_init_module;
extern struct syscall syscall_inotify_add_watch;
extern struct syscall syscall_inotify_init1;
extern struct syscall syscall_inotify_init;
extern struct syscall syscall_inotify_rm_watch;
extern struct syscall syscall_io_cancel;
extern struct syscall syscall_ioctl;
extern struct syscall syscall_io_destroy;
extern struct syscall syscall_io_getevents;
extern struct syscall syscall_ioperm;
extern struct syscall syscall_iopl;
extern struct syscall syscall_ioprio_get;
extern struct syscall syscall_ioprio_set;
extern struct syscall syscall_io_setup;
extern struct syscall syscall_io_submit;
extern struct syscall syscall_ipc;
extern struct syscall syscall_kexec_load;
extern struct syscall syscall_keyctl;
extern struct syscall syscall_kill;
extern struct syscall syscall_lchown16;
extern struct syscall syscall_lchown;
extern struct syscall syscall_lgetxattr;
extern struct syscall syscall_linkat;
extern struct syscall syscall_link;
extern struct syscall syscall_listen;
extern struct syscall syscall_listxattr;
extern struct syscall syscall_llistxattr;
extern struct syscall syscall_llseek;
extern struct syscall syscall_lookup_dcookie;
extern struct syscall syscall_lremovexattr;
extern struct syscall syscall_lseek;
extern struct syscall syscall_lsetxattr;
extern struct syscall syscall_lstat64;
extern struct syscall syscall_lstat;
extern struct syscall syscall_madvise;
extern struct syscall syscall_mbind;
extern struct syscall syscall_migrate_pages;
extern struct syscall syscall_mincore;
extern struct syscall syscall_mkdirat;
extern struct syscall syscall_mkdir;
extern struct syscall syscall_mknodat;
extern struct syscall syscall_mknod;
extern struct syscall syscall_mlockall;
extern struct syscall syscall_mlock;
extern struct syscall syscall_mmap2;
extern struct syscall syscall_mmap;
extern struct syscall syscall_mmap_pgoff;
extern struct syscall syscall_modify_ldt;
extern struct syscall syscall_mount;
extern struct syscall syscall_move_pages;
extern struct syscall syscall_mprotect;
extern struct syscall syscall_mq_getsetattr;
extern struct syscall syscall_mq_notify;
extern struct syscall syscall_mq_open;
extern struct syscall syscall_mq_timedreceive;
extern struct syscall syscall_mq_timedsend;
extern struct syscall syscall_mq_unlink;
extern struct syscall syscall_mremap;
extern struct syscall syscall_msgctl;
extern struct syscall syscall_msgget;
extern struct syscall syscall_msgrcv;
extern struct syscall syscall_msgsnd;
extern struct syscall syscall_msync;
extern struct syscall syscall_munlockall;
extern struct syscall syscall_munlock;
extern struct syscall syscall_munmap;
extern struct syscall syscall_name_to_handle_at;
extern struct syscall syscall_nanosleep;
extern struct syscall syscall_newfstatat;
extern struct syscall syscall_newfstat;
extern struct syscall syscall_newlstat;
extern struct syscall syscall_newstat;
extern struct syscall syscall_newuname;
extern struct syscall syscall_nfsservctl;
extern struct syscall syscall_nice;
extern struct syscall syscall_ni_syscall;
extern struct syscall syscall_oldreaddir;
extern struct syscall syscall_oldumount;
extern struct syscall syscall_olduname;
extern struct syscall syscall_openat;
extern struct syscall syscall_open_by_handle_at;
extern struct syscall syscall_open;
extern struct syscall syscall_pause;
extern struct syscall syscall_pciconfig_read;
extern struct syscall syscall_pciconfig_write;
extern struct syscall syscall_perf_event_open;
extern struct syscall syscall_perfmonctl;
extern struct syscall syscall_personality;
extern struct syscall syscall_pipe2;
extern struct syscall syscall_pipe;
extern struct syscall syscall_pivot_root;
extern struct syscall syscall_poll;
extern struct syscall syscall_ppoll;
extern struct syscall syscall_prctl;
extern struct syscall syscall_pread64;
extern struct syscall syscall_preadv;
extern struct syscall syscall_prlimit64;
extern struct syscall syscall_pselect6;
extern struct syscall syscall_ptrace;
extern struct syscall syscall_pwrite64;
extern struct syscall syscall_pwritev;
extern struct syscall syscall_quotactl;
extern struct syscall syscall_readahead;
extern struct syscall syscall_read;
extern struct syscall syscall_readlinkat;
extern struct syscall syscall_readlink;
extern struct syscall syscall_readv;
extern struct syscall syscall_reboot;
extern struct syscall syscall_recv;
extern struct syscall syscall_recvfrom;
extern struct syscall syscall_recvmmsg;
extern struct syscall syscall_recvmsg;
extern struct syscall syscall_remap_file_pages;
extern struct syscall syscall_removexattr;
extern struct syscall syscall_renameat;
extern struct syscall syscall_rename;
extern struct syscall syscall_request_key;
extern struct syscall syscall_reserved_223;
extern struct syscall syscall_restart_syscall;
extern struct syscall syscall_rmdir;
extern struct syscall syscall_rtas;
extern struct syscall syscall_rt_sigaction;
extern struct syscall syscall_rt_sigpending;
extern struct syscall syscall_rt_sigprocmask;
extern struct syscall syscall_rt_sigqueueinfo;
extern struct syscall syscall_rt_sigreturn;
extern struct syscall syscall_rt_sigsuspend;
extern struct syscall syscall_rt_sigtimedwait;
extern struct syscall syscall_rt_tgsigqueueinfo;
extern struct syscall syscall_sched_getaffinity;
extern struct syscall syscall_sched_getparam;
extern struct syscall syscall_sched_get_priority_max;
extern struct syscall syscall_sched_get_priority_min;
extern struct syscall syscall_sched_getscheduler;
extern struct syscall syscall_sched_rr_get_interval;
extern struct syscall syscall_sched_setaffinity;
extern struct syscall syscall_sched_setparam;
extern struct syscall syscall_sched_setscheduler;
extern struct syscall syscall_sched_yield;
extern struct syscall syscall_select;
extern struct syscall syscall_semctl;
extern struct syscall syscall_semget;
extern struct syscall syscall_semop;
extern struct syscall syscall_semtimedop;
extern struct syscall syscall_send;
extern struct syscall syscall_sendfile64;
extern struct syscall syscall_sendfile;
extern struct syscall syscall_sendmsg;
extern struct syscall syscall_sendto;
extern struct syscall syscall_setaltroot;
extern struct syscall syscall_setdomainname;
extern struct syscall syscall_setfsgid16;
extern struct syscall syscall_setfsgid;
extern struct syscall syscall_setfsuid16;
extern struct syscall syscall_setfsuid;
extern struct syscall syscall_setgid16;
extern struct syscall syscall_setgid;
extern struct syscall syscall_setgroups16;
extern struct syscall syscall_setgroups;
extern struct syscall syscall_sethostname;
extern struct syscall syscall_setitimer;
extern struct syscall syscall_set_mempolicy;
extern struct syscall syscall_setpgid;
extern struct syscall syscall_setpriority;
extern struct syscall syscall_setregid16;
extern struct syscall syscall_setregid;
extern struct syscall syscall_setresgid16;
extern struct syscall syscall_setresgid;
extern struct syscall syscall_setresuid16;
extern struct syscall syscall_setresuid;
extern struct syscall syscall_setreuid16;
extern struct syscall syscall_setreuid;
extern struct syscall syscall_setrlimit;
extern struct syscall syscall_set_robust_list;
extern struct syscall syscall_setsid;
extern struct syscall syscall_setsockopt;
extern struct syscall syscall_set_tid_address;
extern struct syscall syscall_settimeofday;
extern struct syscall syscall_setuid16;
extern struct syscall syscall_setuid;
extern struct syscall syscall_setxattr;
extern struct syscall syscall_sgetmask;
extern struct syscall syscall_shmat;
extern struct syscall syscall_shmctl;
extern struct syscall syscall_shmdt;
extern struct syscall syscall_shmget;
extern struct syscall syscall_shutdown;
extern struct syscall syscall_sigaction;
extern struct syscall syscall_sigaltstack;
extern struct syscall syscall_signal;
extern struct syscall syscall_signalfd4;
extern struct syscall syscall_signalfd;
extern struct syscall syscall_sigpending;
extern struct syscall syscall_sigprocmask;
extern struct syscall syscall_sigreturn;
extern struct syscall syscall_sigsuspend;
extern struct syscall syscall_socket;
extern struct syscall syscall_socketcall;
extern struct syscall syscall_socketpair;
extern struct syscall syscall_splice;
extern struct syscall syscall_ssetmask;
extern struct syscall syscall_stat64;
extern struct syscall syscall_stat;
extern struct syscall syscall_statfs64;
extern struct syscall syscall_statfs;
extern struct syscall syscall_stime;
extern struct syscall syscall_streams1;
extern struct syscall syscall_streams2;
extern struct syscall syscall_stty;
extern struct syscall syscall_swapoff;
extern struct syscall syscall_swapon;
extern struct syscall syscall_symlinkat;
extern struct syscall syscall_symlink;
extern struct syscall syscall_sync;
extern struct syscall syscall_sync_file_range2;
extern struct syscall syscall_sync_file_range;
extern struct syscall syscall_syncfs;
extern struct syscall syscall_sysctl;
extern struct syscall syscall_sysfs;
extern struct syscall syscall_sysinfo;
extern struct syscall syscall_syslog;
extern struct syscall syscall_tee;
extern struct syscall syscall_tgkill;
extern struct syscall syscall_time;
extern struct syscall syscall_timer_create;
extern struct syscall syscall_timer_delete;
extern struct syscall syscall_timerfd_create;
extern struct syscall syscall_timerfd_gettime;
extern struct syscall syscall_timerfd_settime;
extern struct syscall syscall_timer_getoverrun;
extern struct syscall syscall_timer_gettime;
extern struct syscall syscall_timer_settime;
extern struct syscall syscall_times;
extern struct syscall syscall_tkill;
extern struct syscall syscall_truncate64;
extern struct syscall syscall_truncate;
extern struct syscall syscall_tux;
extern struct syscall syscall_umask;
extern struct syscall syscall_umount;
extern struct syscall syscall_uname;
extern struct syscall syscall_unlinkat;
extern struct syscall syscall_unlink;
extern struct syscall syscall_unshare;
extern struct syscall syscall_uselib;
extern struct syscall syscall_ustat;
extern struct syscall syscall_utime;
extern struct syscall syscall_utimensat;
extern struct syscall syscall_utimes;
extern struct syscall syscall_vfork;
extern struct syscall syscall_vhangup;
extern struct syscall syscall_vm86;
extern struct syscall syscall_vm86old;
extern struct syscall syscall_vmsplice;
extern struct syscall syscall_vserver;
extern struct syscall syscall_wait4;
extern struct syscall syscall_waitid;
extern struct syscall syscall_waitpid;
extern struct syscall syscall_write;
extern struct syscall syscall_writev;
extern struct syscall syscall_sendmmsg;
extern struct syscall syscall_setns;
extern struct syscall syscall_process_vm_readv;
extern struct syscall syscall_process_vm_writev;
extern struct syscall syscall_kcmp;
extern struct syscall syscall_pciconfig_iobase;
extern struct syscall syscall_arm_fadvise64_64;
extern struct syscall syscall_sh_cacheflush;
