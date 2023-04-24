/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:48:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/24 16:16:21 by msharifi         ###   ########.fr       */
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
	newIndex = 0;
	while (input.empty() == true)
		getline(std::cin, input);
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
		{
			newIndex = nContact % 8;
			std::cout << "add a new contact" << std::endl;
			std::cout << nContact << std::endl;
			contact[newIndex].InitContact(newIndex);
			nContact++;
		}
		if (input.compare("SEARCH") == 0)
		{
			std::cout << "search a contact and print it" << std::endl;
			PrintAllContact();
			printChosenContact();
		}
		getline(std::cin, input);
	}
}

void	PhoneBook::PrintAllContact(void)
{
	for (int i = 0; i < nContact && i < 8; i++)
	{
		contact[i].PrintContactRow();
	}
}

void	PhoneBook::printChosenContact(void)
{
	std::string	input;
	std::stringstream	stream;
	int			index;

	getline(std::cin, input);
	if (input.size() != 1)
		return ;
	if (input.compare("0") >= 0 && input.compare("0") < 9)
	{
		stream.clear();
		stream.str(input);
		stream >> index;
		contact[index].PrintContact();
	}
}
