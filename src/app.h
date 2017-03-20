#ifndef APP_H
#define APP_H
#include <string>
namespace yakumo {
	struct app {
		app();
		~app();
		std::string start_listen();
		std::string start_workers();
	};
	typedef std::auto_ptr<app> app_ptr;
}
#endif
