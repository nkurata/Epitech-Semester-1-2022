/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-navy-noe.kurata
** File description:
** who_sig_me.c
*/

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void signal_handler(int sig) {
    printf("Received signal %d, emitted by process %d\n", sig, getpid());
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <signal1> <signal2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int sig = atoi(argv[i]);
        if (signal(sig, signal_handler) == SIG_ERR) {
            printf("Error rerouting signal %d\n", sig);
        }
    }

    while (1) {
        pause();
    }

    return 0;
}
