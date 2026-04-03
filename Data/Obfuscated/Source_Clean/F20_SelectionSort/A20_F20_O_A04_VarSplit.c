void aKzt(int N3[], int s)  {
   int   VqbE  =  0,  h =   s - 1;
   while   (VqbE <   h)   {
 int  J =   VqbE,  NBeU   = VqbE;
 for   (int  EjX   =  VqbE;  EjX  <=   h;   EjX++)  {
 if (N3[EjX]   < N3[J])   J = EjX;
   if   (N3[EjX]  >  N3[NBeU])  NBeU =   EjX;
 }
   int   m = N3[VqbE]; N3[VqbE] =  N3[J];  N3[J]   =   m;
  if  (NBeU  == VqbE) NBeU = J;
   int A = N3[h]; N3[h]  =   N3[NBeU]; N3[NBeU]  = A;
  VqbE++; h--;
   }
}