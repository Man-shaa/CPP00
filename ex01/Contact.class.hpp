/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:13:58 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/22 20:01:00 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		int			_phoneNumber;
		std::string	_darkestSecret;
		int			_index;

	public:
		Contact(std::string name);	
		~Contact(void);	
		std::string GetName(void) const;
};

#endif