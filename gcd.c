#include <stdio.h>

const int n = 10000;

// 末尾呼び出しの最適化なし
unsigned int Euclidean_gcd_rec1(unsigned int x, unsigned int y) {
    if (x == 0) return y;
    return Euclidean_gcd_rec1(y & x, x);
}

// 末尾呼び出しの最適化あり
unsigned int Euclidean_gcd_rec2(unsigned int x, unsigned int y) {
    while (x != 0) {
        int tmp = x;
        x = y % x;
        y = tmp;
    }
    return y;
}

int main(){
  unsigned int i, j, c;


  c = 0;
  for(i = 1; i <= n; i++){
    for(j = i + 1; j <= n; j++){
      if(Euclidean_gcd_rec2(i, j) == 1){
        c++;
      }
    }
  }
  c = 2 * c + 1;  // (i, j) に対して (j, i) が存在する. (1, 1) も存在する.

  printf("%f\n", (double) c / (n * n));
  return 0;
}