/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 04:54:16 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/23 22:13:57 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

PhoneBook::~PhoneBook() {}

void get_input(std::string str) {
  std::getline(std::cin, str);
  if (!std::cin || std::cin.eof())
    exit(1);
}

void PhoneBook::addContact() {
  if (index > 7)
    std::cout << "Repalcing the oldest contact" << std::endl;
  std::string firstName, lastName, \
        nickName, phoneNumber, darkestSecret;

  std::cout << "Enter first name: ";
  get_input(firstName);
  std::cout << "Enter last name: ";
  get_input(lastName);
  std::cout << "Enter nick name: ";
  get_input(nickName);
  std::cout << "Enter phone number: ";
  get_input(phoneNumber);
  std::cout << "Enter darkest secret: ";
  get_input(darkestSecret);

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
