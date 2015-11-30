#include <stdio.h>
#include <stdlib.h>

#include "header.h"

struct my_struct 
{
	int value;
};

my_struct_t * 
my_struct_create(int value) 
{
	my_struct_t *ms;
	
	ms = calloc(1, sizeof(my_struct_t));
	if (NULL != ms) {
		ms->value = value;
	}
	
	return ms;
}

void 
my_struct_destroy(my_struct_t *ms) 
{	
	if (NULL != ms) {
		free(ms);
	}
}
