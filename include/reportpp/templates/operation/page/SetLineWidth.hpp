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

#ifndef PDF_PAGE_SETLINEWIDTH_OPERATION_H
#define PDF_PAGE_SETLINEWIDTH_OPERATION_H

#include "../Operation.hpp"

class SetLineWidth: public Operation {
public:
  SetLineWidth(HPDF_REAL line_width):
    Operation(),
    line_width_(line_width),

  { }

  void init(ReportGlobals &glob) {
    HPDF_Page_SetLineWidth(glob.pages.back(), line_width_);
  }

  void end     (ReportGlobals &glob) { }
  void finalize(ReportGlobals &glob) { }

private:
  HPDF_REAL line_width_;

};

#endif /* ifndef PDF_PAGE_SETLINEWIDTH_OPERATION_H */