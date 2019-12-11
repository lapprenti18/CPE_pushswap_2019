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

int    *swap(int *array)
{
    int c = array[0];

    array[0] = array[1];
    array[1] = c;
    return (array);
}

int    *rotate_right(int *array, int size)
{
    int i = array[size - 1];

    for (; size != 0; size -= 1)
        array[size] = array[size - 1];
    array[0] = i;
    return (array);
}

int    *rotate_left(int *array, int size)
{
    int i = array[0];

    for (int a = 0; a != size; a += 1)
        array[a] = array[a + 1];
    array[size - 1] = i;
    return (array);
}

int    array_good(int *array, int size)
{
    int z = 0;

    while (z < size - 1) {
        if (array[z + 1] < array[z])
            return (1);
        z += 1;
    }
    return (0);
}

int    nbr_min_position(int *array,  int size)
{
    int nb_min;
    int position;
    int a;

    for (a = 0; array[a] == 36; a += 1);
    nb_min = array[a];
    position = a;
    for (int z = 0; z != size; z += 1) {
        if (array[z] < nb_min && array[z] != 36) {
            position = z;
            nb_min = array[z];
        }
    }
    return (position);
}
