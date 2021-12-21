/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:22:15 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/21 20:33:48 by ehakam           ###   ########.fr       */
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

void	replace( string &line, string &query,string &substitution ) {
	size_t	index;

	index = line.find(query);
	while (index != string::npos) {
		line.erase(index, query.length());
		line.insert(index, substitution);
		index = line.find(query);
	}
}

void	saveToNewFile(string &fileName, string &content) {
	string oFileName = fileName + ".replace";
	ofstream ofs;
	
	ofs.open(oFileName);
	ofs << content;
	ofs.close();
}

void	readFileAndReplace( string &fileName, string &query,string &substitution ) {
	ifstream	ifs(fileName);
	string		newContent;
	string		line;

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
		cout << "Usage: <filename> <query> <substitute>" << endl << endl;
		return (1);
	}
	string _iFileName = av[1];
	string _oFileName = _iFileName + ".replace";
	string _query = av[2];
	string _substitution = av[3];
	string _newContent;

	readFileAndReplace(_iFileName, _query, _substitution);

	return (0);
}