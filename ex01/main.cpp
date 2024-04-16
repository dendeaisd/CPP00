/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 07:58:02 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/16 09:29:46 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
  PhoneBook phoneBook;
  std::string command;

  while (true) {
    std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
    std::cin >> command;

    if (command == "ADD")
      phoneBook.addContact();
    else if (command == "SEARCH")
      phoneBook.searchContact();
    else if (command == "EXIT")
      break;
    else
      std::cout << "Invalid command" << std::endl;
  }
  return 0;
}
