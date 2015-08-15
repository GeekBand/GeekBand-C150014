//
//  GeekSequenceDb.h
//  GeekBand-C150014
//
//  Created by Guti on 15/8/13.
//  Copyright (c) 2015年 Gutierrez. All rights reserved.
//

#ifndef __GeekBand_C150014__GeekSequenceDb__
#define __GeekBand_C150014__GeekSequenceDb__

#include <stdio.h>

#include "GeekDb.h"

namespace Geek
{
    class GeekSequenceDb : public GeekDb
    {
        GeekResult InsertKeyValue (INPARAN const GeekKeyValue& entry) ;
        GeekResult UpdateKeyValue (INPARAN const GeekKeyValue& entry) ;
        GeekResult DeleteKeyValue (INPARAN const std::string& strkey) ;
        GeekResult QueryKeyValue (INPARAN const std::string& strkey,
                                          OUTPARAM const std::vector<GeekKeyValue> entries) ;
        
    };
}

#endif /* defined(__GeekBand_C150014__GeekSequenceDb__) */
