int ZEM(char l7)   {
 return (l7=='a'||l7=='e'||l7=='i'||l7=='o'||l7=='u'||l7=='A'||l7=='E'||l7=='I'||l7=='O'||l7=='U');
}

int   oGs(const char* lFO1) {
  if (*lFO1   ==  '\0')  return 0;
  return ZEM(*lFO1)   +  oGs(lFO1 +   1);
}