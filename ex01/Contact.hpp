/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:01:10 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/16 09:27:10 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

 public:
  Contact();
  void setDetails(std::string firstName, std::string lastName, \
        std::string nickName, std::string phoneNumber, \
        std::string darkestSecret);
  std::string truncate(std::string str);
  void displayShort(int idx);
  void displayFull();

  ~Contact();
};

#endif
