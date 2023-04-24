/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:58:52 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/24 14:42:45 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact 	contact[8];
		int	nContact;

	public:

		PhoneBook();
		~PhoneBook(void);
		void	CatchInstruction(void);
		void	PrintAllContact(void);
};

#endif
