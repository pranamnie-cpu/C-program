#include<stdio.h>
#include<string.h>

void largeWord();
int main(){

    char word[]="Pranam Naik";
    char word2[]=", Who am I..?";

    printf("%s",word);

    printf("\n %zu Length :",strlen(word));

    char wordCopy[strlen(word)+1];
    strcpy(wordCopy,word);
    printf("\n %s\n",wordCopy);


    strcat(word,word2);
    printf("%s",word);

    int result=strcmp(word,word2);
    printf("\n %d Compaer Diff :",result);

    largeWord();
    return 0;
}

void largeWord(){
    char a[]="SPRFGS";
    char b[]="RPSQ";

    printf("\n%zu :Length ",strlen(a));
    
    printf("%zu :Length ",strlen(b));

    if(strcmp(a,b)>0){
        printf("\nA is BIg ");
    }
        else if(strcmp(a,b)<0){
        printf("\nB is BIg ");
    }
    else{
        printf("\n Equal ");
    }
    
}