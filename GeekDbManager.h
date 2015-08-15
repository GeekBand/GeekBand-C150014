//
//  GeekDbManager.h
//  GeekBand-C150014
//
//  Created by Guti on 15/8/15.
//  Copyright (c) 2015年 Gutierrez. All rights reserved.
//

#ifndef __GeekBand_C150014__GeekDbManager__
#define __GeekBand_C150014__GeekDbManager__

#include <stdio.h>
#include <map>

#include "GeekSequenceDb.h"

namespace Geek
{
    class GeekDbManager
    {
    public:
        GeekResult CreateDatabase (INPARAN const std::string& strname,
                                   INPARAN const GeekDbType DbType );
        GeekResult InsertKeyValue (INPARAN const std::string& strname,
                                   INPARAN const GeekKeyValue& entry);
        GeekResult UpdateKeyValue (INPARAN const std::string& strname,
                                   INPARAN const GeekKeyValue& entry);
        GeekResult DeleteKeyValue (INPARAN const std::string& strname,
                                   INPARAN const std::string& strkey);
        GeekResult DumpDatabase (INPARAN const std::string& strname,
                                 INPARAN const std::string& strfilename);
        
        GeekResult DisposeDatabase (INPARAN const std::string strname);
        
    private:
        std::map<std::string, GeekDb*> m_DbCollection;
        
    };
}

#endif /* defined(__GeekBand_C150014__GeekDbManager__) */
