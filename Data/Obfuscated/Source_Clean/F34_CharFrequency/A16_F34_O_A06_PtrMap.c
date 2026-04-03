int rkL(char*  F4,   char   u6)  {
 int TRs3[256];
 memset(TRs3,   0,  sizeof(TRs3));
 for(char* RJhi5  =   F4;  *RJhi5;  RJhi5++)   {
 (*(TRs3  + (unsigned  char)*RJhi5))++;
   }
   return *(TRs3  +  (unsigned   char)u6);
}