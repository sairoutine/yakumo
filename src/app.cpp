#include <unistd.h>
#include <string>
#include "yakumo.h"
namespace yakumo {
	struct socket_arguments {
		int family;
		int msg_timeout;
		int nodelay;
		int protocol;
		int socktype;
		int timeout;
		bool nonblocking;
		bool reuseaddr;
		bool use_epoll;
	};


	struct auto_fd {
		auto_fd() : fd(-1) { }
		~auto_fd() {
			reset();
		}
		int get() const { return fd; }
		int close() {
			int r = 0;
			if (fd < 0) {
				return r;
			}

			r = ::close(fd);
			fd = -1;
			return r;
		}
		void reset() {
			if (fd >= 0) {
				close();
			}
		}

		private:
			int fd;
	};

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
