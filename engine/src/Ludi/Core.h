#ifndef CORE_H
#define CORE_H

#ifdef ENGINE_EXPORTS
    #define LUDI_API __declspec(dllexport)
#else
    #define LUDI_API __declspec(dllimport)
#endif

#endif