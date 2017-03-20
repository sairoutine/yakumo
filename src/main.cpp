#include <iostream>
#include "yakumo.h"

int main(int argc, char **argv)
{
	if (argc < 2) {
		fprintf(stderr, "Usage: %s CONFIG_FILE\n", argv[0]);
		return 1;
	}

	// yakumo::config conf;
	// yakumo::util::read_config(conf, argv + 1, argc - 1);
	// yakumo::verbose_level = conf.get_int("verbose", 0);
	// set_signal_handlers();
	// yakumo::main(conf);
	yakumo::yakumo_main();
	fprintf(stderr, "Yakumo quit.\n");
	return 0;
}

