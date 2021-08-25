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

    char ch, review[1000], reviewRating;
    int start = 0, count = 0;
    //ch refers to the current char that was avaliated in th fgetc


    if (arquivo == NULL) {
        printf("Erro ao procurar o arquivo mencionado \n");
    }

    else {
        ch = fgetc(arquivo);
        do{
            printf("%c \n", ch);
            if(ch == '"') {
                start = 1;
            }
            //ch = fgetc(arquivo);
            while(start == 1){
                ch = fgetc(arquivo);
                if(ch == '"') {
                    start = 0;
                    count = 0;
                    break;
                }
                review[count] = ch;
                count++;
            }
            fgetc(arquivo);
            reviewRating = fgetc(arquivo);

            switch (reviewRating)
            {
            case '1':
                fputs(review, nota1);
                review[0] = '\0';
                break;
            case '2':
                /* code */
                break;
            case '3':
                /* code */
                break;
            case '4':
                /* code */
                break;
            case '5':
                /* code */
                break;
            default:
                fclose(arquivo);
                printf("Algo de errado não está certo! Tente novamente se tiver coragem.\n");
                break;
            }

        } while((ch = fgetc(arquivo)) != EOF);
    }
    fclose(arquivo);
    printf("eejjk\n");
    return 0;

}