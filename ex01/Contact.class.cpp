/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:13:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/22 19:54:29 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(std::string name_p) : _name(name_p)
{
	std::cout << "Contact -> Constructor called" << std::endl << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact -> Destructor called" << std::endl << std::endl;
	return ;
}

std::string	Contact::GetName(void) const
{
	return (this->_name);
}