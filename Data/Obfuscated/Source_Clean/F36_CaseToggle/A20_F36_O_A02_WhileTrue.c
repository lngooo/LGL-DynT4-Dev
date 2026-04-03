void  IMZ(char*   tmA)   {
   while  (1)  {
  if  (!*tmA) break;
 unsigned   char  Vi =   (unsigned   char)*tmA;
  if ((Vi  >=  'a' &&   Vi <= 'z')  ||   (Vi >=   'A' &&   Vi   <=  'Z'))  {
 *tmA  =   (char)(Vi ^ 0x20);
   }
 tmA++;
 }
}