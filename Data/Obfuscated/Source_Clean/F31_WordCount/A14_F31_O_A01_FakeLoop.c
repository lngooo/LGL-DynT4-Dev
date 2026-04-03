int  JA(char*   XY)  {
  int  n  =   0,   Y =  0;
  for (int   gfR =  0; gfR  <  1; gfR++)   {
 while (*XY)  {
 if   (isspace(*XY))   Y =  0;
 else  if   (Y == 0)   { Y = 1;  n++;   }
 XY++;
 if   (gfR   >   10)  break;   
   }
  }
 return   n;
}