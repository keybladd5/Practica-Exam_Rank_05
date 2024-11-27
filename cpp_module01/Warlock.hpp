/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:13:35 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/27 18:25:52 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &);
		Warlock operator=(Warlock const &);
		std::string _name;
		std::string _title;
	public:
		Warlock(std::string _name, std::string title);
		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
		void setTitle(std::string const &title);
		void introduce() const;
		~Warlock();
};

#endif

