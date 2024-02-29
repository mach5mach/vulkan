#include <stdio.h>

int main(int argc, char** argv) {
    int i = 100;

    int* ptr = &i;

    printf("i = %d", *ptr);

    return 0;
}