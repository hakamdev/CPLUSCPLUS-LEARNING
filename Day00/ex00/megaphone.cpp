/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:02:18 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/21 17:38:46 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

using std::cout;
using std::string;
using std::endl;

string	toUpper(char *str) {
	std::string	upperStr;

	for (size_t i = 0; str[i]; i++) {
		upperStr += toupper(str[i]);
	}
	return (upperStr);
}

int		main(int argc, char **argv)
{
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		cout << toUpper(argv[i]);
	}
	cout << endl;
	return (0);
}
