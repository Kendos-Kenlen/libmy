/*
** my_is_alnum.c for libmy in /home/pogam-_g/dev/C/lib/my/src
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Fri Mar 13 15:24:02 2015 gauthier pogam-lemontagner
** Last update Fri Mar 13 15:24:04 2015 gauthier pogam-lemontagner
*/

int	my_is_alnum(char c)
{
  if (33 <= c && c <= 126)
    return (1);
  return (0);
}
