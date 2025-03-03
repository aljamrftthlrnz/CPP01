/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:37:08 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/19 11:23:28 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include <fstream>

std::string newLine (std::string line, std::string s1, std::string s2)
{

    size_t pos = 0; 
    while((pos = line.find(s1,pos)) != std::string::npos)
    {
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length(); 
    }
    return (line); 
    
}


int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ifstream inputFile(argv[1]);
        if(!inputFile.is_open()) 
        {
            std::cout << "Failed to open file: " << argv[1] << std::endl;
            return 1; 
        }
        std::ofstream outputFile ("output.txt");
        if(!outputFile.is_open())
        {
            std::cout << "Failed to open file: " << std::endl;
            return 1;
        }
        const std::string s1 = argv[2];
        const std::string s2 = argv[3];
        if (s1.empty() || s2.empty())
            return (1);
        std::string line; 
        while (std::getline(inputFile, line))
        {
            line = newLine(line, s1, s2);
            outputFile << line << std::endl;
        }
        inputFile.close(); 
        outputFile.close();
    }
    else 
        std::cout << "Usage <./program> <filename> <s1> <s2>" << std::endl;
    return (0);
}