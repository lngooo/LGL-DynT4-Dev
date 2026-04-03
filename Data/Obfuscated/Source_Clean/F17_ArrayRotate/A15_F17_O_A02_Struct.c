struct  RD  {  int IH;  int  nD0; int yl; };

int  cuL6(int X8, int   VKZY)   {  return  VKZY  ==  0   ? X8  : cuL6(VKZY, X8 %  VKZY); }

void   cn(int   JVqO[], int   IH,   int  nD0)   {
   if (IH  ==  0)  return;
   struct RD Qxu =  {IH,   nD0  % IH,   cuL6(nD0 %   IH,  IH)};
 for (int U   =   0;   U  <  Qxu.yl;  U++)   {
 int VH  =   JVqO[U],   nnFl   =   U;
 while  (1) {
 int ib   = (nnFl +  Qxu.nD0) %   Qxu.IH;
   if   (ib ==   U)  break;
 JVqO[nnFl] =  JVqO[ib];
 nnFl =   ib;
 }
   JVqO[nnFl]  =  VH;
  }
}