#ifndef LOOK_VARS_H
#define LOOK_VARS_H

// Program description
static char doc[] = "This utility adds multithreading and 'build-in' ls command to default cd linux command. "
                    "You can use look as much times as you need to check directories content";
// Usage description
static char args_doc[] = "[-p] [path_to_directory...] [[-n] [path_to_another_directory...]]";

// Options description
static struct argp_option options[] = {
        {"path",     'p', "PATH",         0, "PATH to directory"},
        {"new_path", 'n', "ANOTHER_PATH", 0, "ANOTHER_PATH to another directory (optional)"},
        {0}
};

// Argument parser prototype
static struct argp argp;

#endif //LOOK_VARS_H
