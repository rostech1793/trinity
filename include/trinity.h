#ifndef _TRINITY_H
#define _TRINITY_H 1

#include <stdio.h>
#include <setjmp.h>
#include <sys/types.h>
#include <unistd.h>

#include "constants.h"

typedef enum { FALSE = 0, TRUE = 1 } bool;

#define UNLOCKED 0
#define LOCKED 1

#ifndef S_SPLINT_S
#define __unused__ __attribute((unused))
#else
#define __unused__ /*@unused@*/
#endif


extern char *progname;
extern pid_t parentpid;

extern jmp_buf ret_jump;
void mask_signals_child(void);
void setup_main_signals(void);

void * alloc_shared(unsigned int size);

void do_main_loop(void);
int child_process(void);

long mkcall(int child);
void do_syscall_from_child(void);

extern unsigned int seed;
unsigned int init_seed(unsigned int seed);
void set_seed(unsigned int pidslot);
void reseed(void);

extern unsigned int nr_sockets;
extern unsigned int specific_proto;
void open_sockets(void);
void find_specific_proto(const char *protoarg);
/* glibc headers might be older than the kernel, so chances are we know
 * about more protocols than glibc does. So we define our own PF_MAX */
#define TRINITY_PF_MAX 41

extern unsigned int page_size;

/* command line args. */
void parse_args(int argc, char *argv[]);

extern bool debug;
extern bool do_specific_syscall;
extern bool do_exclude_syscall;
extern unsigned int specific_proto;
extern bool do_specific_proto;
extern char *specific_proto_optarg;
extern bool dopause;
extern bool show_syscall_list;
extern unsigned char quiet_level;
extern bool verbose;
extern bool monochrome;
extern bool dangerous;
extern bool do_syslog;
extern bool logging;
extern unsigned char desired_group;
extern bool user_set_seed;
extern char *victim_path;

extern unsigned char exit_reason;

extern bool biarch;

extern bool ignore_tainted;
int check_tainted(void);

void init_child(void);

void init_watchdog(void);

void reap_child(pid_t childpid);

extern unsigned int user_specified_children;

#define UNUSED(x) (void)(x)

enum exit_reasons {
	STILL_RUNNING = 0,
	EXIT_NO_SYSCALLS_ENABLED = 1,
	EXIT_REACHED_COUNT = 2,
	EXIT_NO_FDS = 3,
	EXIT_LOST_PID_SLOT = 4,
	EXIT_PID_OUT_OF_RANGE = 5,
	EXIT_SIGINT = 6,
	EXIT_KERNEL_TAINTED = 7,
	EXIT_SHM_CORRUPTION = 8,
	EXIT_REPARENT_PROBLEM = 9,
};

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

#define max(x, y) ((x) >= (y) ? (x) : (y))
#define min(x, y) ((x) <= (y) ? (x) : (y))

#endif	/* _TRINITY_H */
