int LxwB(const   char*  db1) {
  int  Xot  =  0;
   while (*db1)  {
   char ozb8 = *db1;
   if  ((ozb8 >= 65  && ozb8  <= 117)) { 
   if (ozb8=='a'||ozb8=='e'||ozb8=='i'||ozb8=='o'||ozb8=='u'||ozb8=='A'||ozb8=='E'||ozb8=='I'||ozb8=='O'||ozb8=='U')
   Xot++;
  }
 db1++;
  }
  return   Xot;
}