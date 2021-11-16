#include <stdio.h>
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = search(arr, n, x);
  if (result != -1) {
    printf("%d xuat_hien_tai_chi_so %d", x, result);
  } else {
    printf("%d khong_ton_tai", x);
  }
  return 0;
}
 
