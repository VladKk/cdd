#ifndef CDD_HANDLING_FUNCTIONS_H
#define CDD_HANDLING_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <argp.h>
#include <string.h>
#include <dirent.h>
#include <pthread.h>

#include "vars.h"

// TODO: create multithreaded cd for another directory by path
// TODO: make it all recursive

int change_dir(const char *path);

int list_content(const char *path);

int add_new_dir(const char *n_path);

static error_t parse_opt(int key, char *arg, struct argp_state *state) {
    switch (key) {
        case 'p':
            change_dir(arg);
            break;
        case 'n':
            break;
        case ARGP_KEY_ARG:
            if (state->arg_num > 2) {
                fprintf(stderr, "Too many parameters\n");
                argp_usage(state);
            }
            break;
        default:
            return ARGP_ERR_UNKNOWN;
    }

    return EXIT_SUCCESS;
}

#endif //CDD_HANDLING_FUNCTIONS_H
