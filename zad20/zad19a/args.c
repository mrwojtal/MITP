#include "sortstring.h"
#include <string.h>

int args(int argc, char* argv[]) {
    int mode = 0;
    if (argc >= 2) {
        if (strcmp(argv[1], "-nbubble") == 0)
            mode = 1;
        if (strcmp(argv[1], "-ninsert") == 0)
            mode = 2;
    }
    if(argc >=3) {
        if (strcmp(argv[2], "bubble")==0)
            mode=1;
        if (strcmp(argv[2], "insert")==0)
            mode=2;
    }
    return mode;
}
