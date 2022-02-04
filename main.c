#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node * link;
};
struct node *top=0;
void push(int x){
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node ));
  newnode->data=x;
  newnode->link=top;
  top=newnode;
}
void display(){
  struct node *temp;
  temp =top;
  if(temp==0){
    printf("Empty\n");
  }
  else{
    while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->link;
    }
     printf("\n");
  }
}
void peek(){
  if(top==NULL){
    printf("Empty\n");
  }else{
    printf("%d\n",top->data);
  }
}
void pop(){
  struct node *temp;
  temp=top;
  if(top==0){
    printf("Empty\n");

  }else{
    printf("%d\n",top->data);
    top=top->link;
    free(temp);
  }
}

int main(){
  push(2);
  push(10);
  push(21);
  push(3);
  display();
  peek();
  pop();
  peek();
  display();
}

