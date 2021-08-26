#include <stdio.h>
#include <string.h>
//#include "libgroup01.h"

int main(){

    // Substitute the full file path
    // for the string file_path
    FILE* arquivo, *nota1, *nota2, *nota3, *nota4, *nota5; 
    arquivo = fopen("./DocumentsToRead/dataset.csv", "r");
    nota1 = fopen("./DataSeparated/nota1.txt", "a+");
    nota2 = fopen("./DataSeparated/nota2.txt", "a+");
    nota3 = fopen("./DataSeparated/nota3.txt", "a+");
    nota4 = fopen("./DataSeparated/nota4.txt", "a+");
    nota5 = fopen("./DataSeparated/nota5.txt", "a+");

    char ch, review[5000], reviewRating;
    int start = 0, count = 0;
    //ch refers to the current char that was avaliated in th fgetc


    if (arquivo == NULL) {
        printf("Erro ao procurar o arquivo mencionado \n");
    }

    else {
        do{

            ch = fgetc(arquivo);
            printf("%c \n", ch);
            if(ch == '"') {
                start = 1;
                printf("Passou aqui\n");
            }
            while(start == 1){
                ch = fgetc(arquivo);
                if(ch == '"') {
                    printf("passou aqui 2\n");
                    fgetc(arquivo);
                    reviewRating = fgetc(arquivo);
                    printf("Review Rating: %c\n", reviewRating);
                    // for(int i = 0; i < count; i++) {
                    //     printf("%c", review[i]);
                    // }
                    start = 0;
                    count = 0;
                    break;
                }
                review[count] = ch;
                count++;
            }

            //Segmentation error. How can we proceed?
            switch (reviewRating)
            {
            case '5':
                fputs(review, nota5);
                fputs("\n", nota5);
                printf("%s \n", review);
                //review[0] = '\0';
                memset(review, 0, 3000);
                break;
            case '4':
                fputs(review, nota4);
                fputs("\n", nota4);
                printf("%s \n", review);
                //review[0] = '\0';
                memset(review, 0, 3000);
                break;
            case '3':
                fputs(review, nota3);
                fputs("\n", nota3);
                //review[0] = '\0';
                memset(review, 0, 3000);
                break;
            case '2':
                fputs(review, nota2);
                fputs("\n", nota2);
                //review[0] = '\0';
                memset(review, 0, 3000);
                break;
            case '1':
                fputs(review, nota1);
                fputs("\n", nota1);
                //review[0] = '\0';
                memset(review, 0, 3000);
                break;
            default:
                fclose(arquivo);
                fclose(nota1);
                fclose(nota2);
                fclose(nota3);
                fclose(nota4);
                fclose(nota5);
                printf("Algo de errado não está certo! Tente novamente se tiver coragem.\n");
                break;
            }
        } while((ch = fgetc(arquivo)) != EOF);
    }
    fclose(arquivo);
    fclose(nota1);
    fclose(nota2);
    fclose(nota3);
    fclose(nota4);
    fclose(nota5);
    printf("Finalizou\n");
    return 0;

}