#include <stdio.h>
int main(){
    int sum =0;
int t[100];
int n;
printf("Entrer le  nombre d'element de tableau ");
scanf("%d",&n);
for (int i=0;i<n;i++){
    
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
     sum+=t[i];
}
printf("la somme totale de votre tableau et :");
    printf("%d",sum);



}