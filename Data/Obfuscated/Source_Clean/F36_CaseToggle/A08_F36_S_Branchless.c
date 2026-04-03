void bhZW7(char* TY8)   {
 while  (*TY8)  {
   int F  =   (*TY8  >=   'a'  &&   *TY8 <= 'z');
   int   KOHF  = (*TY8 >= 'A' && *TY8 <=   'Z');
 *TY8  = *TY8 - (F  * 32) +  (KOHF  *   32);
   TY8++;
   }
}