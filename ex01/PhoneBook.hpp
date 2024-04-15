/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 04:54:13 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/15 05:13:34 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <string>
# include "Contact.hpp"

class PhoneBook {
  Contact contacts[8];
  int     index;
  
 public:
  void addContact(const Contact& newContact);
  void searchContact();
  void displayAll();
}

#endif