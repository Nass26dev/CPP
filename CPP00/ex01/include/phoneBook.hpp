/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyousfi <nyousfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:47:04 by nyousfi           #+#    #+#             */
/*   Updated: 2025/07/29 11:02:22 by nyousfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook
{
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int currentIndex;
    int totalContacts;
    
    std::string truncateString(const std::string& str, size_t width) const;
    std::string getInput(const std::string& prompt) const;
    bool isValidIndex(const std::string& input) const;

public:
    PhoneBook();
    ~PhoneBook();
    
    void addContact();
    void searchContacts() const;
    void displayContactList() const;
    void displayContact(int index) const;
    void run();
};

#endif
