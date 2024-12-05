#include <stdio.h>

void sort_array(int *arr, int len) {
int count = 0;

for (int i = 0; i < len; i++) {
if (arr[i] != 0) {
arr[count++] = arr[i];
}
}

while (count < len) {
arr[count++] = 0;
}
}

int main(){
int n;
scanf("%d", &n);

int arr[n];
for (int i = 0; i < n; i++){
scanf("%d", &arr[i]);
}

sort_array(arr, n);
int i;
for (int i = 0; i < n; i++){
printf("%d", arr[i]);
if (i != n-1){
printf(" ");
}
}
printf("\n");

return 0;
}