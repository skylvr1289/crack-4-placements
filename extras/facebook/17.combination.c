#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void combination(char **curString,int allowedStart,char **outBuffer,int length)
{
    //check for allowed chars.
    // if not return.
    // else
    // for each char in the allowed char
    // copy into buffer
    //print buffer
    //combine buffer and over next allowed chars
    //remove from buffer.
    int curr;

    if ( allowedStart == length )
        return;
    else    {

            for (curr = allowedStart;curr<length; curr++){
        //need to copy 'a' into outbuffer and keep appending to outbuffer.
        //      printf("allowedStart= %d  curr= %d \n",allowedStart,curr);

                (*outBuffer)[curr] = (*curString)[allowedStart];


                int i = 0;
                while (i < length)
                {
                    if ( ((*outBuffer)[i] == '\0') && ((*outBuffer)[i+1] != '\0') )
                    {
        //              printf("in here\n");
                        (*outBuffer)[i] = (*outBuffer)[i+1];
                        (*outBuffer)[i+1] = '\0';
                    }
                    i++;
                }
                printf("***************************************COMBO: %s\n",*outBuffer);
                allowedStart = curr+1;
                combination(curString,allowedStart,outBuffer,length);
                (*outBuffer)[curr] = ' ';
        //

        } //else
    } //for
}

main()
{
    char *var = "abc";
    int length = strlen(var);
    printf("length = %d\n",length);
//  printf("Intial word is %s\n",var);
    char *outBuffer = malloc ( (length+1) * sizeof (char));
    //bzero(outBuffer,length);
    combination(&var,0,&outBuffer,length);

}
