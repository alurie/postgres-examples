#include "postgres.h"
#include "fmgr.h"
#include "c.h"
#include "utils/builtins.h"
#include "lib/stringinfo.h"

 
PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(my_hello);
Datum
my_hello(PG_FUNCTION_ARGS)
{
  VarChar *name = PG_GETARG_VARCHAR_PP(0); 

  StringInfo si = makeStringInfo();
  appendStringInfoString(si, "Hello, ");
  appendStringInfoString(si, text_to_cstring(name));

  VarChar *res = (VarChar *) cstring_to_text(si->data);
  PG_RETURN_VARCHAR_P(res);  
}
