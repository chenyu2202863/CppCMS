# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef CPPCMS_BOOST_PREPROCESSOR_LOGICAL_OR_HPP
# define CPPCMS_BOOST_PREPROCESSOR_LOGICAL_OR_HPP
#
# include <cppcms_boost/preprocessor/config/config.hpp>
# include <cppcms_boost/preprocessor/logical/bool.hpp>
# include <cppcms_boost/preprocessor/logical/bitor.hpp>
#
# /* BOOST_PP_OR */
#
# if ~CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_EDG()
#    define CPPCMS_BOOST_PP_OR(p, q) CPPCMS_BOOST_PP_BITOR(CPPCMS_BOOST_PP_BOOL(p), CPPCMS_BOOST_PP_BOOL(q))
# else
#    define CPPCMS_BOOST_PP_OR(p, q) CPPCMS_BOOST_PP_OR_I(p, q)
#    define CPPCMS_BOOST_PP_OR_I(p, q) CPPCMS_BOOST_PP_BITOR(CPPCMS_BOOST_PP_BOOL(p), CPPCMS_BOOST_PP_BOOL(q))
# endif
#
# endif
