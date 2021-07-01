#include <math.h>

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
    int mult = x;
    for (int i = 1; i < y; i++) {
        mult *= x;
    }
    return mult;
}

static int square_root(int num) {
    int mult;
    int result = 0;
    for (int i = 1; i <= num; i++) {
        mult = i * i;
        if (mult > num) {
            result = i - 1;
            break;
        } else if (mult == num) {
            result = i;
            break;
        }
    }
    return result;
}
