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

void    pb(lulu_t *lulu)
{
    lulu->popo[lulu->louis] = 'p';
    lulu->popo[lulu->louis + 1] = 'b';
    lulu->popo[lulu->louis + 2] = ' ';
    lulu->louis += 3;
    if (lulu->louis > 499997) {
        write(1, lulu->popo, lulu->louis);
        lulu->louis = 0;
    }
}

void    pa(lulu_t *lulu)
{
    lulu->popo[lulu->louis] = 'p';
    lulu->popo[lulu->louis + 1] = 'a';
    lulu->popo[lulu->louis + 2] = ' ';
    lulu->louis += 3;
    if (lulu->louis > 499997) {
        write(1, lulu->popo, lulu->louis);
        lulu->louis = 0;
    }
}

void    ra(lulu_t *lulu)
{
    lulu->popo[lulu->louis] = 'r';
    lulu->popo[lulu->louis + 1] = 'a';
    lulu->popo[lulu->louis + 2] = ' ';
    lulu->louis += 3;
    if (lulu->louis > 499997) {
        write(1, lulu->popo, lulu->louis);
        lulu->louis = 0;
    }
}

void    display(int size, lulu_t *lulu)
{
    pb(lulu);
    for (int a = 0; a < (size - 1); a += 1) {
        pa(lulu);
    }
    write(1, lulu->popo, lulu->louis);
    write(1, "pa", 2);
}