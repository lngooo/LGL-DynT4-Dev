void  r(int y[], int   G)   {
 for   (int   AXdd   =  1;  AXdd  < G;   AXdd++) {
 int  h   =   y[AXdd], Vm  =   AXdd  -   1;
  for (;  (Vm >=  0  ? y[Vm]   > h : 0);   Vm--)  y[Vm+1]   = y[Vm];
   y[Vm+1]   = h;
  }
}