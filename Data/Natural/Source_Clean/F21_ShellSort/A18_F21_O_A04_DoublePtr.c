void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int s=0;s<g;s++){for(int i=s+g;i<n;i+=g){int k=a[i],j=i-g;while(j>=s){int **pp=&a;if((*pp)[j]>k){a[j+g]=(*pp)[j];j-=g;}else break;}a[j+g]=k;}}}
}