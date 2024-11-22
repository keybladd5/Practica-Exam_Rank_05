/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:37:17 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/22 20:03:08 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &);
		Warlock & operator=(Warlock const &);
	public:
		Warlock(std::string name, std::string title);
		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
		void setTitle(std::string const &);
		void introduce(void) const;
		~Warlock(void);
};

#endif 

