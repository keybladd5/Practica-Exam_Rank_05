/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_copy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:00 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 10:47:51 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &);
		Warlock & operator=(Warlock const &);
		std::string _name;
		std::string _type;
	public:
		Warlock(std::string, std::string);
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;
		void setTitle(std::string const &) const;
		void introduce(void) const;
};
