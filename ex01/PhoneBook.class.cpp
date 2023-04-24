/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:48:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/24 14:47:17 by msharifi         ###   ########.fr       */
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

void	PhoneBook::CatchInstruction(void)
{
	std::string	input;

	nContact = 0;
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
		{
			std::cout << "add a new contact" << std::endl;
			nContact++;
			std::cout << nContact << std::endl;
			contact[0].InitContact();
			contact[0].PrintContact();
		}
		if (input.compare("SEARCH") == 0)
			std::cout << "search a contact and print it" << std::endl;
		// while (input.empty() == true)
		getline(std::cin, input);
	}
}

// void	PhoneBook::PrintAllContact(void)
// {
// 	while (contact)
// }
