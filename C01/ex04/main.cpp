/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:45:16 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 13:00:27 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void replace_files(char **argv)
{
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream file(file_name.c_str());
    std::size_t p;

    if (file.good()) //Try to open the file.
	{
		std::ofstream new_file(file_name.append(".replace").data()); //Crate a new file and put in its name .replace and take the file_name content. 
        std::string line;

        while (file.good())
        {
            std::getline(file, line);
            p = line.find(s1,0);
            while (p != std::string::npos)
            {
                line.erase(p, s1.length());
                line.insert(p, s2);
                p = line.find(s1, p);
            }
            new_file << line;
            if(file.eof())
                break ;
            new_file << std::endl;
        }
    }
	else
		std::cout << "Error to open the file " << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace_files(argv);
	else
		std::cout << "Invalid Parameters!" << std::endl;
}