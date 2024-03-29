/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <caboudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:06:40 by caboudar          #+#    #+#             */
/*   Updated: 2023/05/17 16:06:41 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {

	public:
		Harl();
		~Harl();
		
		void		complain(std::string);

		typedef struct		s_ptr_arr
		{
			std::string		level;
			void(Harl::*funcPtr)(void);
		}					t_ptr_arr;

	private:
		void		_debug();
		void		_info();
		void		_warning();
		void		_error();
		t_ptr_arr	funcArr[4];
};