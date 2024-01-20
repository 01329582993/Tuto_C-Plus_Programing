#include<stdio.h>
int main(){
unsigned int num;
int count1=0;


num=~num;
while(num){
    num=num>>1;
    count1 ++;
}
printf("unsigned int : %d \n",count1);


unsigned char c;
int count2=0;
c=~c;
while(c){
    c=c>>1;
    count2 ++;
}
printf("unsigned char : %d \n",count2);


unsigned short s;
int count3=0;
s=~s;
while(s){
    s=s>>1;
    count3++;
}
printf("unsigned short : %d \n",count3);


unsigned long l;
int count4=0;
l=~l;
while(l){
l=l>>1;
count4++;
}
printf("unsigned long : %d \n",count4);


unsigned long long ll;
int count5=0;
ll=~ll;
while(ll){
    ll=ll>>1;
    count5++;
}
printf("unsigned long long : %d \n",count5);
    return 0;
}