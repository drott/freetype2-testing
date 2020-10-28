// facevisitor.h
//
//   Base class of visitors of faces.
//
// Copyright 2018-2019 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef VISITORS_FACE_VISITOR_H_
#define VISITORS_FACE_VISITOR_H_


#include <ft2build.h>
#include FT_FREETYPE_H

#include "utils/utils.h"


namespace freetype {


  class FaceVisitor
  {
  public:


    FaceVisitor() = default;

    virtual
    ~FaceVisitor() = default;

    FaceVisitor(const FaceVisitor&) = delete;
    FaceVisitor& operator=(const FaceVisitor&) = delete;

    // @Description:
    //   Run an arbitrary action on a face.
    //
    // @Input:
    //   face ::
    //     No restrictions apply -- use it at will.

    virtual void
    run( Unique_FT_Face  face ) = 0;

  protected:


    FT_Library  library;
  };
}


#endif // VISITORS_FACE_VISITOR_H_
