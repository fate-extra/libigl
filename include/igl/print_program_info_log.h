#ifndef IGL_PRINT_PROGRAM_INFO_LOG_H
#define IGL_PRINT_PROGRAM_INFO_LOG_H
#ifndef IGL_NO_OPENGL
#include "igl_inline.h"

#include "OpenGL_convenience.h"

namespace igl
{
  // Inputs:
  //   obj  OpenGL index of program to print info log about
  IGL_INLINE void print_program_info_log(const GLuint obj);
}

#ifdef IGL_HEADER_ONLY
#  include "print_program_info_log.cpp"
#endif

#endif
#endif
