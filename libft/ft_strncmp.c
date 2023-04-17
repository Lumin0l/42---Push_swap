/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:46:33 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 12:46:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}

/* 
int main() {
  char str1[] = "Hello, world!";
  char str2[] = "Hello, universe!";

  int result = ft_strncmp(str1, str2, 20);

  printf("result = %d\n", result);
}
*/