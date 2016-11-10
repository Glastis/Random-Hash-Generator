#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "gen.h"

void		print_rand_char(int i)
{
  srand(time(NULL) + getpid() + i);
  printf("%c", (rand() % ('~' - '!')) + '!');
}

int		main(int ac, char **av)
{
  t_gen		all;
  size_t	i;

  i = 0;
  all.max_len = 64;
  if (ac > 1)
    all.max_len = atoi(av[1]);
  while (i < all.max_len)
    {
      print_rand_char(i);
      ++i;
    }
  printf("\n");
  return (0);
}
