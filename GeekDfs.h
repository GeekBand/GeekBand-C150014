//
//  GeekDfs.h
//  GeekBand-C150014
//
//  Created by Guti on 15/8/13.
//  Copyright (c) 2015年 Gutierrez. All rights reserved.
//

#ifndef GeekBand_C150014_GeekDfs_h
#define GeekBand_C150014_GeekDfs_h

#include <string>
#include <utility>


namespace Geek
{
    #ifndef INPARAM
    #define INPARAN
    #endif
    
    #ifndef OUTPARAM
    #define OUTPARAM
    #endif
    
    typedef  std::pair<std::string, std::string> GeekKeyValue;
    
    enum GeekDbType
    {
        Sequence,
        Hashtable,
        //...
    };
}


#endif
