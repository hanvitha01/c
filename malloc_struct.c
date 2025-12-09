#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct db {
    uint32_t num;
    struct db *ptr;
} db_t;

int main() {
    db_t *p = malloc(sizeof(db_t));  

    printf("%p\n", p);

    p->num = 100;
    printf("p->ptr (garbage):  %p\n", p->ptr);

    p->ptr = NULL;

    printf("p->ptr (after NULL): %p\n", p->ptr);

    printf("p->num = %u\n", p->num);

    free(p);
    return 0;
}
