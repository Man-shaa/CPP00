/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:48:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/22 19:53:00 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook -> Constructor called" << std::endl << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook -> Destructor called" << std::endl << std::endl;
	return ;
}

void	PhoneBook::PrintHello(void)
{
	std::cout << "Hello World from instance PhoneBook !" << std::endl;
	return ;
}
