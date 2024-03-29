/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <caboudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:43:23 by caboudar          #+#    #+#             */
/*   Updated: 2023/07/29 12:31:28 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
	public:
			Zombie();
			Zombie(std::string name);
			~Zombie();

			void	announce();
	private:
			std::string     _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
