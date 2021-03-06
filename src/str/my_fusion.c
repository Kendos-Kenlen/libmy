/*
** my_fusion.c for libmy in /home/pogam-_g/dev/C/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:12:12 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:12:14 2014 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

char		*my_fusion(char *s1, char *s2)
{
  size_t	i;
  size_t	j;
  size_t	k;
  char	*dest;

  i = my_strlen(s1);
  j = my_strlen(s2);
  dest = xmalloc((i + j + 1) * sizeof(char));
  k = i;
  i = 0;
  while (i < k)
    {
      dest[i] = s1[i];
      i++;
    }
  k = j;
  j = 0;
  while (j < k)
    dest[i++] = s2[j++];
  dest[i] = '\0';
  return (dest);
}
