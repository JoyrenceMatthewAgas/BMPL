#include <stdio.h>

#define say(X) printf(_Generic((X),    \
                        double: "%f ", \
                        float:  "%f ", \
                        char *: "%s ", \
                        int:    "%d "  \
                ), (X));

#define sayLn(X) printf(_Generic((X),    \
                        double: "%f \n", \
                        float:  "%f \n", \
                        char *: "%s \n", \
                        int:    "%d \n"  \
                ), (X));

/*
int take(const char *prompt, char *result, size_t siz) {
    char fmt[32];
    printf("%s", prompt);
    sprintf(fmt, "%%%zus", siz - 1);
    return scanf(fmt, result);
}
*/

char *take(const char *text) {
    char result[256];
    printf("%s", text);
    *result = '\0';  // return an empty string on input error
    scanf("%s", result);
    return strdup(result);
}
