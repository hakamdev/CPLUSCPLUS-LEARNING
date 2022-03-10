/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:53:01 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:54:07 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__

# include "Data.hpp"

uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif // __SERIALIZER_HPP__
