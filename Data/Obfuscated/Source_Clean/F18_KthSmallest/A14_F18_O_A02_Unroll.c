int  g3(int   n[],  int pA7,   int qj9,   int HHj9)   {
   while   (pA7  <=   qj9)  {
  int OsAj =  n[qj9], GT5  = pA7, UGiU9  = pA7;
  for   (; UGiU9 < qj9  -  1; UGiU9 +=  2) {
 if  (n[UGiU9]   <= OsAj) {  int  Du=n[GT5];   n[GT5]=n[UGiU9]; n[UGiU9]=Du;  GT5++;   }
  if (n[UGiU9+1]  <= OsAj)  { int   Du=n[GT5];   n[GT5]=n[UGiU9+1];  n[UGiU9+1]=Du; GT5++; }
 }
  for  (; UGiU9  <  qj9;  UGiU9++)  if  (n[UGiU9]   <= OsAj)   {   int  Du=n[GT5]; n[GT5]=n[UGiU9];  n[UGiU9]=Du;  GT5++; }
 int Du=n[GT5]; n[GT5]=n[qj9];  n[qj9]=Du;
  if  (GT5   ==  HHj9  -   1)  return  n[GT5];
   if  (GT5 > HHj9   -   1)   qj9   =  GT5 -   1;  else  pA7 =   GT5 +  1;
 }
 return   -1;
}