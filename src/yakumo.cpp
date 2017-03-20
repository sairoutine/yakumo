#include <string>
#include "app.h"
namespace yakumo {
	int yakumo_main() {
		fprintf(stdout, "Yakumo has started.\n");

		app_ptr ptr = app_ptr(new app());

		std::string err = ptr->start_listen();

		if (!err.empty()) {
			//fatal_exit(err);
		}
		err = ptr->start_workers();
		if (!err.empty()) {
			//fatal_exit(err);
		}

		return 0;
	}
}



