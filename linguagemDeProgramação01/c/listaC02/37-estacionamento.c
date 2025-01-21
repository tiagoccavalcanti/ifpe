#include<stdio.h>

int transformaEmMinutos(int hora, int minuto){
    int minTotal = hora*60 + minuto;
    return minTotal;
}

int main(){

    int hChegada = 0, mChegada = 0, hPartida = 0, mPartida = 0;
    float pagamento = 0;
    printf("digite a hora e os minutos da chegada: ");
    scanf("%d %d", &hChegada, &mChegada);
    printf("digite o momento de partida: ");
    scanf("%d %d", &hPartida, & mPartida);

    if(hChegada < hPartida){
        switch (hPartida - hChegada)
        {
        case 0:
            pagamento = 1;
            break;
        case 1:
            pagamento = 1;
            if (mPartida - mChegada > 0)
            {
                pagamento += 1;
            }
            break;
        case 2:
            pagamento = 1 + 1;
            if (mPartida - mChegada > 0)
            {
                pagamento += 1.40;
            }
            break;
        case 3:
            pagamento = 1 + 1 +1.40;
            if (mPartida - mChegada > 0)
            {
                pagamento += 1.40;
            }
            break;
        case 4:
            pagamento = 1 + 1 + 1.40 + 1.40;
            if (mPartida - mChegada > 0)
            {
                pagamento += 2;
            }
            break;
        default:
            pagamento = 1 + 1 + 1.40 + 1.40 + 2*((hPartida-hChegada)-4);
            if (mPartida - mChegada > 0)
            {
                pagamento += 2;
            }
            break;
        }
        
    }else{
       pagamento = -(hPartida - hChegada) * 2 + 1 + 1 + 1.40 + 1.40 + 40;
        if (mPartida - mChegada > 0)
                {
                    pagamento += 2;
                }
    }

    printf("hora chegada: %d", hChegada);
    printf("hora chegada: %d", mChegada);
    printf("hora chegada: %d", hPartida);
    printf("hora chegada: %d", mPartida);
    printf("sua conta de estacionamento ficou em: %.2f", pagamento);

    return 0;
}