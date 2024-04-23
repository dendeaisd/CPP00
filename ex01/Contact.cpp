/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 07:53:44 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/24 01:42:01 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setDetails(std::string firstName, std::string lastName, \
      std::string nickName, std::string phoneNumber, \
      std::string darkestSecret) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->nickName = nickName;
  this->phoneNumber = phoneNumber;
  this->darkestSecret = darkestSecret;
}

std::string Contact::truncate(std::string str) {
  if (str.length() > 10)
    return str.substr(0, 9) + ".";
  return str;
}

void Contact::displayShort(int idx) {
  if (idx < 0 || idx > 7) {
    std::cout << "Invalid index" << std::endl;
    return;
  }
  std::cout << std::setw(10) << idx << "|";
  std::cout << std::setw(10) << truncate(firstName) << "|";
  std::cout << std::setw(10) << truncate(lastName) << "|";
  std::cout << std::setw(10) << truncate(nickName) << "|" << std::endl;
}

void Contact::displayFull() {
  std::cout << "First name: " << firstName << std::endl;
  std::cout << "Last name: " << lastName << std::endl;
  std::cout << "Nick name: " << nickName << std::endl;
  std::cout << "Phone number: " << phoneNumber << std::endl;
  std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
