#include <stdio.h>
#include <ctype.h>

char stack[100];
int top=-1;

void push(char x){ stack[++top]=x; }
char pop(){ return stack[top--]; }

int main(){
    char exp[100];
    printf("Enter infix expression: ");
    scanf("%s",exp);

    for(int i=0; exp[i]; i++){
        if(isalnum(exp[i])) printf("%c",exp[i]);
        else{
            while(top!=-1) printf("%c",pop());
            push(exp[i]);
        }
    }
    while(top!=-1) printf("%c",pop());
}