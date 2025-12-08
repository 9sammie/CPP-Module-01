/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:53:16 by maballet          #+#    #+#             */
/*   Updated: 2025/12/09 00:34:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "searchAndReplace.hpp"

searchAndReplace::searchAndReplace(const std::string& filename,
				   			   const std::string& search,
				   			   const std::string& replace):
							   _filename(filename),
							   _search(search),
							   _replace(replace) {} 

searchAndReplace::~searchAndReplace() {}

bool searchAndReplace::run() {

	std::ifstream input(_filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error: error while opening the file" << std::endl;
		return EXIT_SUCCESS;
	}
	std::string outputName = _filename + ".replace";
	std::ofstream output(outputName.c_str());
	std::string line;
	while (getline(input, line)) {

		output << line;
		if (!input.eof())
			output << std::endl;
	}
	return EXIT_SUCCESS;
}