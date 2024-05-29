#include <stdio.h>
int main(void) {
  int vize, fnl;
  printf("Vize notunu girin:");
  scanf("%d",&vize);

  printf("Final notunu girin:");
  scanf("%d",&fnl);

  float ortalama = vize*0.4 + fnl*0.6;
  if (ortalama >= 60){
    printf("%f ortalama ile geti", ortalama);
  }
  else{
    printf("%f ortalama ile kaldı", ortalama);
  }
  return 0;
}
