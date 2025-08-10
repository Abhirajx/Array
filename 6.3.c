// #include<stdio.h> // MAXIMUM NUMBER
// int main(){
//   int a[4]={};
//   int max = 0;
//   printf("Enter 4 elements of array:");

//   for(int i=0; i < 4; i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0; i < 4 ; i++){
//     if(a[i] > max){
//       max = a[i];
    
//   }
   

// }
//   printf("Max among elements: %d",max);

// }



// MINIMUM NUMBER
#include<stdio.h>
int main(){
  int a[4]={};
 
  printf("Enter 4 elements of array:");

  for(int i=0; i < 4; i++){
    scanf("%d",&a[i]);
     }
  int min = a[0];
  for(int i=0; i < 4; i++){
    
    if(a[i] < min ){
      min = a[i];
    }
  


  }
  printf("Min among elements: %d",min);



}


