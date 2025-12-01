/*pointer to a constant int(type)-----const int *ptr*/

// #include<stdio.h>

// int main()
// {
//     int i = 10;
//     int j = 20;

//     const int *ptr = &i;
//     printf("value at *ptr when pointing to &i: %d\n",*ptr);
//     printf("ptr value when i is assigned: %x\n",ptr);
//     printf("address of where i is stored: %x\n",&i);


//     // *ptr = 100;
//     // printf("%d",*ptr);

//     ptr = &j;
//     printf("value of *ptr after changinf to &j: %d\n",*ptr);
//     printf("address of where j is stored: %x",ptr);


// }

#include<stdio.h>

int main()
{
    int const i = 10;
    int j = 20;

    int const *ptr = &i;
    printf("%d\n",*ptr);

    // *ptr = 100;

    ptr = &j;
    printf("%d",*ptr);
}

