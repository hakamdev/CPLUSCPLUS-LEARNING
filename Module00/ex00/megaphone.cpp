/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:02:18 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/27 20:16:48 by ehakam           ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::cout << toUpper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
