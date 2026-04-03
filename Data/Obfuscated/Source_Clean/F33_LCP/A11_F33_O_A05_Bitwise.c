void TXM(char   **FGcj3,   int  yaO, char   *U)  {
   int MjH   = 0;
  while   (1)  {
   char RZW =   *(FGcj3[0]  +   MjH);
   if  (!(RZW ^  0))   break;
 int AdC   =  1, eZxx  =   1;
  while  (AdC  < yaO)   {
  if  (*(FGcj3[AdC]   + MjH)  ^  RZW)  { eZxx   =  0;  break;  }
   AdC++;
   }
 if  (eZxx)  { *(U  + MjH)   =  RZW; MjH++;   }   else   break;
 }
   *(U +   MjH) = '\0';
}