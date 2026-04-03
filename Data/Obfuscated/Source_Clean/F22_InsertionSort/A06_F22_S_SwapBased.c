void  Hx3(int  CQU[], int Lx) {
   for   (int   OeV = 1; OeV  < Lx;   OeV++)  {
 for   (int  r   =  OeV;   r  >  0   &&  CQU[r-1]  >  CQU[r];   r--)   {
  int rzD2   =   CQU[r]; CQU[r]  =   CQU[r-1]; CQU[r-1]   =  rzD2;
   }
  }
}