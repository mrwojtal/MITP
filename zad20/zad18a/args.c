#include <string.h>
#include "sortint.h"

int args(int argc, char* argv[]) {
    int mode = 0;
    if (argc == 2) {
        if (strcmp(argv[1], "-nbubble") == 0)
            mode = 1;
        else if (strcmp(argv[1], "-nselect") == 0)
            mode = 2;
    }
    else if(argc ==3) {
        if (strcmp(argv[2], "bubble")==0)
            mode=1;
        else if (strcmp(argv[2], "select")==0)
            mode=2;
    }
    return mode;
}
