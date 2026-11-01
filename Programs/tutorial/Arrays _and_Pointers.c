#include <stdio.h>


int main(){
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;            // no &! 'a' already acts as the address of a[0]
    printf("%d\n", *p);    // 10  -- the first element

    printf("%d\n", a[2]);
    printf("%d\n", *(a + 2));
    printf("%d\n", p[2]);      // a pointer can use [] too!
    printf("%d\n", *(p + 2));

    int *p = a;
    printf("%p\n", (void *)p);       // say 0x1000
    printf("%p\n", (void *)(p + 1)); // 0x1004 -- moved 4 bytes = one int, not one byte

    int a[5];
    int *p = a;
    sizeof(a);   // 20  -- the WHOLE array (5 ints x 4 bytes)
    sizeof(p);   // 8   -- just the pointer itself (one address)
}