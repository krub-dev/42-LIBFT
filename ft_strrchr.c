/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:57:01 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/21 22:47:57 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*s = "Haoala";
	int	c = 72;
	char	*res_ft = ft_strrchr(s, c);
	char	*res_orig = strrchr(s, c);

	printf("Propia: %s\n", res_ft);
	printf("Original: %s\n", res_orig);
	
	if (res_ft == res_orig)
		printf("Original y propia coinciden\n");
	else
		printf("Original y propia NO coinciden\n");
	
	return (0);
}*/
