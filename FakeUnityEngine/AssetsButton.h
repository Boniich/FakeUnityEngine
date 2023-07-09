#pragma once
#include "CreateMenuItem.h"

class CreateMenuItem;

using namespace CreateMenuItemSpace;

namespace MenuBarSpace {

	class AssetsButton {
	private:
		CreateMenuItemSpace::CreateMenuItem* _createMenuItem = nullptr;
	public:
		AssetsButton();
		void addAssetsButton();
	};
}