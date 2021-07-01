#include <string.h>
#include <stdlib.h>

static char *add_str(const char *s1, const char *s2) {
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    char *ret = malloc(s1_len + s2_len + 1);
    memcpy(ret, s1, s1_len);

    // copy the null terminator too
    memcpy(ret + s1_len, s2, s2_len + 1);
    return ret;
}

static int compare_str(char *str, const char *compare) {
    return (strcmp(str, compare));
}

static char *copy_str(char *dest, const char *src) {
    char *result = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return result;
}

static int get_length(char *str) {
    return strlen(str);
}

static char *lowercase(char *text) {
    for (char *p = text; *p; ++p) {
        if (isalpha((unsigned char) *p)) {
            *p = tolower((unsigned char) *p);
        }
    }
    return text;
}

static char *uppercase(char *text) {
    for (char *p = text; *p; ++p) {
        if (isalpha((unsigned char) *p)) {
            *p = toupper((unsigned char) *p);
        }
    }
    return text;
}
