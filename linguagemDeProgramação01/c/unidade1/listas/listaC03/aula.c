/* #include<stdio.h>
#include<math.h>

int main(){
int media = 0, contador = 0, nota = 0;

while (contador < 10)
{
    printf("insira a %d nota: ", contador+1);
    scanf("%d", &nota);

    if(nota < 0 || nota > 100){
        printf("nota invalida\n");
    }else{
    media += nota;
    contador ++;}
}

printf("a media das notas sera: %d", (media/contador));

} */