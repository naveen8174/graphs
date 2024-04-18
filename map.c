#include<stdio.h>
#include<stdlib.h>
struct node{
    char name;
    char color;
    int d;
    struct node* par;
};
struct adj{
    char name;
    struct adj* add;
};
struct node* addnode(struct node* p,char a){
    p=(struct node*)malloc(sizeof(struct node));
    p->name=a;
    p->color='w';
    p->d=0;
    p->par=NULL;
}

int main(){
    struct node* a,*b,*c,*d,*e,*f,*g,*h,*i,*j;
    struct node* p[10]={a,b,c,d,e,f,g,h,i,j};
    struct adj* map[10];
    for(int i=0;i<10;i++){
        addnode(p[i],97+i);
    }
    

}