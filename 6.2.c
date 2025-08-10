#include <stdio.h>
int main() {
  int a[10] = {};
  int sum = 0;
  int mul = 1;
  printf("Enter 10 elements of array:");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    if (i % 2 != 0) {
      sum += a[i];
    } else {
      mul *= a[i];
    }
  }
  printf("Sum of odd places numbers: %d\n", sum);
  printf("Multi of even places numbers: %d", mul);
}