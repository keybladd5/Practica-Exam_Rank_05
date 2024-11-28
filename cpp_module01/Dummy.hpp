/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:00 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:56:22 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

class Dummy : public ATarget
{
	public:
		Dummy();
	       	ATarget *clone(void);
		~Dummy(void);
};

#endif
