void   b(char* Uv) {
   int  A =  1;
   for  (int  n = 0; Uv[n]; n++) {
  if  (Uv[n]  == ' ')   { A   = 1; continue;   }
   if  (A)   {
  if  (Uv[n]  >=   'a')   Uv[n]   = Uv[n]   ^   32;
 A   = 0;
 }  else {
 if  (Uv[n]  >=  'A'  &&   Uv[n]  <=  'Z')   Uv[n]  =  Uv[n] ^  32;
   }
 }
}