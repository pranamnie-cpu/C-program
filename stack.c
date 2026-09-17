#include<stdio.h>
#include<stdlib.h>
#define max_size 5


int stack[max_size],top=-1;
    void push();
    void pop();
    void display();

int main(){
        int choice;
        while(1){
                printf("\n****BRower History****");
                printf("\n 1 Push");
                printf("\n2 POP");
                printf("\n3 Display");
                printf("\n4 exit");
                printf("\n Enter Choies :");
                scanf("%d",&choice);

            
            switch(choice){
                case 1:{
                    push();
                    break;
                }
                case 2:{
                    pop();
                    break;
                }
                case 3:{
                    display();
                    break;
                }
                case 4:{
                    exit(0);
                    break;
                }
                default:{
                    printf("\nINvalid choies :");
                    break;
                }
                
            }
        }

    
    return 0;
}

void push(){
        int id;
    if (top==(max_size-1)){
        printf("\nOverlap");
    }
    else{
        printf("\nWEb ID :");
        scanf("%d",&id);

        top=top+1;
        stack[top]=id;
        printf("\nstack one web is added %d ",id);
    }
}


void pop(){
    int id;
    if(top==-1){
        printf("STAck is under flow ");
    }
    else{
        id=stack[top];
        top=top-1;
        printf("\n %d Deleted Web is :",id);
    }
}

void display(){
    int i;
    if(top==-1){
        printf("\n History is empty");
    }
    else{
        for(i=top;i>=0;i--){
            printf("\n %d",stack[i]);
        }
    }
}












