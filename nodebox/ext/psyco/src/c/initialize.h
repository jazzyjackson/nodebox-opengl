 /***************************************************************/
/***          Automatically generated support file             ***/
 /***************************************************************/

 /* This file is automatically generated by 'files.py'.
    DO NOT MODIFY. Changes will be overwritten ! */


 /* Including this file results in all headers Objects/xxx.h
    being included, so that it has roughly the same result
    for Psyco as a "#include <Python.h>" has for Python:
    including all headers extension modules generally need.

    This file is moreover used internally by psyco.c. */


#ifndef PSYCO_INITIALIZATION

# include "Objects/pobject.h"
# include "Objects/pabstract.h"
# include "Objects/pboolobject.h"
# include "Objects/pclassobject.h"
# include "Objects/pdescrobject.h"
# include "Objects/pdictobject.h"
# include "Objects/pfloatobject.h"
# include "Objects/pfuncobject.h"
# include "Objects/pintobject.h"
# include "Objects/piterobject.h"
# include "Objects/plistobject.h"
# include "Objects/plongobject.h"
# include "Objects/pmethodobject.h"
# include "Objects/prangeobject.h"
# include "Objects/pstringobject.h"
# include "Objects/pstructmember.h"
# include "Objects/ptupleobject.h"
# include "Objects/ptypeobject.h"
# include "Objects/pcompactobject.h"

#else /* if PSYCO_INITIALIZATION */
# undef PSYCO_INITIALIZATION

#include <iinitialize.h>  /* processor-specific initialization */

  /* internal part for psyco.c */
#if ALL_STATIC
# include "dispatcher.c"
# include "vcompiler.c"
# include "psyfunc.c"
# include "stats.c"
# include "profile.c"
# include "cstruct.c"
# include "alarm.c"
# include "codemanager.c"
# include "codegen.c"
# include "mergepoints.c"
# include "linuxmemchk.c"
# include "Python/pycompiler.c"
# include "Python/frames.c"
# include "Python/pbltinmodule.c"
# include "Objects/pobject.c"
# include "Objects/pabstract.c"
# include "Objects/pboolobject.c"
# include "Objects/pclassobject.c"
# include "Objects/pdescrobject.c"
# include "Objects/pdictobject.c"
# include "Objects/pfloatobject.c"
# include "Objects/pfuncobject.c"
# include "Objects/pintobject.c"
# include "Objects/piterobject.c"
# include "Objects/plistobject.c"
# include "Objects/plongobject.c"
# include "Objects/pmethodobject.c"
# include "Objects/prangeobject.c"
# include "Objects/pstringobject.c"
# include "Objects/pstructmember.c"
# include "Objects/ptupleobject.c"
# include "Objects/ptypeobject.c"
# include "Objects/compactobject.c"
# include "Objects/pcompactobject.c"
# include "Modules/parray.c"
# include "Modules/pmath.c"
# include "Modules/ppsyco.c"
#else /* if !ALL_STATIC */
  EXTERNFN void psyco_compiler_init(void);	/* vcompiler.c */
  EXTERNFN void psyco_stats_init(void);	/* stats.c */
  EXTERNFN void psyco_profile_init(void);	/* profile.c */
  EXTERNFN void psyco_cstruct_init(void);	/* cstruct.c */
  EXTERNFN void psyco_alarm_init(void);	/* alarm.c */
  EXTERNFN void psyco_codegen_init(void);	/* codegen.c */
  EXTERNFN void psyco_pycompiler_init(void);	/* Python/pycompiler.c */
  EXTERNFN void psyco_frames_init(void);	/* Python/frames.c */
  EXTERNFN void psyco_bltinmodule_init(void);	/* Python/pbltinmodule.c */
  EXTERNFN void psy_object_init(void);	/* Objects/pobject.c */
  EXTERNFN void psy_boolobject_init(void);	/* Objects/pboolobject.c */
  EXTERNFN void psy_classobject_init(void);	/* Objects/pclassobject.c */
  EXTERNFN void psy_descrobject_init(void);	/* Objects/pdescrobject.c */
  EXTERNFN void psy_dictobject_init(void);	/* Objects/pdictobject.c */
  EXTERNFN void psy_floatobject_init(void);	/* Objects/pfloatobject.c */
  EXTERNFN void psy_funcobject_init(void);	/* Objects/pfuncobject.c */
  EXTERNFN void psy_intobject_init(void);	/* Objects/pintobject.c */
  EXTERNFN void psy_iterobject_init(void);	/* Objects/piterobject.c */
  EXTERNFN void psy_listobject_init(void);	/* Objects/plistobject.c */
  EXTERNFN void psy_longobject_init(void);	/* Objects/plongobject.c */
  EXTERNFN void psy_methodobject_init(void);	/* Objects/pmethodobject.c */
  EXTERNFN void psy_rangeobject_init(void);	/* Objects/prangeobject.c */
  EXTERNFN void psy_stringobject_init(void);	/* Objects/pstringobject.c */
  EXTERNFN void psy_tupleobject_init(void);	/* Objects/ptupleobject.c */
  EXTERNFN void psy_typeobject_init(void);	/* Objects/ptypeobject.c */
  EXTERNFN void psyco_compact_init(void);	/* Objects/compactobject.c */
  EXTERNFN void psy_compactobject_init(void);	/* Objects/pcompactobject.c */
  EXTERNFN void psyco_initarray(void);	/* Modules/parray.c */
  EXTERNFN void psyco_initmath(void);	/* Modules/pmath.c */
  EXTERNFN void psyco_initpsyco(void);	/* Modules/ppsyco.c */
#endif /* !ALL_STATIC */

PSY_INLINE void initialize_all_files(void) {
  initialize_processor_files();
  psyco_compiler_init();	/* vcompiler.c */
  psyco_stats_init();	/* stats.c */
  psyco_profile_init();	/* profile.c */
  psyco_cstruct_init();	/* cstruct.c */
  psyco_alarm_init();	/* alarm.c */
  psyco_codegen_init();	/* codegen.c */
  psyco_pycompiler_init();	/* Python/pycompiler.c */
  psyco_frames_init();	/* Python/frames.c */
  psyco_bltinmodule_init();	/* Python/pbltinmodule.c */
  psy_object_init();	/* Objects/pobject.c */
  psy_boolobject_init();	/* Objects/pboolobject.c */
  psy_classobject_init();	/* Objects/pclassobject.c */
  psy_descrobject_init();	/* Objects/pdescrobject.c */
  psy_dictobject_init();	/* Objects/pdictobject.c */
  psy_floatobject_init();	/* Objects/pfloatobject.c */
  psy_funcobject_init();	/* Objects/pfuncobject.c */
  psy_intobject_init();	/* Objects/pintobject.c */
  psy_iterobject_init();	/* Objects/piterobject.c */
  psy_listobject_init();	/* Objects/plistobject.c */
  psy_longobject_init();	/* Objects/plongobject.c */
  psy_methodobject_init();	/* Objects/pmethodobject.c */
  psy_rangeobject_init();	/* Objects/prangeobject.c */
  psy_stringobject_init();	/* Objects/pstringobject.c */
  psy_tupleobject_init();	/* Objects/ptupleobject.c */
  psy_typeobject_init();	/* Objects/ptypeobject.c */
  psyco_compact_init();	/* Objects/compactobject.c */
  psy_compactobject_init();	/* Objects/pcompactobject.c */
  psyco_initarray();	/* Modules/parray.c */
  psyco_initmath();	/* Modules/pmath.c */
  psyco_initpsyco();	/* Modules/ppsyco.c */
}

#endif /* PSYCO_INITIALIZATION */
