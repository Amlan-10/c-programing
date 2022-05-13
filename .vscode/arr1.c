 #include<stdio.h> //(Addition of matrix)
int main() {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("ENTER THE NUMBER OF ROWS: ");
  scanf("%d", &r);
  printf("ENTER THE NUMBER OF COLUMNS: "); 
  scanf("%d", &c);

  printf("\nENTER ELEMENTS OF 1ST MATRIX:\n");
  for (i = 0; i < r; ++i) 
    for (j = 0; j < c; ++j) {
      printf("ENTER ELEMENT a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("ENTER ELEMENTS OF 2ND MATRIX:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("ENTER ELEMENT b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSUM OF TWO MATRICES: \n");
  for (i = 0; i < r; ++i) 
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
    
  return 0;
}