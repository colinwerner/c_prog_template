#include <stdio.h>
#include <stdlib.h>

#include <check.h>

#include <header.h>

#include "check_suites.h"

START_TEST(creation_success)
{
    my_struct_t *ms; 
    ms = my_struct_create(5);
    fail_if(NULL == ms);    
    my_struct_destroy(ms);
    ms = NULL;
    fail_if(NULL != ms);

}
END_TEST

Suite *
creation_suite(void)
{
    Suite *s;
    TCase *tc;
    
    s = suite_create("Creation Suite");
    tc = tcase_create("Creation Success");
    tcase_add_test(tc, creation_success);
    suite_add_tcase(s, tc);
    
    return s;
    
};