/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:30:34 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 18:10:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie() {

	std::cout << this->_name << ": has been destroyed" << std::endl; 
}

void	Zombie::announce( void ) const{

	std::cout << this->_name << ": MoreBraiinnnzzzzZ" << std::endl;
}
