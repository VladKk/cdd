#include "handling_functions.h"

int change_dir(const char *path) {
    int cd = chdir(path);

    if (cd == -1) {
        perror("chdir error");
        exit(errno);
    }

    int ls = list_content(path);

    if (ls == -1) {
        perror("ls error");
        exit(errno);
    }

    return EXIT_SUCCESS;
}

int list_content(const char *path) {
    struct dirent *de;
    DIR *dr = opendir(path);

    if (dr == NULL) {
        fprintf(stderr, "Could not open current directory");
        return EXIT_FAILURE;
    }

    printf("Content of %s:\n", path);

    while ((de = readdir(dr)) != NULL) {
        switch (de->d_type) {
            case DT_UNKNOWN:
                printf("%s (unknown)\n", de->d_name);
                break;
            case DT_REG:
                printf("%s (file)\n", de->d_name);
                break;
            case DT_DIR:
                printf("%s (directory)\n", de->d_name);
                break;
            case DT_FIFO:
                printf("%s (FIFO)\n", de->d_name);
                break;
            case DT_SOCK:
                printf("%s (socket)\n", de->d_name);
                break;
            case DT_CHR:
                printf("%s (char device)\n", de->d_name);
                break;
            case DT_BLK:
                printf("%s (block device)\n", de->d_name);
                break;
            case DT_LNK:
                printf("%s (symlink)\n", de->d_name);
                break;
            default:
                fprintf(stderr, "Invalid entry type");
                return EXIT_FAILURE;
        }
    }

    closedir(dr);

    return EXIT_SUCCESS;
}

int add_new_dir(const char *n_path) {


    return EXIT_SUCCESS;
}