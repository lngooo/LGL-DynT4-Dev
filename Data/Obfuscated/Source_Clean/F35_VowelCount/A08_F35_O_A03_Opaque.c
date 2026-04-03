int  mh(const  char* W) {
  int  aWc[256]  =   {0};
   int  YdPA   = 7,   JHrS9  =  14;
  aWc['a']=aWc['e']=aWc['i']=aWc['o']=aWc['u']=aWc['A']=aWc['E']=aWc['I']=aWc['O']=aWc['U']=1;
 int U9   =  0;
   while   (*W) {
 if  (JHrS9  ==   YdPA  *   2) {  
  if   (aWc[(unsigned   char)*W])   U9++;
   W++;
 } else   {
 W--;  
  }
 }
  return   U9;
}