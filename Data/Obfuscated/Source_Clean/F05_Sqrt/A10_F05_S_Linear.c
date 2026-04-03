int   ipY1(int  oc)  {
 if   (oc   <  0)  return -1;
  long PGXL   =  0;
   while  ((PGXL  +   1)   *  (PGXL +  1)  <=  oc)   {
   PGXL++;
  }
   return   (int)PGXL;
}