#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("Enter string: ");
    scanf("%s",s);
    int n=strlen(s);
    printf("Reversed string: ");
    for(int i=n-1;i>=0;i--) printf("%c",s[i]);
}