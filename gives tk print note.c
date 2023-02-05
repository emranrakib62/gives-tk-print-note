#include<stdio.h>
main(){

int tk;
printf("enter tk:");
scanf("%d",&tk);
int note500,note200,note100,note50,note20,note10,note5,note2,note1;
note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
if(tk>=500){
    note500=tk/500;
    tk=tk%500;
}
if(tk>=200){
    note200=tk/200;
    tk=tk%200;
}
if(tk>=100){
    note100=tk/100;
    tk=tk%100;
}
if(tk>=50){
    note50=tk/50;
    tk=tk%50;
}
if(tk>=20){
    note20=tk/20;
    tk=tk%20;
}

if(tk>=10){
    note10=tk/10;
    tk=tk%10;
}
if(tk>=5){
    note5=tk/5;
    tk=tk%5;
}
if(tk>=2){
    note2=tk/2;
    tk=tk%2;
}
if(tk>=1){
    note1=tk/1;
}
printf("500tk note:%d\n",note500);
printf("200tk note:%d\n",note200);
printf("100tk note:%d\n",note100);
printf("50tk note:%d\n",note50);
printf("20tk note:%d\n",note20);
printf("10tk note:%d\n",note10);
printf("5tk note:%d\n",note5);
printf("2tk note:%d\n",note2);
printf("1tk note:%d\n",note1);

}
