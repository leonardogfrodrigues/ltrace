#include <iostream>
#include <fstream>
#include <stdio.h>    
#include <stdlib.h>    

using namespace std;

struct CharInstance {
    int count;
    char letter;
};

int main(int argc, char **argv)
{
    char letter;
    int i, j;
    CharInstance temp;

    /* buffer de contagem de caracteres entre 0,...,26; é inicializado
    com 0 em cada elemento */
    CharInstance charInst[26] = { 0 };

    // identificador de arquivo com argv definido como parâmetro para a leitura da lista de arquivos
    for(int iterator=1; iterator < argc; iterator++){
        ifstream file(argv[iterator]);
        while (file >> letter) {
            // Unificando letras maiúsculas e minúsculas para facilitar a contagem
            if (letter >= 'a' && letter <= 'z') letter -= 32;
        
            if (letter < 'A' || letter > 'Z') continue; // ignorando caracteres que não são letras

            const int ind = letter - 'A';
            ++charInst[ind].count;
            charInst[ind].letter = letter;
        }
        file.close();
    

        // bubble sort para definição do histograma
        for (i = 0; i < 26; i++)
        {
            for (j = i + 1; j < 26; j++)
            {
                if (charInst[j].count > charInst[i].count)
                {
                    temp = charInst[i];
                    charInst[i] = charInst[j];
                    charInst[j] = temp;
                }
            }
        }

        for (i = 0; i < 26; i++) {
            cout << charInst[i].letter << "-> " << charInst[i].count << "  " << endl;
        }
    }
    return 0;
}