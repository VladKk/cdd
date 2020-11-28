#ifndef CDD_VARS_H
#define CDD_VARS_H

static char doc[] = "This utility adds multithreading to default cd linux command. You can use cd as much times "
                    "as you need and operate with a lot of directories at the same time";
static char args_doc[] = "[-p] [path_to_directory...] [[-n] [path_to_another_directory...]]";

static struct argp_option options[] = {
        {"path",     'p', "PATH",         0, "PATH to directory"},
        {"new_path", 'n', "ANOTHER_PATH", 0, "ANOTHER_PATH to another directory (optional)"},
        {0}
};

static struct argp argp;

#endif //CDD_VARS_H
