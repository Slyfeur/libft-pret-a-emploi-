/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:21:58 by tuytters          #+#    #+#             */
/*   Updated: 2021/11/10 15:25:35 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	*t;

	t = (const char *)s;
	while (*t != (char)c)
	{
		if (!*t)
			return (0);
		t++;
	}
	return ((char *) t);
}
