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

int    add_or_not(int *array, int jsp)
{
    if (array[0] == 36) {
        jsp += 1;
        return (jsp);
    }
    return (jsp);
}

void    my_amazing_sorter(int *array, int size, int *array2, lulu_t *lulu)
{
    int nbr_min;
    int jsp = 0;

    for (int temp = 0; temp != size - 1; temp += 1) {
        nbr_min = nbr_min_position(array, size);
        for (int a = 0; a != nbr_min; a += 1) {
            jsp = add_or_not(array, jsp);
            rotate_left(array, size);
        }
        for (int b = 0; b + jsp < nbr_min; b += 1) {
            ra(lulu);
        }
        pb(lulu);
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
    lulu.popo = malloc(sizeof(char) * 500000);
    lulu.louis = 0;

    if (ac == 1)
        return (84);
    array = malloc(sizeof(int) * (ac - 1));
    arry2 = malloc(sizeof(int) * (ac - 1));
    array = array_empty(array, ac, av);
    if (ac == 2 || array_good(array, ac - 1) == 0) {
        write(1 , "\n", 1);
        return (0);
    }
    my_amazing_sorter(array, (ac - 1), arry2, &lulu);
    write(1, "\n", 1);
    free (lulu.popo);
    return (0);
}