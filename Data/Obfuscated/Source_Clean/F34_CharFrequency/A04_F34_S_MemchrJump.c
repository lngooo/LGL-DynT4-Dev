int  j9(char* GVNv, char   aqCI5)   {
  int  dqvr  =  0;
   char*  dRd   =  GVNv;
 int AG1  =   strlen(GVNv);
 while   ((dRd  =   memchr(dRd, aqCI5,   (GVNv  +  AG1)   -  dRd)) !=  NULL)   {
   dqvr++;
 dRd++;
 }
   return   dqvr;
}