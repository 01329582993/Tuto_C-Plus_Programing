#include<stdio.h>
long int rounding(long int y){
long int c=1;
while(y){
y=y>>1;
c*=2;
}
 return c;
}

long int absolute(long  int y){
    y=~y;
    return y;
}
long int without(long int y){
   return ((y | (y >> 31)) + 1) >> 31 & -1;
}
long int swapping(long int y){
    long int result ;
     result = ((y & 0xAAAAAAAA) >> 1) | ((y & 0x55555555) << 1);
return result;
}


int main(){
    int count;
    long int out;
    scanf("%d",&count);
    while(count--){
    long int y;
    int x; 
    scanf("%d %ld",&x,&y);
    if(x==1){
    out=rounding(y);
    printf("%ld \n",out);
    }
    else if(x==2){
    out=absolute(y);
    printf("%ld \n",out);
    }
   else  if(x==3){
    out=swapping(y);
    printf("%ld \n",out);
    }
    else if(x==4){
    out=without(y);
    printf("%ld \n",out);
    }
    else printf("!!! ERROR\nEnter the correct input\n");
    }

    return 0;
}