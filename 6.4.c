// #include<stdio.h>
// int main(){
//  int a[4]={};

//   printf("Enter 4 elements of array:");

//   for(int i=0; i < 4; i++){
//     scanf("%d",&a[i]);
//        }
  
//   for(int i=0; i < 4; i++){
//     if(a[i] > a[i+1]){
//       a[i+1] = a[i];
      
//     }
//   }
//   for(int i=0; i < 4; i++){
//     printf("%d\n",a[i]);
//   }
//   return 0;
// }


#include <stdio.h>

int main() {
    int arr[2][2][2];  // 3D array: 2 blocks, each with 3 rows and 4 columns
    int i, j, k;

    // Input elements
    printf("Enter elements for a 3D array [2][3][4]:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("arr[%d][%d][%d] = ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Output elements
    printf("\n3D Array contents:\n");
    for (i = 0; i < 2; i++) {
        printf("Block %d:\n", i);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
