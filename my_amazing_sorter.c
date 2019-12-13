/*
** EPITECH PROJECT, 2019
** CPE_pushswap_bootstrap_2019
** File description:
** my_amazing_sorter.c
*/

#include "include/my.h"
#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

void    display(int size, lulu_t *lulu)
{
    lulu->popo[lulu->louis] = 'p';
    lulu->popo[lulu->louis + 1] = 'b';
    lulu->popo[lulu->louis + 2] = ' ';
    lulu->louis += 3;
    if (lulu->louis > 99997) {
    write(1, lulu->popo , lulu->louis);
    lulu->louis = 0;
    }
    for (int a = 0; a < (size - 1); a += 1) {
        lulu->popo[lulu->louis] = 'p';
        lulu->popo[lulu->louis + 1] = 'a';
        lulu->popo[lulu->louis + 2] = ' ';
        lulu->louis += 3;
    if (lulu->louis > 99997) {
        write(1, lulu->popo , lulu->louis);
        lulu->louis = 0;
    }
    }
    write(1, lulu->popo , lulu->louis);
    write(1, "pa", 2);
}

void    my_amazing_sorter(int *array, int size, int *array2, lulu_t *lulu)
{
    int nbr_min;
    int jsp = 0;

    for (int temp = 0; temp != size - 1; temp += 1) {
        nbr_min = nbr_min_position(array, size);
        if (nbr_min < size / 2) {
            for (int a = 0; a != nbr_min; a += 1) {
                if (array[0] == 36)
                    jsp += 1;
                rotate_left(array, size);
            }
            for (int b = 0; b + jsp < nbr_min; b += 1) {
                lulu->popo[lulu->louis] = 'r';
                lulu->popo[lulu->louis + 1] = 'a';
                lulu->popo[lulu->louis + 2] = ' ';
                lulu->louis += 3;
                if (lulu->louis > 99997) {
                    write(1, lulu->popo , lulu->louis);
                    lulu->louis = 0;
                }
            }
        } else {
            for (int a = 0; a != (size - nbr_min); a += 1) {
                if (array[0] == 36)
                    jsp += 1;
                rotate_right(array, size);
            }
            for (int b = 0; b + jsp < (size - nbr_min); b += 1) {
                lulu->popo[lulu->louis] = 'r';
                lulu->popo[lulu->louis + 1] = 'r';
                lulu->popo[lulu->louis + 2] = 'a';
                lulu->popo[lulu->louis + 3] = ' ';
                lulu->louis += 4;
                if (lulu->louis > 99997) {
                    write(1, lulu->popo , lulu->louis);
                    lulu->louis = 0;
                }
            }
        }
        lulu->popo[lulu->louis] = 'p';
        lulu->popo[lulu->louis + 1] = 'b';
        lulu->popo[lulu->louis + 2] = ' ';
        lulu->louis += 3;
        if (lulu->louis > 99997) {
            write(1, lulu->popo , lulu->louis);
            lulu->louis = 0;
        }
        array2[size - 1 - temp] = array[0];
        array[0] = 36;
        jsp = 0;
    }
    display(size, lulu);
}

int *array_empty(int *array, int ac, char **av)
{
    int b = 1;

    for (int a = 0; a < (ac - 1); a += 1) {
        array[a] = my_getnbr(av[b]);
        b += 1;
    }
    return (array);
}

int main(int ac, char **av)
{
    int *array;
    int *arry2;
    lulu_t lulu;
    lulu.popo = malloc(sizeof(char) * 100000);
    lulu.louis = 0;

    if (ac == 1)
        return (84);
    if (ac == 2) {
        write(1 , "\n", 1);
        return (0);
    }
    array = malloc(sizeof(int) * (ac - 1));
    arry2 = malloc(sizeof(int) * (ac - 1));
    array = array_empty(array, ac, av);
    if (array_good(array, ac - 1) == 0) {
        write(1 , "\n", 1);
        return (0);
    }
    my_amazing_sorter(array, (ac - 1), arry2, &lulu);
    write(1, "\n", 1);
    free (lulu.popo);
    return (0);
}