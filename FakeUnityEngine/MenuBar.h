
#ifndef MENUBAR_H

#include "FileButton.h"
#include "EditButton.h"
#include "AssetsButton.h"

class FileBUtton;
class EditButton;
class AssetsButton;

using namespace MenuBarSpace;

class MenuBar {
	
	MenuBarSpace::FileButton* _fileButton = nullptr;
	MenuBarSpace::EditButton* _editButton = nullptr;
	MenuBarSpace::AssetsButton* _assetsButton = nullptr;

private:
	void addCreateList();
	void add2DMenu();
	void addGameObjectButton();
	void addComponentButton();
	void addJobsButton();
	void addWindowButton();
	void addHelpButton();

public:
	MenuBar();
	~MenuBar();
	void addMainMenuBar();
};


#endif // !MENUBAR_H
