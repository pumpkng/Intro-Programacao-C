#include <stdio.h>

int main(){
    float A[2][2],B[2][2],CONTA[2][2],constante;
    char c;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\n\nA[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\n\nB[%d][%d]: ",i,j);
            scanf("%f",&B[i][j]);
        }
    }

    printf("\n\nSelecione uma das opções: a, b, c ou d ");
    printf("\n(a) somar as duas matrizes (b) subtrair a primeira matriz da segunda (c) adicionar uma constante às duas matrizes (d) imprimir as matrizes\n");
    scanf(" %c",&c);

    switch (c){
        case 'a':
            printf("\nMatriz soma:\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    CONTA[i][j]=A[i][j]+B[i][j];
                    printf("%.1f\t",CONTA[i][j]);
                }
                printf("\n");
            }
            break;
        
        case 'b':
            printf("\nMatriz subtraída:\n");       
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    CONTA[i][j]=B[i][j]-A[i][j];
                    printf("%.1f\t",CONTA[i][j]);
                }
                printf("\n");
            }
            break;

        case 'c':
            printf("\nAdicione a constante: ");
            scanf("%f",&constante);
            printf("\nMatrizes com a constante:\n");
            printf("\nA:\n");
        
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    A[i][j]+=constante;
                    printf("%.1f\t",A[i][j]);
                }
                printf("\n");
            }
        
            printf("\nB:\n");
        
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    B[i][j]+=constante;
                    printf("%.1f\t",B[i][j]);
                }
                printf("\n");
            }
            break;    
        
        case 'd':
            printf("\nA:\n");
        
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%.1f\t",A[i][j]);
                }
                printf("\n");
            }
        
            printf("\nB:\n");
        
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%.1f\t",B[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("\nOpção inválida!");
            break;
    }
    return 0;
}