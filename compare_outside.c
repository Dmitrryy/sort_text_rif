#include "else.h"

/**
 * @brief Функция для сравнения двух строк по концу
 *
 * Сравнивает две строки по их концу
 *
 * @param[in] str1 - первый сравниваемый элемент
 * @param[in] str2 - второй сравниваемый элемент
 * @return возвращает 1, 0, -1, если первый элемент больше, равен, меньше второго соответственно.
 */
int compare_rif (const void * str1, const void * str2) {
    int stat = 0;
    unsigned long long k = 0, j = 0;
    char ** strx = (char**)str1;
    char ** stry = (char**)str2;

    k = strlen(*strx);
    j = strlen(*stry);

    while ((k >=0 ) && (j >= 0) && (stat <= Rhyme_Size)) {
        for ( ; isalpha((*strx)[k]) == 0; ) {
            k--;
            if (k < 0)
                break;
        }
        for ( ; isalpha((*stry)[j]) == 0; ) {
            j--;
            if (j < 0)
                break;
        }
        if ((*strx)[k] > (*stry)[j])
            return -1;
        if ((*strx)[k] == (*stry)[j]) {
            k--;
            j--;
            stat++;
            if ((k < 0) || (j < 0))
                break;
        }
        if ((*strx)[k] < (*stry)[j])
            return 1;
    }
    return 0;
}