/********************************************
*
* NAME: main.c (Linked Lists)
*
* DATE: 26.05.2020
*
* AUTHOR: Henry Bai
*
* DEPENDENCIES:
*          *linkedListLib.c
*          *linkedListLib.h
*
*********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedListLib.h"

int main(){

    listElement *start;
    start = (listElement *)malloc(sizeof(listElement));
    if (start == NULL) {
        printf("can't reserve storage.\n"); 
        return -1;
        }
    start->nextElem = NULL;

    int FLAG = 1;
    while (FLAG){
    
        printf("1... print list\n");
        printf("2... add element\n");
        printf("3... delete element\n");
        printf("4... delete list\n");
		printf("5... save list\n");
		printf("6... load list\n");
		printf("7... sort list\n");
        printf("0... quit\n");
        scanf("%d",&FLAG);
        system("cls"); // cls for windows


        switch (FLAG){
            case 1: printList(start); break;
            case 2: addListElem(start); break;
            case 3: delListElem(start); break;
            case 4: delList(start); break;
			case 5: saveList(start); break;
			case 6: loadList(start); break;
            case 7: sortList(start); break;
            case 0: FLAG = 0; exitFcn(start); break;
            default: printf("invalid choice\n"); break;
        }
    }
    return 0;
}