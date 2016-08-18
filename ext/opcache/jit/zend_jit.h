/*
   +----------------------------------------------------------------------+
   | Zend OPcache                                                         |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2016 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Dmitry Stogov <dmitry@zend.com>                             |
   +----------------------------------------------------------------------+
*/

/* $Id:$ */

#ifndef HAVE_JIT_H
#define HAVE_JIT_H

ZEND_API int  zend_jit(zend_op_array *op_array, zend_persistent_script* main_persistent_script);
ZEND_API void zend_jit_unprotect(void);
ZEND_API void zend_jit_protect(void);
ZEND_API int  zend_jit_startup(size_t size);
ZEND_API void zend_jit_shutdown(void);

#endif /* HAVE_JIT_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */