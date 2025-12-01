/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:00:04 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 19:29:44 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Ici je recupere le pointeur sur le tableau de zombie.
// Je demande a l'un des zombies de s'annoncer et je libère la memoire.

//JE LIBÈRE MAL LA MEMOIRE

int	main() {

	int N = 5;
	Zombie *result;
	result = zombieHorde(N, "Caciopée");
	result[0].announce();
	delete result;
	return (0);
}
