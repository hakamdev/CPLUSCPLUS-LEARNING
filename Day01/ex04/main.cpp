/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:22:15 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:12:24 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace( std::string &line, std::string &query, std::string &substitution ) {
	size_t	index;

	index = line.find(query);
	while (index != std::string::npos) {
		line.erase(index, query.length());
		line.insert(index, substitution);
		index = line.find(query);
	}
}

void	saveToNewFile(std::string &fileName, std::string &content) {
	std::string oFileName = fileName + ".replace";
	std::ofstream ofs;
	
	ofs.open(oFileName);
	if (!ofs.is_open()) {
		std::cout << "Error opening file!" << std::endl;
		return;
	}
	ofs << content;
	ofs.close();
}

void	readFileAndReplace( std::string &fileName, std::string &query, std::string &substitution ) {
	std::ifstream	ifs(fileName);
	std::string		newContent;
	std::string		line;

	if (!ifs.is_open()) {
		std::cout << "Error opening file!" << std::endl;
		return;
	}
	while(getline(ifs, line)) {
		replace(line, query, substitution);
		newContent += line;
		newContent += "\n";
	}
	saveToNewFile(fileName, newContent);
	ifs.close();
}

int		main( int ac, char **av ) {
	if (ac != 4) {
		std::cout << "Usage: <filename> <query string> <substitution string>" << std::endl << std::endl;
		return (1);
	}
	std::string _iFileName = av[1];
	std::string _oFileName = _iFileName + ".replace";
	std::string _query = av[2];
	std::string _substitution = av[3];
	std::string _newContent;

	readFileAndReplace(_iFileName, _query, _substitution);

	return (0);
}