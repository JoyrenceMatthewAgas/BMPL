#include "all.h"

int main() {
    char text[1000];
    scanf("%[^\n]%*c", text);
    printf("%s", text);
}
