//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : utils.h
// Description   : utils headder file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#if !defined(__UTILS_H__)
#define __UTILS_H__
#include <strstream>


#define VALIDATE(a) if (!a) return (false)

template<typename T>
std::string ToString(const T& _value)
{
    std::strstream theStream;
    theStream << _value << std::ends;
    return (theStream.str());
}

#endif    // __UTILS_H__

