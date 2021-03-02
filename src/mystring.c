#include <stdio.h>
#include <string.h>
#include "mystring.h"

char mystrcat(char d[], char e[])
{
    strcat(d,e);

    //String obtained on concatenation);

    return d;

}



char mystrcmp(char b[], char c[])
{

    if( strcmp(b, c) == 0 )
        return 1; //Entered strings are equal
    else
        return 0; //Entered strings are not equal
}

char mystrcpy(char destinaton[], char source[])
{

  strcpy(destinaton, source);


  return destinaton;
}

int mystrlen(char a[100])
{
  int length;
  length = strlen(a);
  return length;
}
