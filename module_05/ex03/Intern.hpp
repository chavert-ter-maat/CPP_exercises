/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:47:55 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/07 13:00:44 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTER_HPP
#define INTER_HPP

class Intern{
    public:
        std::string creation[3];
        
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        
        AForm* makeForm(const std::string& form, const std::string& target);
        AForm* makepresform(const std::string& target);
        AForm* makeshrubform(const std::string& target);
        AForm* makerobotoform(const std::string& target);

        class FormNotFound : public std::exception{
            virtual const char* what() const throw(){
                return ("File not found.");
            }
        };
};
#endif