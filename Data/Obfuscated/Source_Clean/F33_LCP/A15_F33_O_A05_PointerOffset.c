void   pjX(char  **X,  int   XtD,   char  *yZJ1)  {
 char *Ue = *X;
  int eZER4 =  0;
   while(*(Ue +   eZER4)) {
  for(int   HD=1; HD<XtD;  HD++) {
 if(*(X[HD]   +   eZER4)   !=  *(Ue   +  eZER4))  {   *(yZJ1  +  eZER4) = 0;   return;   }
   }
   *(yZJ1 +   eZER4) =   *(Ue  +   eZER4);
  eZER4++;
   }
   *(yZJ1 +  eZER4)   =   0;
}