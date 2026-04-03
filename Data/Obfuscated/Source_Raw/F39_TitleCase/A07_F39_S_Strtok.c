/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A07_F39_S_Strtok.c
 * Implementation Logic: Uses strtok to isolate words, titlecase them, and reassemble.
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void   PeAZ(char*   b) {
  char   LbXE6[1024];
  strcpy(LbXE6, b);
 char* HaM   =   strtok(LbXE6,  " ");
  b[0] = '\0';
  while  (HaM)  {
   HaM[0]  = toupper(HaM[0]);
 for(int  db=1;  HaM[db]; db++)  HaM[db]   = tolower(HaM[db]);
 strcat(b,   HaM);
   HaM   =  strtok(NULL,   " ");
 if   (HaM)   strcat(b,  " ");
 }
}

int  main(int argc, char*   argv[])   {
  if  (argc  <  2)   return  0;
  PeAZ(argv[1]);
   printf("%s",  argv[1]);
   return 0;
}