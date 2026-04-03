void  Epi4(int Eij[], int  Y5)   {
 if (Y5 <= 1)  return;
  Epi4(Eij,   Y5 - 1);
   int   Ref = Eij[Y5  - 1];
   int  Qy  = Y5  -  2;
 while (Qy  >=   0  && Eij[Qy] >   Ref)   {
  Eij[Qy + 1]   =  Eij[Qy];
  Qy--;
  }
 Eij[Qy   +  1]   = Ref;
}