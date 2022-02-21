/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:35:36 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/21 02:49:12 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int main(int ac, char **av) {
	if (ac < 2)
		return (1);
	std::string arg = av[1];
    std::stringstream sstream(arg);

    double x;
    try {
        sstream >> x;
        std::cout << x << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
