//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define Deep 10
typedef struct Tree
{
    struct Tree *l;
    struct Tree *r;
    int data;
}Tree;
typedef struct Treeroot
{
    Tree*Head;
    int n;
}Tr;
void creatTree(Tree** Treer,int n)
{
    char x='a'+rand()%2;
    if(x=='a'&&n<11)
    {
        *Treer=(Tree*)malloc(sizeof(Tree));
        (*Treer)->data=n+1;
        (*Treer)->l=NULL;
        (*Treer)->r=NULL;
        creatTree(&((*Treer)->l),n+1);
        creatTree(&((*Treer)->r),n+1);
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    Tr TreeHead;
    TreeHead.Head=NULL;
    TreeHead.n=0;
    creatTree(&TreeHead.Head,TreeHead.n);
    return 0;
}
