void  Q(int   MS[],  int UL,  int   pY1)  {
 int eNA8 =  0;
  while  (eNA8   !=   2)   {
   switch   (eNA8)  {
 case   0: if (UL   < pY1)   eNA8 =  1;   else   eNA8  = 2; break;
   case  1:  {
 int q  = UL + (pY1  -  UL)  / 2;
 Q(MS,   UL,   q);
   Q(MS, q  +  1,  pY1);
 int *VKm   = (int*)malloc((pY1-UL+1)*4);
 int x=UL,   vDo6=q+1,   fIAB3=0;
  while(x<=q   &&  vDo6<=pY1)  VKm[fIAB3++]  = (MS[x]<=MS[vDo6]) ?  MS[x++] :  MS[vDo6++];
 while(x<=q)  VKm[fIAB3++]  = MS[x++]; while(vDo6<=pY1)  VKm[fIAB3++]  =  MS[vDo6++];
   for(int  n=0;  n<fIAB3;   n++)  MS[UL+n]   =  VKm[n];
   free(VKm);   eNA8   =   2;   break;
  }
   }
  }
}