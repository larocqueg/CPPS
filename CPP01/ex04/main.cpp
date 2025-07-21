/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:15:38 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 10:22:04 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
  std::string file1_name;
  std::string file2_name;
  std::string text;
  std::string s1;
  std::string s2;
  std::ifstream infile;
  std::ofstream outfile;
  size_t        pos;
  
  if (ac == 4) {
    file1_name = av[1];
    file2_name = file1_name + ".replace";
    s1 = av[2];
    s2 = av[3];

    infile.open(file1_name.c_str(), std::ios::in);
    outfile.open(file2_name.c_str(), std::ios::out);
    if (!infile.is_open()) {
      std::cout << "Error while opening file " << file1_name << std::endl;
      return (1);
    }
    if (s1 == s2) {
      while (std::getline(infile, text)) {
        outfile << text << std::endl;
        text.clear();
      }
      return (0);
    }
    else {
      while (std::getline(infile, text)) {
        pos = 0;
        while ((pos = text.find(s1, pos)) != std::string::npos) {
          text.erase(pos, s1.length());
          text.insert(pos, s2);
          pos += s2.length();
        }
        outfile << text << std::endl;
        text.clear();
      }
    }
    infile.close();
    outfile.close();
    return (0);
  }
  std::cout << "Error: Usage: ./replace 'filename' 'string1' 'string2'" << std::endl;
  return (1);
}
