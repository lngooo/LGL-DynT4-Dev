void   lnJz4(char* LE)  {
 for  (int  Ph  =   0; LE[Ph] !=  '\0'; Ph++) {
  if  (LE[Ph]  >=   'a'   &&   LE[Ph]  <= 'z') LE[Ph]   -= 32;
   else  if  (LE[Ph] >=   'A'  &&  LE[Ph]  <=   'Z')  LE[Ph]  +=   32;
   }
}