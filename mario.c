#include <stdio.h>

void
clc ()
{
  printf ("\e[2J");
}

void
print_pixel (int x, int y, int color)
{
  printf ("\e[%d;%dH\e[38;5;%d;1m█\e[0m", y, x, color);
}

#define RED 1
#define YELLOW 3
#define BROWN 8

void
print_mario (int x, int y)
{
  print_pixel (x + 4, y + 1, RED);
  print_pixel (x + 5, y + 1, RED);
  print_pixel (x + 6, y + 1, RED);
  print_pixel (x + 7, y + 1, RED);
  print_pixel (x + 8, y + 1, RED);
  print_pixel (x + 9, y + 1, RED);

  print_pixel (x + 3, y + 2, RED);
  print_pixel (x + 4, y + 2, RED);
  print_pixel (x + 5, y + 2, RED);
  print_pixel (x + 6, y + 2, RED);
  print_pixel (x + 7, y + 2, RED);
  print_pixel (x + 8, y + 2, RED);
  print_pixel (x + 9, y + 2, RED);
  print_pixel (x + 10, y + 2, RED);
  print_pixel (x + 11, y + 2, RED);
  print_pixel (x + 12, y + 2, RED);

  /* print_pixel(x+12,y+3,RED); */

  print_pixel (x + 3, y + 3, BROWN);
  print_pixel (x + 4, y + 3, BROWN);
  print_pixel (x + 5, y + 3, BROWN);
  print_pixel (x + 6, y + 3, BROWN);
  print_pixel (x + 7, y + 3, YELLOW);
  print_pixel (x + 8, y + 3, YELLOW);
  print_pixel (x + 9, y + 3, BROWN);
  print_pixel (x + 10, y + 3, YELLOW);

  print_pixel (x + 2, y + 4, BROWN);
  print_pixel (x + 3, y + 4, BROWN);
  print_pixel (x + 4, y + 4, YELLOW);
  print_pixel (x + 5, y + 4, BROWN);
  print_pixel (x + 6, y + 4, YELLOW);
  print_pixel (x + 7, y + 4, YELLOW);
  print_pixel (x + 8, y + 4, YELLOW);
  print_pixel (x + 9, y + 4, BROWN);
  print_pixel (x + 10, y + 4, YELLOW);
  print_pixel (x + 11, y + 4, YELLOW);
  print_pixel (x + 12, y + 4, YELLOW);

  print_pixel (x + 2, y + 5, BROWN);
  print_pixel (x + 3, y + 5, BROWN);
  print_pixel (x + 4, y + 5, YELLOW);
  print_pixel (x + 5, y + 5, BROWN);
  print_pixel (x + 6, y + 5, BROWN);
  print_pixel (x + 7, y + 5, YELLOW);
  print_pixel (x + 8, y + 5, YELLOW);
  print_pixel (x + 9, y + 5, YELLOW);
  print_pixel (x + 10, y + 5, BROWN);
  print_pixel (x + 11, y + 5, YELLOW);
  print_pixel (x + 12, y + 5, YELLOW);
  print_pixel (x + 13, y + 5, YELLOW);

  print_pixel (x + 2, y + 6, BROWN);
  print_pixel (x + 3, y + 6, BROWN);
  print_pixel (x + 4, y + 6, BROWN);
  print_pixel (x + 5, y + 6, YELLOW);
  print_pixel (x + 6, y + 6, YELLOW);
  print_pixel (x + 7, y + 6, YELLOW);
  print_pixel (x + 8, y + 6, YELLOW);
  print_pixel (x + 9, y + 6, BROWN);
  print_pixel (x + 10, y + 6, BROWN);
  print_pixel (x + 11, y + 6, BROWN);
  print_pixel (x + 12, y + 6, BROWN);

  print_pixel (x + 3, y + 7, YELLOW);
  print_pixel (x + 4, y + 7, YELLOW);
  print_pixel (x + 5, y + 7, YELLOW);
  print_pixel (x + 6, y + 7, YELLOW);
  print_pixel (x + 7, y + 7, YELLOW);
  print_pixel (x + 8, y + 7, YELLOW);
  print_pixel (x + 9, y + 7, YELLOW);
  print_pixel (x + 10, y + 7, YELLOW);
  print_pixel (x + 11, y + 7, YELLOW);

  print_pixel (x + 3, y + 8, BROWN);
  print_pixel (x + 4, y + 8, BROWN);
  print_pixel (x + 5, y + 8, BROWN);
  print_pixel (x + 6, y + 8, RED);
  print_pixel (x + 7, y + 8, BROWN);
  print_pixel (x + 8, y + 8, BROWN);
  print_pixel (x + 9, y + 8, BROWN);

  print_pixel (x + 2, y + 9, BROWN);
  print_pixel (x + 3, y + 9, BROWN);
  print_pixel (x + 4, y + 9, BROWN);
  print_pixel (x + 5, y + 9, BROWN);
  print_pixel (x + 6, y + 9, RED);
  print_pixel (x + 7, y + 9, BROWN);
  print_pixel (x + 8, y + 9, BROWN);
  print_pixel (x + 9, y + 9, RED);
  print_pixel (x + 10, y + 9, BROWN);
  print_pixel (x + 11, y + 9, BROWN);
  print_pixel (x + 12, y + 9, BROWN);

  print_pixel (x + 1, y + 10, BROWN);
  print_pixel (x + 2, y + 10, BROWN);
  print_pixel (x + 3, y + 10, BROWN);
  print_pixel (x + 4, y + 10, BROWN);
  print_pixel (x + 5, y + 10, BROWN);
  print_pixel (x + 6, y + 10, RED);
  print_pixel (x + 7, y + 10, RED);
  print_pixel (x + 8, y + 10, RED);
  print_pixel (x + 9, y + 10, RED);
  print_pixel (x + 10, y + 10, BROWN);
  print_pixel (x + 11, y + 10, BROWN);
  print_pixel (x + 12, y + 10, BROWN);
  print_pixel (x + 13, y + 10, BROWN);

  print_pixel (x + 1, y + 11, YELLOW);
  print_pixel (x + 2, y + 11, YELLOW);
  print_pixel (x + 3, y + 11, YELLOW);
  print_pixel (x + 4, y + 11, BROWN);
  print_pixel (x + 5, y + 11, RED);
  print_pixel (x + 6, y + 11, YELLOW);
  print_pixel (x + 7, y + 11, RED);
  print_pixel (x + 8, y + 11, RED);
  print_pixel (x + 9, y + 11, YELLOW);
  print_pixel (x + 10, y + 11, RED);
  print_pixel (x + 11, y + 11, BROWN);
  print_pixel (x + 12, y + 11, YELLOW);
  print_pixel (x + 13, y + 11, YELLOW);

  print_pixel (x + 1, y + 12, YELLOW);
  print_pixel (x + 2, y + 12, YELLOW);
  print_pixel (x + 3, y + 12, YELLOW);
  print_pixel (x + 4, y + 12, YELLOW);
  print_pixel (x + 5, y + 12, RED);
  print_pixel (x + 6, y + 12, RED);
  print_pixel (x + 7, y + 12, RED);
  print_pixel (x + 8, y + 12, RED);
  print_pixel (x + 9, y + 12, RED);
  print_pixel (x + 10, y + 12, RED);
  print_pixel (x + 11, y + 12, YELLOW);
  print_pixel (x + 12, y + 12, YELLOW);
  print_pixel (x + 13, y + 12, YELLOW);

  print_pixel (x + 1, y + 13, YELLOW);
  print_pixel (x + 2, y + 13, YELLOW);
  print_pixel (x + 3, y + 13, YELLOW);
  print_pixel (x + 4, y + 13, RED);
  print_pixel (x + 5, y + 13, RED);
  print_pixel (x + 6, y + 13, RED);
  print_pixel (x + 7, y + 13, RED);
  print_pixel (x + 8, y + 13, RED);
  print_pixel (x + 9, y + 13, RED);
  print_pixel (x + 10, y + 13, RED);
  print_pixel (x + 11, y + 13, RED);
  print_pixel (x + 12, y + 13, YELLOW);
  print_pixel (x + 13, y + 13, YELLOW);

  print_pixel (x + 3, y + 14, RED);
  print_pixel (x + 4, y + 14, RED);
  print_pixel (x + 5, y + 14, RED);
  print_pixel (x + 6, y + 14, RED);
  print_pixel (x + 8, y + 14, RED);
  print_pixel (x + 9, y + 14, RED);
  print_pixel (x + 10, y + 14, RED);
  print_pixel (x + 11, y + 14, RED);

  print_pixel (x + 2, y + 15, BROWN);
  print_pixel (x + 3, y + 15, BROWN);
  print_pixel (x + 4, y + 15, BROWN);
  print_pixel (x + 5, y + 15, BROWN);
  print_pixel (x + 9, y + 15, BROWN);
  print_pixel (x + 10, y + 15, BROWN);
  print_pixel (x + 11, y + 15, BROWN);
  print_pixel (x + 12, y + 15, BROWN);

  print_pixel (x + 1, y + 16, BROWN);
  print_pixel (x + 2, y + 16, BROWN);
  print_pixel (x + 3, y + 16, BROWN);
  print_pixel (x + 4, y + 16, BROWN);
  print_pixel (x + 5, y + 16, BROWN);

  print_pixel (x + 9, y + 16, BROWN);
  print_pixel (x + 10, y + 16, BROWN);
  print_pixel (x + 11, y + 16, BROWN);
  print_pixel (x + 12, y + 16, BROWN);
  print_pixel (x + 13, y + 16, BROWN);
}

int
main (int argc, char *argv[])
{
  clc ();
  print_mario (30, 1);
  printf ("\n");
  return 0;
}
