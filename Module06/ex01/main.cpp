/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:27:58 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:57:57 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serializer.hpp"

int main(void) {
    Data d;
    d.age = 26;
    d.name = "Hakam";

    uintptr_t ptr;

    std::cout << "Data: " << &d << std::endl;
    std::cout << "      name - " << d.name << std::endl;
    std::cout << "      age  - " << d.age << std::endl;

    ptr = serialize(&d);
    Data *d2 = deserialize(ptr);
    
    std::cout << "Data2: " << d2 << std::endl;
    std::cout << "       name - " << d2->name << std::endl;
    std::cout << "       age  - " << d2->age << std::endl;

    return (0);
}