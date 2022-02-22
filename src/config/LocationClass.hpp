/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LocationClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <aabounak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:50:10 by aabounak          #+#    #+#             */
/*   Updated: 2022/02/22 14:21:06 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <vector>

# define __AUTOINDEX_OFF__ 0
# define __AUTOINDEX_ON__ 1

class LocationClass {
    /* ----- PRIVATE ----- */
    public:
        std::string __path;
        std::string __root;
        std::string __cgi_ext;
        bool        __autoindex;
        
    public:
        /* ----- Constructors & Destructor respectively ----- */
        LocationClass();
        ~LocationClass();

        /* ----- PRIVATE ----- */
        /* ----- Location Parser ----- */
        void    parseLocation( std::string buffer );
        
        /* -- PUBLIC METHOD */
        std::vector<std::string> split( std::string str, char separator );

        /* ----- Getters----- */
        std::string getPath( void ) const;
        std::string getRoot( void ) const;
        std::string getCgiExt( void ) const;
        bool        getAutoIndex( void ) const;
};