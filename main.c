#include "handling_functions.h"

int main(int argc, char *argv[]) {
    argp.options = options;
    argp.parser = parse_opt;
    argp.args_doc = args_doc;
    argp.doc = doc;
    argp.children = 0;
    argp.help_filter = 0;
    argp.argp_domain = 0;

    argp_parse(&argp, argc, argv, 0, 0, 0);

    return EXIT_SUCCESS;
}
