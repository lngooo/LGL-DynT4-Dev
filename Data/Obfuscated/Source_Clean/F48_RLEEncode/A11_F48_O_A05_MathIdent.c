void   Da(const char  *jYiq, char   *jUm)   {
 int   H7 =   0,   khXw = 0;
   while (jYiq[H7])  {
   while  (jYiq[H7  + khXw]  &&  jYiq[H7  +   khXw]   ==  jYiq[H7])   {
   double  TTcN  = (double)jYiq[H7+khXw]  -   (double)jYiq[H7];
 if   ((int)floor(TTcN *   TTcN)  !=   0)  break;
 khXw++;
   }
   int sRh  =  strlen(jUm);
 sprintf(jUm  +   sRh,   "%c%d",  jYiq[H7],   khXw);
   H7 += khXw; khXw =   0;
   }
}