#include<stdio.h>
void enc(char *s ,char k ){
    int i=0;
    while(s[i]!='\0'){
    s[i]=s[i]^k;
    i++;
    }
   puts(s);
}
void dec(char *s, char k){
    int j=0;
    while(s[j]!='\0'){
    s[j]=s[j]^k;
    j++;
    }
   puts(s);
}
int main(){
    char s[1000];
    char k;
    gets(s);
    scanf("%c",&k);
    enc(s,k);
    dec(s,k);
    return 0;
}