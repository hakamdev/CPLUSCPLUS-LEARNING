/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:22:15 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 22:26:19 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;

int		main( int ac, char **av ) {
	if (ac != 4)
		return (1);
	string _iFileName = av[1];
	string _oFileName = _iFileName + ".replace";
	string _find = av[2];
	string _replace = av[3];
	string _content;

	ifstream	iFile;
	iFile.open(_iFileName);
	if (iFile.is_open()) {
		while (getline(iFile, _content)) {
			cout << _content << endl;
			while (_content.find(_find) != string::npos) {
				
			}
		}
	}
	iFile.close();
	return (0);
}