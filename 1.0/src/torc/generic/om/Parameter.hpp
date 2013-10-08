// Torc - Copyright 2011 University of Southern California.  All Rights Reserved.
// $HeadURL$
// $Id$

// This program is free software: you can redistribute it and/or modify it under the terms of the 
// GNU General Public License as published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See 
// the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program.  If 
// not, see <http://www.gnu.org/licenses/>.

#ifndef TORC_GENERIC_OM_PARAMETER_HPP
#define TORC_GENERIC_OM_PARAMETER_HPP

#include "torc/generic/om/DumpRestoreConfig.hpp"

//BOOST
#ifdef GENOM_SERIALIZATION
#include <boost/serialization/access.hpp>
#endif //GENOM_SERIALIZATION

#include "torc/generic/om/Nameable.hpp"
#include "torc/generic/om/Visitable.hpp"
#include "torc/generic/om/Value.hpp"
#include "torc/generic/om/Unit.hpp"
#include "torc/generic/om/Composite.hpp"
#include "torc/generic/om/Renamable.hpp"

namespace torc {

namespace generic {

/**
 * @brief Represents a parameter object in EDIF.
 *
 * In EDIF, the Cell and Instance objects can have associated parameters. The parameters defined in a cell can be overridden during instanciation.
 */
class Parameter :
    public virtual Composite<Parameter>,
    public Nameable,
    public Renamable,
    public Visitable {
#ifdef GENOM_SERIALIZATION
    friend class boost::serialization::access;
#endif //GENOM_SERIALIZATION

  private:
    Value mValue;
    Unit mUnit;

  protected:
    Parameter();

  public:
    virtual
    ~Parameter() throw();

  private:
#ifdef GENOM_SERIALIZATION
    template<class Archive> void
    serialize( Archive &ar, unsigned int);
#endif //GENOM_SERIALIZATION

    Parameter(const Parameter & source) throw();
    Parameter &
    operator=(const Parameter & source) throw();

  public:
    inline const Value
    getValue() const throw();

    void
    setValue(const Value & inSource) throw();

    virtual const Unit
    getUnit() const throw();

    virtual void
    setUnit(const Unit & inSource) throw();

};

inline const Value
Parameter::getValue() const throw() {
  return mValue;
}


} // namespace torc::generic

} // namespace torc
#endif // TORC_GENERIC_OM_PARAMETER_HPP
