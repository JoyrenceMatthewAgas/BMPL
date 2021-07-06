#include "all.h"

static int cube_root(int num) {
    return cbrt(num);
}

static double log_dec(long double dec) {
    return log10f(dec);
}

static double log_num(long long int num) {
    return log10f(num);
}

static double power(double x, double y) {
    return pow(x, y);
}

static int square_root(int num) {
    return sqrt(num);
}
