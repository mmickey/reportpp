/*
 * This file is part of reportpp.
 *
 * reportpp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * reportpp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with reportpp.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * ---
 * Copyright (C) 2014, mickey <mickey.mouse-1985@libero.it>
 */

#ifndef PDF_PAGE_SETHORIZONTALSCALLING_OPERATION_H
#define PDF_PAGE_SETHORIZONTALSCALLING_OPERATION_H

#include "../Operation.hpp"

class SetHorizontalScalling: public Operation {
public:
  SetHorizontalScalling(HPDF_REAL value):
    Operation(),
    value_(value),

  { }

  void init(ReportGlobals &glob) {
    HPDF_Page_SetHorizontalScalling(glob.pages.back(), value_);
  }

  void end     (ReportGlobals &glob) { }
  void finalize(ReportGlobals &glob) { }

private:
  HPDF_REAL value_;

};

#endif /* ifndef PDF_PAGE_SETHORIZONTALSCALLING_OPERATION_H */