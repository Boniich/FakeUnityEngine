
#ifndef MENUBAR_H

#include "FileButton.h"
#include "EditButton.h"

class FileBUtton;
class EditButton;

using namespace MenuBarSpace;

class MenuBar {
	
	MenuBarSpace::FileButton* _fileButton = nullptr;
	MenuBarSpace::EditButton* _editButton = nullptr;

private:
	void addAssetsButton();
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
