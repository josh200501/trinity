#ifndef _PIDS_H
#define _PIDS_H 1

#define for_each_pidslot(i)	for (i = 0; i < shm->max_children; i++)

#define PIDSLOT_NOT_FOUND -1
#define EMPTY_PIDSLOT -1
int find_pid_slot(pid_t mypid);
bool pidmap_empty(void);
void dump_pid_slots(void);
int pid_is_valid(pid_t);

#define pid_alive(_pid) kill(_pid, 0)

#endif	/* _PIDS_H */
