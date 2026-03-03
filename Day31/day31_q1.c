#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

int main() {
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements to push:
");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        stack[++top] = val;
    }

    printf("Stack: ");
    for(int i=top;i>=0;i--) printf("%d ", stack[i]);
}