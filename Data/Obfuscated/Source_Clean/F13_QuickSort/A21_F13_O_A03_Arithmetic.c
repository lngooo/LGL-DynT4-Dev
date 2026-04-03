void   D1(int  uavs[], int   Jvoz, int  qNsz2)  {
 if   (Jvoz <  qNsz2) {
 int  yoa = Jvoz,   rOvB0  =  qNsz2, dtn2 =   uavs[Jvoz   +  (qNsz2 - Jvoz) /   2];
  while   (yoa <=   rOvB0)   {
   while   (uavs[yoa] < dtn2)   yoa  =   yoa + 1;
  while   (uavs[rOvB0]   > dtn2)   rOvB0  =   rOvB0 -   1;
  if   (yoa  <=   rOvB0)  {
 int  SnO  = uavs[yoa];   uavs[yoa]  = uavs[rOvB0]; uavs[rOvB0]  =  SnO;
   yoa  =   yoa +  1;  rOvB0 =  rOvB0 -  1;
  }
   }
  D1(uavs,  Jvoz,   rOvB0);
 D1(uavs,   yoa,  qNsz2);
  }
}