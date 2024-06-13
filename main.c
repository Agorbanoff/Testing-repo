#include <stdio.h>
void main(){
    char x='x';
    int br=0;
    while(x!='\n'){
        scanf("%c", &x);
        if(x=='(') br++;
        if(x==')') br--;
        if(br<0) break;
    }
    if(br>0||br<0)printf("No");
    else printf("Yes");
}
