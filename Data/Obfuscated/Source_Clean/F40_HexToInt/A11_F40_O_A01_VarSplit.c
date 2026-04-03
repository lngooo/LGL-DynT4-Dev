int   yq0(const char* t)   {
 int kGT  = 0,   ONt0  =   0;
   while   (*t)   {
   int   aq   = (*t <= '9')  ?   (*t  - '0')   :   ((*t|32)  -  'a'  +   10);
  kGT  =  (kGT *   16) + ((ONt0   * 16  + aq)  / 1000000);
 ONt0   = (ONt0  *   16   +  aq) %  1000000;
   t++;
 }
 return kGT * 1000000   + ONt0;
}