#include <string>
namespace yakumo {
	struct app {
		app();
		~app();
		std::string start_listen();
		std::string start_workers();
	};
	typedef std::auto_ptr<app> app_ptr;

	app::app() {

	}
	app::~app() {

	}
	std::string app::start_listen() {
		std::string err;
		return err;
	}
	std::string app::start_workers() {
		std::string err;
		return err;
	}
}
