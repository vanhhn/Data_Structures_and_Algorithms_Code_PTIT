#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
typedef struct
{
  char hl[20];
  int id;
  float diemtb;
  char name[100];
} SV;
int cmp(const void *a, const void *b)
{
  SV *x = (SV *)a;
  SV *y = (SV *)b;
  if (fabs(x->diemtb - y->diemtb) < 1e-6) {
    return x->id - y->id;
  }
  return (x->diemtb < y->diemtb) ? 1 : -1;
}
int main()
{
  int n;
  scanf("%d", &n);
  float d[10];
  SV a[n];
  char c[100];
  for (int i = 0; i < n; i++)
  {
    scanf("\n");
    fgets(c, 100, stdin);
    c[strlen(c) - 1] = '\0';
    strcpy(a[i].name, c);
    a[i].id = i + 1;
    float sum = 0;
    for (int j = 0; j < 10; j++)
    {
      scanf("%f", &d[j]);
      sum += d[j];
    }
    a[i].diemtb = sum / 10;
    if (a[i].diemtb >= 9)
    {
      strcpy(a[i].hl, "XUAT SAC");
    }
    else if (a[i].diemtb >= 8)
    {
      strcpy(a[i].hl, "GIOI");
    }
    else if (a[i].diemtb >= 7)
    {
      strcpy(a[i].hl, "KHA");
    }
    else if (a[i].diemtb >= 5)
    {
      strcpy(a[i].hl, "TB");
    }
    else
    {
      strcpy(a[i].hl, "YEU");
    }
  }
  qsort(a, n, sizeof(a[0]), cmp);
  for (int i = 0; i < n; i++)
  {
    printf("HS0%d %s %.1f %s\n", a[i].id, a[i].name, a[i].diemtb, a[i].hl);
  }

  return 0;
}
