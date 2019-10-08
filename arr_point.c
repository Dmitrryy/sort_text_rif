#include <stdlib.h>

char** arr_point (char * text, const int lines) {
    char **str_ptrs = (char **) calloc(lines + 1, sizeof(char *));

    int stat2 = 1;
    int k = 0;


    for (int i = 0; k < lines; i++) {
        if (text[i] != '\0')
            if (stat2 != 0)
                if ((text[i] >= 'a') && (text[i] <= 'z')) {
                    stat2 = 0;
                    str_ptrs[k++] = &text[i];
                }
        if (text[i] == '\0') {
            stat2 = 1;
        }
    }
    return str_ptrs;
}