//-----------------------------------------------------------------------------
// boost mpl/aux_/config/use_preprocessed.hpp header file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2002
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#ifndef BOOST_MPL_AUX_CONFIG_USE_PREPROCESSED_HPP_INCLUDED
#define BOOST_MPL_AUX_CONFIG_USE_PREPROCESSED_HPP_INCLUDED

// EDG-based compilers have serious problems with preprocessor performance,
// so we have to feed them already preprocessed version of code
#if !defined(BOOST_MPL_USE_PREPROCESSED_HEADERS)\
    && defined(__EDG_VERSION__) && (__EDG_VERSION__ <= 300)
#   define BOOST_MPL_USE_PREPROCESSED_HEADERS
#endif

#endif // BOOST_MPL_AUX_CONFIG_USE_PREPROCESSED_HPP_INCLUDED