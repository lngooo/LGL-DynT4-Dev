void DEe(int w2,  char*   Bh)  {
  char  *q0   = Bh;
 int   HCf =   w2 /  1000;  w2  %= 1000;
   while(HCf--)  *q0++   =   'M';
  int ejTw =  w2 / 100;   w2   %=   100;
 if(ejTw   ==   9) { *q0++  =   'C';   *q0++  =  'M';   }
 else   if(ejTw  >=   5) {  *q0++  = 'D'; ejTw-=5; while(ejTw--) *q0++  = 'C';   }
  else  if(ejTw  ==   4)   { *q0++ =  'C';  *q0++ = 'D';  }
 else {  while(ejTw--)  *q0++   = 'C'; }
  int dqJu6   =   w2   /  10; w2 %=   10;
 if(dqJu6   ==   9)   {  *q0++   =  'X';   *q0++  = 'C';   }
  else   if(dqJu6  >= 5)   {   *q0++   =  'L'; dqJu6-=5;   while(dqJu6--) *q0++   =  'X';  }
  else   if(dqJu6  == 4)   {   *q0++   =  'X'; *q0++  =  'L';   }
  else { while(dqJu6--)   *q0++  =   'X';   }
  if(w2   ==  9)  { *q0++ = 'I'; *q0++  =  'X';   }
 else   if(w2 >=  5) { *q0++  =   'V'; w2-=5; while(w2--)   *q0++   =   'I';  }
 else  if(w2   == 4)   {  *q0++ = 'I';   *q0++  =  'V';   }
  else  {   while(w2--)   *q0++ =  'I';  }
  *q0   =  '\0';
}