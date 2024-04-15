/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:01:10 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/15 05:07:48 by fvoicu           ###   ########.fr       */
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
  void setFirstName(std::string);
  void setLastName(std::string);
  void setNickName(std::string);
  void setPhoneNumber(std::string);
  void setDarkestSecret(std::string);
  ~Contact();

};
#endif