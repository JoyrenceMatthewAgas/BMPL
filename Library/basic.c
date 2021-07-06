#include <stdio.h>
#include "basic.h"

#define say(X) printf(_Generic(X,double:"%f",float:"%f",char *:"%s",int:"%d"), X) // output function

#define sayLn(X) printf(_Generic(X,double:"%f\n",float:"%f\n",char *:"%s\n",int:"%d\n"), X) // output function printing a newline

char *take_str(const char *prompt, char *result, size_t size) { // input function for a string
    char spec[32];
    if (size == 0)
        return NULL;
    snprintf(spec, sizeof spec, "%%%zus", size - 1);
    printf("%s", text);
    *result = '\0';
    scanf(spec, result);
    return result;
}

int take_int(const char *prompt, int result) { // input function for an integer
    say(prompt);
    scanf("%i", &result);
    return result;
}
