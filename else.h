#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#define Size_Verse  8
#define Rhyme_Size 2

char* getstr (FILE *f);
void change (char* str, int *lines);
char** arr_point (char * text, int lines);
int compare_rif (const void * str1, const void * str2);
int compare (const void * str1, const void * str2);
int str_len (const char * str);
void ptr_cpy (char** ptr1, char ** ptr2);
void writer_text (const char * ad, char ** text, int rhyme_size, const char * file, const char * mode);
void creat_rhyme (char ** text, int lines);

#ifndef ONEGINV5_ELSE_H
#define ONEGINV5_ELSE_H

#endif //ONEGINV5_ELSE_H