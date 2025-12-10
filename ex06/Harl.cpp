/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:18:51 by maballet          #+#    #+#             */
/*   Updated: 2025/12/10 18:10:45 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	this->functionPtr[0] = &Harl::debug;
	this->functionPtr[1] = &Harl::info;
	this->functionPtr[2] = &Harl::warning;
	this->functionPtr[3] = &Harl::error;
}

Harl::~Harl( void ) {}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	
	if (level == "DEBUG")
		i = 0;
	else if (level == "INFO")
		i = 1;
	else if (level == "WARNING")
		i = 2;
	else if (level == "ERROR")
		i = 3;
	else {
		std::cout << "Error: invalid level" << std::endl;
		return;
	}
	(this->*functionPtr[i])();
}
