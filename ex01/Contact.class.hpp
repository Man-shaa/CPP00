/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:13:58 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/25 15:53:48 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>

int	VerifEof();

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;

	public:
		Contact(void);
		~Contact(void);
		std::string	ParseStringInput(std::string input);
		void	InitContact(int index);
		void	PrintContact(void);
		void	PrintContactRow(void);
};

#endif
