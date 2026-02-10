#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("Enter string: ");
    scanf("%s",s);
    int n=strlen(s),flag=1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            flag=0; break;
        }
    }
    if(flag) printf("YES");
    else printf("NO");
}