/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Count the number of letters in string s.*/

int lettercount(char* s)
{
    int c = 0, lC = 0 , i ;

    while(s[c]!='\0')
    {
        i = (int)s[c] ;

        if(i > 64 && i < 91)
        {
            lC++ ;
        }
        else if ( i >  96 && i < 123)
        {
          lC++ ;
        }
        c++ ;
    }
    return lC ;
}


/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
