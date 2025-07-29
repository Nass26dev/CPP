/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyousfi <nyousfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:56:20 by nyousfi           #+#    #+#             */
/*   Updated: 2025/07/29 11:02:32 by nyousfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void PhoneBook::run()
{
    std::string command;
    
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
    
    while (true)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        
        if (std::cin.eof())
        {
            std::cout << std::endl << "EOF detected. Exiting..." << std::endl;
            break;
        }
        if (command == "ADD")
            addContact();
        else if (command == "SEARCH")
            searchContacts();
        else if (command == "EXIT")
        {
            std::cout << "Goodbye !" << std::endl;
            break;
        }
    }
}
