#include <stdio.h>

int main()
{

    printf("Size of literal default integer %ld \n", sizeof(3));
    printf("Size of literal default U: %ld \n", sizeof(3U));

    printf("Size of literal default I: %ld \n", sizeof(3));

    printf("Size of literal default L: %ld \n", sizeof(3L));

    printf("Size of literal default LL: %ld \n", sizeof(3LL));

    printf("Size of literal default floating point: %d \n", sizeof(3.1));
    printf("Size of literal F: %ld \n", sizeof(3.1F));
    printf("Size of literal D: %ld \n", sizeof(3.1));
    printf("Size of literal L: %ld \n", sizeof(3.1L));

    return 0;
}
