/*
** EPITECH PROJECT, 2019
** CPE_pushswap_bootstrap_2019
** File description:
** my.h
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct lulu_s
{
    char *popo;
    int louis;
}lulu_t;

int    *swap(int *array);
int    *rotate_right(int *array, int size);
int    *rotate_left(int *array, int size);
int    array_good(int *array, int size);
int    nbr_min_position(int *array,  int size);
void    display(int size, lulu_t *lulu);
void    my_amazing_sorter(int *array, int size, int *array2, lulu_t *lulu);
int *array_empty(int *array, int ac, char **av);