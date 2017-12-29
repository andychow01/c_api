#include <cstdio>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    printf("length of pid: %d\n", sizeof(pid_t));
    pid_t parent_pid = getpid();
    printf("parent pid: %d\n", parent_pid);
    pid_t pid = fork();
    if (pid == 0) {
        printf("child pid1: %d\n", pid);
        printf("child pid2: %d\n", getpid());
        //_exit(0);
    } else {
        printf("parent pid1: %d\n", pid);
        printf("parent pid2: %d\n", getpid());
        int status = 0;
        wait(&status);
    }
    return 0;
}
