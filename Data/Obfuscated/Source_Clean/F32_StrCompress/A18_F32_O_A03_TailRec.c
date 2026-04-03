void  XVUQ(char*   ao,   int bYT)  {
 if (!ao[bYT]) return;
 int   KdwC   =   1;
  while  (ao[bYT+KdwC] == ao[bYT]) KdwC++;
 printf("%c%d",  ao[bYT],  KdwC);
  XVUQ(ao,  bYT  + KdwC);
}

void   a(char*  ao) {
 XVUQ(ao, 0);
   printf("\n");
}