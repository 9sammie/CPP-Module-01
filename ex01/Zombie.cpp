/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:30:34 by maballet          #+#    #+#             */
/*   Updated: 2025/12/02 16:01:45 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {

	std::cout << this->_name << ": has been destroyed" << std::endl; 
}

void	Zombie::announce( void ) const{

	std::cout << this->_name << ": MoreBraiinnnzzzzZ" << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}