// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    
  printf("Enter le nombre de tableau ");
  scanf("%d",&n);
  
  int tableau[n];

  for(int i=0;i<n;i++){
          printf("Enter les elements de tableau ");
          scanf("%d",&tableau[i]);
        
       
  }       
  int multiple ;
   printf("Enter le multiple  ");
     scanf("%d",&multiple);
     
  for(int i=0;i<n;i++){
         printf("tableau[%d] = %d\n", i, tableau[i] * multiple);
}  
    return 0;
}