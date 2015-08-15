//
//  GeekDb.h
//  GeekBand-C150014
//
//  Created by Guti on 15/8/13.
//  Copyright (c) 2015年 Gutierrez. All rights reserved.
//

#ifndef GeekBand_C150014_GeekDb_h
#define GeekBand_C150014_GeekDb_h

#include <vector>

#include "GeekDfs.h"
#include "GeekErrorCode.h"

namespace Geek
{
    class GeekDb
    {
    public:
        virtual GeekResult InsertKeyValue (INPARAN const GeekKeyValue& entry) = 0;
        virtual GeekResult UpdateKeyValue (INPARAN const GeekKeyValue& entry) = 0;
        virtual GeekResult DeleteKeyValue (INPARAN const std::string& strkey) = 0;
        virtual GeekResult QueryKeyValue (INPARAN const std::string& strkey,
                                          OUTPARAM const std::vector<GeekKeyValue> entries) = 0;
    };
}

#endif
