void  ydB(char* Q0)  {
   int N0   =  strlen(Q0);
 for (int  rg   =  0;   rg  <   N0;   rg+=2) {
  Q0[rg] =   tolower(Q0[rg]);
   if (rg+1 <   N0)   Q0[rg+1]  =   tolower(Q0[rg+1]);
   }
   if  (N0   >  0)   Q0[0]   = toupper(Q0[0]);
   for (int  rg  =   1; rg  <   N0; rg++)  {
 if (Q0[rg-1]   ==   ' ') Q0[rg] =   toupper(Q0[rg]);
   }
}