/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:02:01 by maballet          #+#    #+#             */
/*   Updated: 2025/12/02 16:00:30 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde( int N, std::string name ) {

	Zombie* Horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {

		std::stringstream ss;
		ss << i + 1;
		Horde[i].setName(name + " " + ss.str());
	}
	Horde[0].announce();
	return Horde;
}
