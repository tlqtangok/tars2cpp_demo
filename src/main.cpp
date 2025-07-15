#include <iostream>

#include "arr_cell.h"

using namespace std;
using namespace tars;

inline void config_glo_logger(string say_hello)
{
	tars::__global_logger_debug__.setLogLevel("DEBUG");
	tars::__global_logger_debug__.setPath("./log");  // will save log to [$git/dna-analysis/vs_build/log.log]
	tars::__global_logger_debug__.setMaxSize(10 * 1000 * 1000);
	tars::__global_logger_debug__.setMaxNum(10);
	tars::__global_logger_debug__.modFlag(TC_DayLogger::HAS_TIME, false);
	tars::__global_logger_debug__.modFlag(TC_DayLogger::HAS_LEVEL | TC_DayLogger::HAS_PID | TC_DayLogger::HAS_MTIME, true);

	string log_filepath_abs = tars::TC_File::toAbsolute(tars::__global_logger_debug__.getPath() + ".log");

	if (tars::TC_File::isFileExist(log_filepath_abs))
	{
		tars::TC_File::removeFile(log_filepath_abs, false);;
	}

	cout << log_filepath_abs << endl;
}


int main(int argc, char *argv[]) 
{

	config_glo_logger("start__");

	LOG_DEBUG << "Hello, world!" << endl;

	Enum_a e_a = Enum_a::DA;

	string str_e_a = etos(e_a);
	Enum_a e_a_;
	stoe(str_e_a, e_a_);

	cout << "Enum_a:: " << etos(e_a) << endl;
	cout << "Enum_a_:: " << etos(e_a_) << endl;

	cout << "e_a == e_a?:" <<  (e_a == e_a_) << endl;




	arr_cell id_arrCell;

	cout << id_arrCell._arr_dz_level_info[0].writeToJsonString() << endl;
	cout << id_arrCell._arr_dz_level_info[1].writeToJsonString() << endl;

	cout << tars::TC_File::joinPaths("./a", "b", "c.txt") << endl;;

#if 0
	TC_File::makeDirRecursive(dir);
	int ret = TC_File::removeFile(path, true);
	string base64 = "data:image/jpg;base64," + TC_Base64::encode((const char*)new_buf, new_len);	
	string md5 = TC_MD5::md5str(barCode);
	tars::TC_File::toAbsolute(descFileName);
	TC_File::save2file(TC_File::joinPaths(_wsiFilePath, "barCodeToWsiFile.json"), _barCodeToWsiFile.writeToJsonString());
	vector<char> &buff;
	TC_File::load2str(fileName, buff);

	TC_File::listDirectory(viewCachePath, dirs, false, true);

	TC_Port::stat_t st;
	if(TC_Port::stat(file.c_str(), &st) == 0)
	{

	}

	if(TC_File::extractFileExt(file) == "db"){};

	vector<string> v = TC_Common::sepstr<string>(file, FILE_SEP);

	string buff = TC_Base64::decode(data[j]["object_para"]);

	if(!TC_File::isFileExist(_mainModelName))
	{
		throw TC_File_Exception("model file not exist!mainModelName:" + _mainModelName);
	}
	TC_Common::tostr(magnification);
	TC_File::getExePath().c_str();

	etos(analysisOption.examinationItem);
	TC_File::extractFileName(image);
	string tileIndex = TC_File::excludeFileExt(fileName);
	string newstr = TC_File::replaceFileExt(TC_File::extractFileName(wsiFile), "jpg");
	wsiObject->fileSize = (size_t)TC_File::getFileSize(_wsiFile);
	vector<string> str = TC_Common::sepstr<string>(TC_File::excludeFileExt(file), "/");
	tars::TC_Common::equal(l.colorRate,r.colorRate);
	static bool equal(double x, double y, double epsilon = _EPSILON_DOUBLE);

	string sLogFilePath = TC_File::extractFilePath(_path);

	TC_Common::msleep(100);
	int64_t start = TC_Common::now2ms();
	TC_Common::strto<float>(data[i]["area"]);
	objectPara.status = (Cell::CellStatus)TC_Common::strto<int>(data[j]["status_value"]);
	TC_Common::trimleft(tileIndexs[1], "0");

	TC_Option _options;
	_options.decode(argc, argv);

	string barCode = _option.getValue("barCode");
	string wsiFile = _option.getValue("wsi");
	string sqlitedb = _option.getValue("sqlitedb");
	string dirOutput = _option.getValue("output");


	TC_Common::outfill(" train", ' ', 12);
	tars::TC_Port::setEnv("OPENCV_IO_MAX_IMAGE_PIXELS", OPENCV_IO_MAX_IMAGE_PIXELS);

	map<string, string> _fieldMap;
	LOG_DEBUG << TC_Common::tostr(_fieldMap.begin(), _fieldMap.end(), ", ") << endl;

	tars::TC_ThreadPool _tpool;
	_tpool.init(threadNum);
	_tpool.start();

	for(auto &e: vec_i)
	{
		_tpool.exec([&]()
				{
				LOG_DEBUG << e << endl;
				});
	}

	// deconstruct
	_tpool.waitForAllDone();





#endif 

	string jsonString = id_arrCell._arr_dz_level_info[0].writeToJsonString();
	id_arrCell._arr_dz_level_info[1].readFromJsonString(jsonString);

	cout << id_arrCell._arr_dz_level_info[1].writeToJsonString() << endl;


	TC_ThreadPool id_threadpool;
	id_threadpool.init(3);  // Initialize thread pool with 4 threads

	vector<int> vec_i = {1, 2, 3, 4, 5, 6,7};
	for (auto &e : vec_i)
	{
		id_threadpool.exec([&]()
				{
				// print this thread id
				cout << "Thread ID: " << std::this_thread::get_id() << ", Value: " << e << endl;
				});
	}

	// start thread pool
	// sleep 

	cout << "Starting thread pool..." << endl;
	id_threadpool.start();

	// deconstruct
	id_threadpool.waitForAllDone();


	// id_DZLevelInfo.writeToJsonString();

	if (argc < 2) 
	{
		cout << "Usage: " << argv[0] << " <name>" << endl;
		return 0;
	}

	TC_Option option;
	option.decode(argc, argv);



	if (!option.hasParam("k1")) 
	{
		cout << "Please provide a name using --name=<your_name>" << endl;
		return 0;
	}

	// get k1 value
	string v1 = option.getValue("k1");
	string v2 = option.getValue("k2");
	string v3 = option.getValue("k3");
	string v4 = option.getValue("k4");


	cout << "_Option k1 is set to: " << v1 << ", k2 is set to: " << v2 << endl;
	cout << "_Option k3 is set to: " << v3 << ", k4 is set to: " << v4 << endl;


	// cout << "Hello, " << argv[1] << "!" << endl;
	return 0;
}
