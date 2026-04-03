void ShellSort(int *a, int n) {
    int s[]={109,41,19,5,1};for(int x=0;x<5;x++){int g=s[x];if(g>=n)continue;for(int i=g;i<n;i++){int v=a[i],j=i;while(j>=g&&a[j-g]>v){a[j]=a[j-g];j-=g;}a[j]=v;}}
}