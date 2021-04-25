#include <iostream>
#include <httplib>
#include <math.h>

int test() {
	httplib::Client client("http://enylbx7nd194.x.pipedream.net");
	auto aaa = client.Get("/");
	return aaa->status;
}
