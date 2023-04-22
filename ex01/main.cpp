/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:05:51 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/22 19:52:32 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Contact		first("Pierre");

	std::cout << "My name is ";
	std::cout << first.GetName() << std::endl;

	return (0);
}