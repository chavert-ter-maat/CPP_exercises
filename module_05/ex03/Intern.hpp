/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:47:55 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/06 15:17:40 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

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
                std::cerr << "File not found.";
            }
        }
};