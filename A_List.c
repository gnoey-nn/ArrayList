#include <stdio.h>
#include <stdlib.h>
#include "A_List.h"

void Linit(AList *prelist)
{
    prelist->num = 0;
    prelist->cur = 0;
    prelist->curnum = -1;
}

void Linsert(AList *prelist, int predata)
{
    if(prelist->num >= List_LEN)
    {
        printf("imposible");
    }
    else
    {
        prelist->arr[prelist->num] = predata;
        (prelist->num)++;
    }
}

int Lstart(AList *prelist)
{
    if(prelist->num == 0)
    {
        printf("imposible");
        return 0;
    }
    else
    {
        prelist->curnum = 0;
        prelist->cur = prelist->arr[0];
        return prelist->cur;
    }
}

int Lnext(AList *prelist)
{
    if(prelist->curnum + 1 >= prelist->num)
    {
        printf("imposible");
        return 0;
    }

    prelist->cur = prelist->arr[++(prelist->curnum)];
    return prelist->cur;
}

int Lremove(AList *prelist)
{
    int rempos = prelist->curnum;
    int remdata = prelist->arr[prelist->curnum];
    int i;

    for(i = rempos; i < (prelist->num) - 1; i++)
    {
        prelist->arr[i] = prelist->arr[i+1];
    }

    (prelist->num)--;
    (prelist->curnum)--;
    return remdata;
}

int Lcount(AList *prelist)
{
    return prelist->num;
}