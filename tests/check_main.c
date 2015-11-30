#include <stdio.h>
#include <stdlib.h>

#include <header.h>

int 
main(int argc, char *argv[])
{
    my_struct_t *ms; 
    ms = my_struct_create(5);
    printf("TODO: Write tests!\n");
    my_struct_destroy(ms);
}