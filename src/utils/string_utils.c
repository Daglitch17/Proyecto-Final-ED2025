#include <string.h>
#include <ctype.h>

int strcasecmp_simple(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b)) return 1;
        a++; b++;
    }
    return (*a || *b) ? 1 : 0;
}
