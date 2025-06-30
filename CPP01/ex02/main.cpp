/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:13 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 16:46:53 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
  std::string str = "HI THIS IS BRAIN.";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "  String memory address" << std::endl;
  std::cout << "string   : " << &str << std::endl;
  std::cout << "stringPTR: " << stringPTR << std::endl;
  std::cout << "stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "      String value" << std::endl;
  std::cout << "string   : " << str << std::endl;
  std::cout << "stringPTR: " << *stringPTR << std::endl;
  std::cout << "stringREF: " << stringREF << std::endl;
}
