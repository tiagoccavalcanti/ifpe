#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    int result1 = 0;
    int c = rand() % 100;
    int d = rand() % 100;
    int result2 = 0;
    int e = rand() % 100;
    int f = rand() % 100;
    int result3 = 0;
    int g = rand() % 100;
    int h = rand() % 100;
    int result4 = 0;
    int i = rand() % 100;
    int j = rand() % 100;
    int result5 = 0;
    
    printf("Qual a soma de %d + %d:\n",a,b);
    scanf("%d", &result1);
    if (result1 == (a+b)){
        printf("resposta correta\n");
    }else{
        printf("resposta errada\n");
    }

    printf("Qual a soma de %d + %d:\n",c,d);
    scanf("%d", &result2);
    if (result2 == (c+d)){
        printf("resposta correta\n\n");
    }else{
        printf("resposta errada\n\n");
    }
    printf("Qual a soma de %d + %d:\n",e,f);
    scanf("%d", &result3);
    if (result3 == (e+f)){
        printf("resposta correta\n\n");
    }else{
        printf("resposta errada\n\n");
    }

    printf("Qual a soma de %d + %d:\n",g,h);
    scanf("%d", &result4);
    if (result4 == (g+h)){
        printf("resposta correta\n\n");
    }else{
        printf("resposta errada\n\n");
    }

    printf("Qual a soma de %d + %d:\n",i,j);
    scanf("%d", &result5);
    if (result5 == (i+j)){
        printf("resposta correta\n\n");
    }else{
        printf("resposta errada\n\n");
    }

    printf("\n\n\ngabatito:\n\n");
    printf("Qual a soma de %d + %d: %d\n",a,b, a+b);
    printf("Qual a soma de %d + %d: %d\n",c,d, c+d);
    printf("Qual a soma de %d + %d: %d\n",e,f, e+f);
    printf("Qual a soma de %d + %d: %d\n",g,h, g+h);
    printf("Qual a soma de %d + %d: %d\n",i,j, i+j);

    return 0;
}