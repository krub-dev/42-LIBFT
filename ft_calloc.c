/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:43:50 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/21 22:47:43 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	btotal;

	if (size != 0 && count > ((size_t) -1 / size))
		return (NULL);
	btotal = count * size;
	ptr = (void *)malloc(btotal * sizeof(void));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, btotal);
	return (ptr);
}

/*
int	main(void)
{
	size_t	count = 6;
	size_t	size = 2;

	
	char	*res_ft = ft_calloc(count, size);
	printf("Puntero ft es: %p\n", res_ft);
	char	*res_orig = calloc(count, size);
	printf("Puntero original es: %p\n", res_orig);
	printf("No coinciden en espacio en memoria, solo su contenido\n");
	
	if (printf("%s",res_ft) == printf("%s",res_orig))
		printf("Contenido de original y propia coinciden\n");
	else
		printf("Contenido de original y propia NO coinciden\n");
	
	free(res_ft);
	free(res_orig);
	
	return (0);
}*/
