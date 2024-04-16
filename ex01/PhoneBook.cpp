/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 04:54:16 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/16 10:02:51 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
  if (index > 7)
    std::cout << "Repalcing the oldest contact" << std::endl;
  std::string firstName, lastName, \
        nickName, phoneNumber, darkestSecret;
  
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Enter first name: ";
  std::getline(std::cin, firstName);
  std::cout << "Enter last name: ";
  std::getline(std::cin, lastName);
  std::cout << "Enter nick name: ";
  std::getline(std::cin, nickName);
  std::cout << "Enter phone number: ";
  std::getline(std::cin, phoneNumber);
  std::cout << "Enter darkest secret: ";
  std::getline(std::cin, darkestSecret);

  contacts[index % 8].setDetails(firstName, lastName, nickName, \
                    phoneNumber, darkestSecret);
  index++;
}

void PhoneBook::searchContact() {
  int idx;

  displayContacts();
  std::cout << "Enter the index of the contact to want to view: ";
  std::cin >> idx;
  if (idx < 0 || idx > 7) {
    std::cout << "Invalid index" << std::endl;
    return;
  }
  contacts[idx].displayFull();
}

void PhoneBook::displayContacts() {
  std::cout << std::setw(10) << "Index" << "|";
  std::cout << std::setw(10) << "First name" << "|";
  std::cout << std::setw(10) << "Last name" << "|";
  std::cout << std::setw(10) << "Nick name" << "|" << std::endl;
  for (int i = 0; i < index; i++)
    contacts[i].displayShort(i);
}
