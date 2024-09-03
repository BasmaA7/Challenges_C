#include <stdio.h>
int main(){
    int t[100];
   int n;
   int max;
   printf("Entre le premier element");
   scanf("%d",&t[0]);
   max=t[0];
printf("Entrer le  nombre d'element de tableau ");
scanf("%d",&n);
for (int i=1;i<n;i++){
  printf("t[%d]=",i);
  scanf("%d",&t[i]);
  if (max>t[i]){
    printf("%d",max);
}
}

    
    
}