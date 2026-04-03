struct  BWr  {   const char *ArJn8;   const  char  *uYv6;  };

int  JT3(const  char *X, const char   *vQs) {
 struct BWr   Exk4   =   {X,   vQs};
   while  (*Exk4.ArJn8   && (*Exk4.ArJn8 == *Exk4.uYv6)) {
 Exk4.ArJn8++;  Exk4.uYv6++;
   }
 return *(unsigned   char   *)Exk4.ArJn8   -   *(unsigned   char *)Exk4.uYv6;
}