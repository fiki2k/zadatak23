// Program treba spojit 2 stringa u 1.

#include <stdio.h>
int main()
{
   char str1[50], str2[50], i, j;
   printf("Unesi prvi string: ");
   scanf("%s",str1);
   printf("\nUnesi drugi string string: ");
   scanf("%s",str2);
   
   // Ova petlja ide kroz prvi string
   for(i=0; str1[i]!='\0'; ++i); 
 
   // Ova petlja ce spojiti drugi string s prvim.
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   
   // \0 predstavlja kraj stringa.
   str1[i]='\0';
   printf("\nOutput: %s",str1);
   
   return 0;
}
