/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:38:34 by maballet          #+#    #+#             */
/*   Updated: 2025/12/08 18:48:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType) {

	this->type = WeaponType;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const{

	return this->type;
}

void Weapon::setType(std::string value) {

	this->type = value;
}
