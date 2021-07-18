/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:02:18 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/18 18:24:19 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

std::string	toUpper(char *str) {
	std::string	upperStr;

	for (size_t i = 0; str[i]; i++) {
		upperStr += toupper(str[i]);
	}
	return (upperStr);
}

int			main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++) {
		std::cout << toUpper(argv[i]);
	}
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}
