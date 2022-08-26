#include "stdio.h" 
#include"stdlib.h"
typedef struct{
    int front;
    int rear;
    int used;
    int capacity;
    int *arr;
}queue;
queue *create(int capacity){
    queue *q = (queue*)malloc(sizeof(queue));
    q-> front = 0;
    q->rear =-1;
    q->used =0;
    q->capacity=capacity;
    q->arr = (int*)malloc(capacity*(4));
    return q;
}
int isfull(queue *q){
    if(q->used == q->capacity ) return 0;
    return -1;
}
int isempty(queue *q){
    if(q->used ==0) return 0;
    return -1;
}
void enqueue(queue *q,int data){
    if(isfull(q)==0){
        printf("day roi");
    }else{
        q->rear++;
        q->arr[q->rear]=data;
        q->used++;
    }
}
void dequeue(queue *q,int *readdata){
    if(isempty(q)==0){
        printf("dang rong");
    }else{
        *readdata=q->arr[q->front];
        q->front++;
        q->used--;
    }
}
int main(){
    system("ipconfig");
}