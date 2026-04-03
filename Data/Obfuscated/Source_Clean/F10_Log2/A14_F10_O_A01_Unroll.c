int  pkHX0(int p1)  {
  int   n   =  0;
   while   (p1   >= 4)   {  p1 >>=  2;  n  += 2;  }
   while  (p1  >=   2) {  p1   >>=   1;   n  +=   1;  }
 return  n;
}