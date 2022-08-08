#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(int argc, char **argv){
    /* a buffer to hold the count of characters 0,...,256; it is
     * initialized to zero on every element */
    int count[128] = { 0 };

    /* loop counter */
    int k;

    

    for (int iterator=1; iterator < argc; iterator++)
    {
        int count[128] = { 0 };

        /* loop counter */
        int k;
	    
	    /* file handle --- in this case I am parsing this source code */
        FILE *fp = fopen(argv[iterator], "r");

        /* a holder for each character (stored as int) */
        int c;

        /* for as long as we can get characters... */
        while((c=fgetc(fp))) {

            /* break if end of file */
            if(c == EOF)
                break;

            /* otherwise add one to the count of that particular character */
            count[c]+=1;
        }



        for(k=0; k<128; k++) {
            if(count[k] > 0) {
                //printf("Valor de k: %d\n", count[k]);
                cout<<(char)k<<" " <<(int)count[k]<<endl;
            }
        }
        /* close the file */
        fclose(fp);
    }






    /* that's it */
    return 0;
}

