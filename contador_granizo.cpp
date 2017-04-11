#include <stdio.h>

int main(){
    int i, j, x, n;
    scanf("%d %d", &i, &j);
    n = (j-i) + 1;
    int vetor[n];
    for(x=0;x<n;x++){
       vetor[x] = i;
       i++;
    }

    //Achando o maior
    int maior=0;
    int contador=1;
    for(x=0;x<n;x++){
            while(vetor[x] != 1){
                if(vetor[x]%2 == 0){
                    vetor[x] = vetor[x] / 2;
                }else{
                    vetor[x] = (vetor[x]*3) + 1;
                }
                contador++;
                if(contador>maior){
                    maior = contador;
                }
            }
            contador = 1;
    }

    printf("\n \n%d", maior);

    return 0;
}
