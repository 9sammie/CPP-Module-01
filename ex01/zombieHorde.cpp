/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:02:01 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 19:26:47 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde( int N, std::string name ) {

	Zombie* Horde[N];
	
	for (int i = 0; i < N; i++) {

		std::stringstream ss;
		ss << i;
		std::string newName = name + " " + ss.str();
		Horde[i - 1] = new Zombie(newName);
	}
	return *Horde;
}
