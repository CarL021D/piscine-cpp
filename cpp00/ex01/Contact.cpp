#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

Contact		Contact::create_contact()
{
	Contact			contact;
	std::string		input;

	while (input.empty())
	{
		std::cout << "Insert your first name:" << std::endl;
		std::getline(std::cin, input);
		contact.name = input;
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert your last name:" << std::endl;
		std::getline(std::cin, input);
		contact.last_name = input;
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert a nickname name:" << std::endl;
		std::getline(std::cin, input);
		contact.nickname = input;
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert a phone number:" << std::endl;
		std::getline(std::cin, input);
		for (unsigned int i = 0; input[i]; i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "Insert digits only" << std::endl;
				input.clear();
			}
			break;
		}
		contact.phone_number = input;
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert darkest secret:" << std::endl;
		std::getline(std::cin, input);
		contact.darkest_secret = input;
	}
	std::cout << contact.name << std::endl;
	std::cout << contact.last_name << std::endl;
	std::cout << contact.nickname << std::endl;

	return contact;
}

unsigned short	space_count(std::str str)
{
	unsigned int	len;

	len = strlen(str);
	return (10 - len);


	// short			dot_count = 0;
	// char			temp;

	// len = strlen(str);
	// if (len > 10)
	// 	len = 9;
	// if (len < 10)
	// 	dot_count = 10 - len;
	// temp = str.substr(0, )
}

std::str	PhoneBook::truncate_str(std::str str)
{
	unsigned int	len;
	std::str		ret;

	len = strlen(str);
	if (len <= 10)
		return str;
	ret = str.substr(0, 9);
	return ret;
}

bool	contact_index_error(PhoneBook phoneB, std::str index_str)
{
	unsigned short	len;
	unsigned short	max_index;
	long long		value;

	if (index.empy)
		return true;
	len = strlen(index_str)
	for (unsigned int i; i < len; i++)
	{
		if (!index_str.isdigit())
			std::cout << "Unknonw characters, inset digits only" << std::stdl;
		return true;
	}
	max_index = 0;
	while (!phoneB.contact[max_index].name.empty())
		max_index++;
	value = atoi(index);
	if (value < 0 || value < max_index)
	{
		std::cout << "Error, chose an index between 0 and " << max_index << std::stdl;
		return true;
	}
	return false;
}

void	PhoneBook::display_contact_info(PhoneBook phoneB)
{
	std::string		input;

	while (contact_index_error(phoneB, input))
	{
		input.clear();
		std::cout << "Enter the contact index you're looking for!" << std::endl;
		std::getline(std::cin, input);
	}

	while (i < 8)
	{
		if (input == phoneB.contact[i].name)
		{
			len = strlen(input);
			if (len > 9)
				len = 9;
			if 

		}
	}

}