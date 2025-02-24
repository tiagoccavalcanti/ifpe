#include<stdio.h>

int main(){
    int num = 1, contador = 0;

do
{
    contador =0;

    for (int i = 1; i <= 20; i++)
    {
        if(num % i == 0){
            contador ++;
        }else{
            break;
        }
    }
    if(contador == 20){
        break;
    }

    num++;

}while(1);

printf("%d", num);

    return 0;
}