#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;

int main()
{
    int a=6;
    int arr[50][50][50];
    printf("jhds %p \n",&arr[48][48][48]);
    printf("jhds %x \n",&arr[48][48][48]);
    return 0;
}