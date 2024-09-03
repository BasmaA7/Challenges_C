#include <stdio.h>
int main(){
    int t[100];
   int n;
   int min=0;
printf("Entrer le  nombre d'element de tableau ");
scanf("%d",&n);
for (int i=0;i<n;i++){
  printf("t[%d]=",i);
  scanf("%d",&t[i]);
  if (min<t[i]){
    printf("%d",t[min]);
}
}

    
    
}