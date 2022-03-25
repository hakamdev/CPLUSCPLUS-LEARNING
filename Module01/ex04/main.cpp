/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:22:15 by hakamgo           #+#    #+#             */
/*   Updated: 2022/03/16 15:16:35 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace( std::string &line, std::string &query, std::string &substitution ) {
	size_t	_index;

	_index = line.find(query);
	while (_index != std::string::npos) {
		line.erase(_index, query.length());
		line.insert(_index, substitution);
		_index = line.find(query, _index + query.length());
	}
}

void	saveToNewFile(std::string &fileName, std::string &content) {
	std::string _oFileName = fileName + ".replace";
	std::ofstream ofs;
	
	ofs.open(_oFileName);
	if (!ofs.is_open()) {
		std::cout << "Error opening file!" << std::endl;
		return;
	}
	ofs << content;
	ofs.close();
}

void	readFileAndReplace( std::string &fileName, std::string &query, std::string &substitution ) {
	std::ifstream	_ifs(fileName);
	std::string		_newContent;
	std::string		_line;

	if (!_ifs.is_open()) {
		std::cout << "Error opening file!" << std::endl;
		return ;
	}
	while(getline(_ifs, _line)) {
		replace(_line, query, substitution);
		_newContent += _line;
		_newContent += "\n";
	}
	saveToNewFile(fileName, _newContent);
	_ifs.close();
}

int		main( int ac, char **av ) {
	if (ac != 4) {
		std::cout << "Usage: <filename> <query string> <substitution string>" << std::endl << std::endl;
		return (1);
	}
	std::string _iFileName = av[1];
	std::string _query = av[2];
	std::string _substitution = av[3];

	readFileAndReplace(_iFileName, _query, _substitution);

	return (0);
}
