/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A11_F30_O_A02_Goto.c
* Implementation Logic: Loop reconstructed as a goto-chain derived from A02.
*/


#include <stdio.h>
#include <string.h>

int   Gf0(char*  oqeF,  char*   oQKD) {
  char* Qr =  oqeF;
  int   YrXN =   strlen(oQKD);
 if (YrXN   == 0)  return 0;
tC:
 if   (!*Qr)   goto   PVa;
  if  (strncmp(Qr,  oQKD,  YrXN)   == 0) goto  oil0;
   Qr++;
   goto tC;
oil0:
   return  (int)(Qr   -   oqeF);
PVa:
 return  -1;
}

int  main(int   argc, char*   argv[])   {
 if  (argc <   3)  return  0;
  printf("%d\n", Gf0(argv[1],   argv[2]));
   return  0;
}