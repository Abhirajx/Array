#include <stdio.h>
int main() {
  int a[10] = {};
  int sum = 0;
  printf("Enter 10 elements of array:");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);

    sum += a[i];
  }
  printf("Sum of 10 numbers: %d\n", sum);
  printf("Avg of 10 numbers: %d", sum / 10);

  return 0;
}

// #include<stdio.h>
// int main(){
//   float a[10]={};
//   float sum = 0;
//   printf("Enter 10 elements of array:");

//   for(int i=0; i < 10; i++){
//     scanf("%f",&a[i]);

//     sum +=a[i];
//   }
//   printf("Sum of 10 numbers: %f\n",sum);
//   printf("Avg of 10 numbers: %f",sum/10);

// return 0;
// }
