/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:13:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/24 14:41:29 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Contact -> Constructor called" << std::endl << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact -> Destructor called" << std::endl << std::endl;
	return ;
}

std::string	Contact::ParseStringInput(std::string input)
{
	if (input.size() > 10)
	{
		input = input.substr(0, 10);
		input.replace(9, 1, ".");
	}
	else if (input.empty())
		input = "Default";
	return (input);
}

void	Contact::InitContact(void)
{
	std::string 	input;

	std::cout << "Enter you first name : ";
	getline(std::cin, input);
	_firstName = ParseStringInput(input);

	std::cout << "Enter you last name : ";
	getline(std::cin, input);
	_lastName = ParseStringInput(input);

	std::cout << "Enter you nickname : ";
	getline(std::cin, input);
	_nickname = ParseStringInput(input);

	std::cout << "Enter your phone number : ";
	getline(std::cin, input);
	_phoneNumber = ParseStringInput(input);

	std::cout << "Enter your darkest sercret : ";
	getline(std::cin, input);
	_darkestSecret = ParseStringInput(input);
}

void	Contact::PrintContact(void)
{
	std::cout << "First Name : " << _firstName << std::endl;
	std::cout << "Last Name : " << _lastName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phoneNumber << std::endl;
	std::cout << "Darkest secret : " << _darkestSecret << std::endl;
}
