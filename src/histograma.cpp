#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(int argc, char **argv){
    /* buffer de contagem de caracteres entre 0,...,128; é inicializado
    com 0 em cada elemento */
    int count[128] = { 0 };

    /* contador */
    int k;

    for (int iterator=1; iterator < argc; iterator++)
    {
        int count[128] = { 0 };

        int k;
	    
	    /* identificador de arquivo com argv definido como parâmetro para a leitura da lista de arquivos */
        FILE *fp = fopen(argv[iterator], "r");

        /* variável que percorrerá os caracteres */
        int c;

        /* obtendo os caracteres até o fim do arquivo... */
        while((c=fgetc(fp))) {

            if(c == EOF)
                break;

            /* caso não for o fim do arquivo, adicione 1 à contagem desse caractere específico */
            count[c]+=1;
        }

        for(k=0; k<128; k++) {
            if(count[k] > 0) {
                cout<<(char)k<<" " <<(int)count[k]<<endl;
            }
        }
        /* fechando o arquivo */
        fclose(fp);
    }

    return 0;
}

