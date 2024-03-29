#include "else.h"
/**
 * @brief Функция для копирования массива указателей
 *
 * копирует содержимое ptr2 в ptr1.
 * @param[in] ptr1
 * @param[in] ptr2
 *
 * @todo Сделать, чтобы копия массива создавалась внутри функции и возвращался на нее указатель
 */
void ptr_cpy (char** ptr1, char ** ptr2) {
    assert (ptr1 != ptr2);
    assert (ptr1 != 0);
    assert (ptr2 != 0);

    for (int i = 0; ptr2[i] != 0; i++)
        ptr1[i] = (char*)ptr2[i];
}