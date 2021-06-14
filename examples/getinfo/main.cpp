#include <iostream>
#include <matd/core/MaterialDesigner.hpp>
#include <matd/core/Log.hpp>

int main() {
	MATD::CORE::MaterialDesigner* matd = new MATD::CORE::MaterialDesigner();
	MATD_TRACE("APPLICATION::Started");
	std::cin.get();
	delete(matd);
}