#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dumpbuffer.h"

void split(char * str){
    const char * delim = " ";
    char * token;
    int count = 0;

    token = strtok(str, delim);
    if (token != NULL){
        count++;
        printf("Token %d: %s \n", count, token);
        dumpbuffer(token, 30);
    }    
    while (token != NULL){
        token = strtok(NULL, delim);
        if (token != NULL){
            count++;
            printf("Token %d: %s \n", count, token);
            dumpbuffer(token, 30);
        }
    }
}

void split2(char * str1, char * str2){
    const char * delim = " ";
    char * token;
    int count = 0;
    char * token2;
    int count2 = 0;

    token = strtok(str1, delim);
    if (token != NULL){
        count++;
        printf("Token %d: %s \n", count, token);
        dumpbuffer(token, 30);
    }    

    token2 = strtok(str2, delim);
    if (token2 != NULL){
        count2++;
        printf("Token %d: %s \n", count2, token2);
        dumpbuffer(token2, 30);
    }    
    
    while (token != NULL && token2 != NULL){
        token = strtok(NULL, delim);
        if (token != NULL){
            count++;
            printf("Token %d: %s \n", count, token);
            dumpbuffer(token, 30);
        }

        token2 = strtok(NULL, delim);
        if (token2 != NULL){
            count2++;
            printf("Token %d: %s \n", count2, token2);
            dumpbuffer(token2, 30);
        }
    }
}

int main(int ac, char * av[]){

    char s[100];
    char s2[100];
    strcpy(s, "this is alex's test program");
    strcpy(s2, "this is toby's code now");
    dumpbuffer(s, 30);
    dumpbuffer(s2, 30);
    // split(s);
    // split(s2);
    split2(s, s2);

    return 0;
}