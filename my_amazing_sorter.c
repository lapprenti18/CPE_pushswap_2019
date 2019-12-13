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

void    display(int size)
{
    write (1, "pb ", 3);
    for (int a = 0; a != size - 1; a += 1)
        write(1, "pa ", 3);
    write(1, "pa", 2);
}

void    my_amazing_sorter(int *array, int size, int *array2)
{
    int nbr_min;
    int jsp = 0;

    for (int temp = 0; temp != size - 1; temp += 1) {
        nbr_min = nbr_min_position(array, size);
        for (int a = 0; a != nbr_min; a += 1) {
            if (array[0] == 36)
                jsp += 1;
            rotate_left(array, size);
        }
        for (int b = 0; b + jsp < nbr_min; b += 1)
            write(1, "ra ", 3);
        write (1, "pb ", 3);
        array2[size - 1 - temp] = array[0];
        array[0] = 36;
        jsp = 0;
    }
    display(size);
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
    my_amazing_sorter(array, (ac - 1), arry2);
    write(1, "\n", 1);
    return (0);
}
