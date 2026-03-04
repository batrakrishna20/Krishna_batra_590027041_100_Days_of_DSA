#include <stdio.h>
#define MAX 100

int stack[MAX], top=-1;

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        stack[++top]=val;
    }

    printf("Popped element: %d\n", stack[top--]);

    printf("Stack now: ");
    for(int i=top;i>=0;i--) printf("%d ",stack[i]);
}