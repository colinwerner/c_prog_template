#ifndef __MY_STRUCT_H
#define __MY_STRUCT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct my_struct_t;

my_struct_t * 
my_struct_create(int value);
void 
my_struct_destroy(my_struct_t *ms);

#endif /* __MY_STRUCT_H */
