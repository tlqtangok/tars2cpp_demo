#pragma once

#include <cell.h>

#include <vector>


#include "util/tc_file.h"
#include "util/tc_common.h"
#include "util/tc_base64.h"
#include "util/tc_logger.h"
#include "util/tc_option.h"

#include "util/tc_port.h"
#include "util/tc_thread_pool.h"
#include  "util/tc_platform.h"
#include "util/tc_md5.h"
#include "util/tc_json.h"
#include "util/tc_encoder.h"
#include "util/tc_option.h"


#if TARGET_PLATFORM_WINDOWS
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define FILE_FUNC_LINE "[" << __FILENAME__ << "::" << __FUNCTION__ << "::" << __LINE__ << "]"
#else
#define __FILENAME__ (__builtin_strrchr(__FILE__, '/') ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)
#define FILE_FUNC_LINE "[" << __FILENAME__ << "::" << __FUNCTION__ << "::" << __LINE__ << "]"
#endif

#define LOG_DEBUG __global_logger_debug__.debug() << FILE_FUNC_LINE << "|"



using namespace std;
using namespace tars;
using namespace Cell;



class arr_cell 
{
	public:
		arr_cell();

		vector<DZLevelInfo> _arr_dz_level_info;
};
