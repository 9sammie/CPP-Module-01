/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:18:41 by maballet          #+#    #+#             */
/*   Updated: 2025/12/10 19:02:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	
	private:
	
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
    void	(Harl::*functionPtr[4])(void);
    // typedef void (Harl::*HarlFunc)(void);
    // HarlFunc functionPtr[4];

	public:

	Harl();
	~Harl();
	void	execute( int i );
	void	complain( std::string level );
	
};

#endif