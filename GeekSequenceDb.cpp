//
//  GeekSequenceDb.cpp
//  GeekBand-C150014
//
//  Created by Guti on 15/8/13.
//  Copyright (c) 2015年 Gutierrez. All rights reserved.
//

#include "GeekSequenceDb.h"

namespace Geek
{
    GeekResult GeekSequenceDb::InsertKeyValue (INPARAN const GeekKeyValue& entry)
    {
        return GEEK_SUCCESS;
    }
    GeekResult GeekSequenceDb::UpdateKeyValue (INPARAN const GeekKeyValue& entry)
    {
        return GEEK_SUCCESS;
    }
    GeekResult GeekSequenceDb::DeleteKeyValue (INPARAN const std::string& strkey)
    {
        return GEEK_SUCCESS;
    }
    GeekResult GeekSequenceDb::QueryKeyValue (INPARAN const std::string& strkey,
                              OUTPARAM const std::vector<GeekKeyValue> entries)
    {
        return GEEK_SUCCESS;
    }

}